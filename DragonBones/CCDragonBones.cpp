//
//  CCDragonBones.cpp
//  quickcocos2dx
//
//  Created by Wayne Dimart on 14-4-18.
//  Copyright (c) 2014年 . All rights reserved.
//

#include "CCDragonBones.h"
#include "cocos2d.h"
#include "DragonBonesHeaders.h"
using namespace cocos2d;
namespace dragonBones {
  
	 CCDragonBones*	CCDragonBones::create(const char* skeletonXMLFile,
													  const char* dragonBonesName,
                                                      const char* armatureName)
	{
		return CCDragonBones::create( skeletonXMLFile,
                                           "texture.xml",
                                            dragonBonesName,
                                            armatureName,
                                            "");
	}
 
															 
   CCDragonBones*	CCDragonBones::create(const char* skeletonXMLFile,
                                                             const char* textureXMLFile,
                                                             const char* dragonBonesName,
                                                             const char* armatureName,
                                                             const char* animationName)
	{
		CCDragonBones* pNew = new CCDragonBones();
        if(pNew && pNew->init())
        {
			Armature*arm = CCDragonBones::buildArmature( skeletonXMLFile,
                                           textureXMLFile,
                                            dragonBonesName,
                                            armatureName,
                                            animationName);
            pNew->initWithArmature(arm);
            pNew->autorelease();
            return pNew;
        }
        CC_SAFE_DELETE(pNew);
        return NULL;
	}
    
    CCDragonBones* CCDragonBones::create(Armature*arm)
    {
        CCDragonBones* pNew = new CCDragonBones();
        if(pNew && pNew->init())
        {
            pNew->initWithArmature(arm);
            pNew->autorelease();
            return pNew;
        }
        CC_SAFE_DELETE(pNew);
        return NULL;
    }
    void CCDragonBones::update(float dt)
    {
        if(m_Armature)
            m_Armature->advanceTime(dt);
    }
    
    CCNode*  CCDragonBones::getDisplayNode(){
        return static_cast<CocosNode*>(m_Armature->getDisplay())->node;
    }
    
    Armature*  CCDragonBones::getArmature()
    {
        return m_Armature;
    }
	
    void  CCDragonBones::addEventListener(const String &type,const String &key, cocos2d::CCObject*pObj,SEL_CallFuncND callback)
    {  
		m_Caller = pObj;
		m_Callback = callback;
		std::function<void(Event*)> f =  std::bind(&CCDragonBones::eventBridge, this,std::placeholders::_1); 
		m_Armature->addEventListener(type, f, key);
    }

	
		bool  CCDragonBones:: hasEventListener(const String &type)
		{
			return m_Armature->hasEventListener(type);
		}
		void CCDragonBones::removeEventListener(const String &type, const std::string &key)
		{
			m_Armature->removeEventListener(type,key);
		}
		void CCDragonBones::dispatchEvent(Event *event)
		{
			m_Armature->dispatchEvent(event);
		}
  void CCDragonBones::eventBridge(Event*e){ 
	  (m_Caller->*m_Callback)(this,e);   
  }
    void CCDragonBones::gotoAndPlay(
                const String &animationName,
                Number fadeInTime ,
                Number duration ,
                Number loop ,
                uint layer ,
                const String &group ,
                const String &fadeOutMode ,
                bool displayControl ,
                bool pauseFadeOut ,
                bool pauseFadeIn
                )
    {
        m_Armature->getAnimation()->gotoAndPlay(
                                                animationName,
                                                fadeInTime ,
                                                duration ,
                                                loop ,
                                                layer ,
                                                group ,
                                                fadeOutMode ,
                                                displayControl ,
                                                pauseFadeOut ,
                                                pauseFadeIn
                                                );
    }
    
    
    void CCDragonBones::onExit()
    {
        this->unscheduleAllSelectors();
    }
    
    Armature*   CCDragonBones::buildArmature(const char* skeletonXMLFile,
                                           const char* textureXMLFile,
                                           const char* dragonBonesName,
                                           const char* armatureName,
                                           const char* animationName)
    {
        XMLDataParser parser;
        XMLDocument doc;
        doc.LoadFile(skeletonXMLFile);
        Cocos2dxFactory fac;
        fac.addSkeletonData(parser.parseSkeletonData(doc.RootElement()) );
        XMLDocument doc1;
        doc1.LoadFile(textureXMLFile);
        fac.addTextureAtlas(new Cocos2dxTextureAtlas(parser.parseTextureAtlasData(doc1.RootElement())));
        return fac.buildArmature(armatureName, animationName ,dragonBonesName);
    }
    
    void CCDragonBones::initWithArmature(Armature*arm)
    {
        this->m_Armature = arm;
        this->schedule(schedule_selector(CCDragonBones::update), 0);
		this->addChild(static_cast<CocosNode*>(m_Armature->getDisplay())->node);
    }
    
    
    
}