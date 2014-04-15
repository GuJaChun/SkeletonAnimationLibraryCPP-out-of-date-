#include "HelloWorldScene.h"
#include "AppMacros.h"
#include "DragonBones/Cocos2dxFactory.h"
#include "DragonBones/XMLDataParser.h"
#include "DragonBones/AnimationEvent.h"

USING_NS_CC;


Scene* HelloWorld::scene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    HelloWorld *layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
	arm = nullptr;

    auto visibleSize = Director::getInstance()->getVisibleSize();
    auto origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        CC_CALLBACK_1(HelloWorld::menuCloseCallback,this));
    
    closeItem->setPosition(origin + Point(visibleSize) - Point(closeItem->getContentSize() / 2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);
    
    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    dragonBones::Cocos2dxFactory fac;
	fac.loadSkeletonFile("skeleton.xml" , "");
	fac.loadTextureAtlasFile("texture.xml" , "");

	arm = fac.buildArmature("Zombie_polevaulter" , "" , "Zombie");
	auto skeletonNode = dynamic_cast<dragonBones::CocosNode*>(arm->getDisplay())->getNode();
	skeletonNode->setPosition(100, 200);
	this->addChild(skeletonNode);

	arm->addEventListener(
		dragonBones::AnimationEvent::LOOP_COMPLETE,
		[](dragonBones::Event *e){
			CCLOG("arm event %s", dragonBones::AnimationEvent::LOOP_COMPLETE.c_str());
		},
		"key"
		);

	arm->getAnimation()->gotoAndPlay("anim_run");

	this->scheduleUpdate();
    
    return true;
}

void HelloWorld::menuCloseCallback(Ref* sender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

void HelloWorld::update( float f )
{
	if (arm)
	{
		arm->advanceTime(f);
	}
}
