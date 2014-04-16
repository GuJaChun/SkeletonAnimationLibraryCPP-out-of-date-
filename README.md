
SkeletonAnimationLibraryCPP for cocos2d-x3.0rc1
===========================

# 目录说明

* `demo_for_cocos2d-x-3.0rc1` 一个简单的DEMO，基于cocos2d-x3.0rc1编写，实现了lua导出，可以通过lua来创建动画。

# Build & Run

1. 使用VS2012或更高版本打开 `demo_for_cocos2d-x-3.0rc1/build/cocos2d-win32.vc2012.sln`
2. Build Debug或Release
3. Run lua-empty-test
4. Goodluck!

# DragonBones源码结构

DragonBones源码在demo_for_cocos2d-x-3.0rc1\cocos\scripting\lua-bindings\manual\DragonBones目录里，Cocosx开头的文件（Cocos2dxAtlasNode.cpp、Cocos2dxDisplayBridge.cpp等等）是cocos2dx的渲染层实现代码，只有这些代码是依赖cocos2d-x的，其他代码都没有依赖cocos2d-x。

其他代码是基于dragonBones 2.4版本的actionScript版本翻译过来，只是语言改成C++，算法部分没有任何改动。


SkeletonAnimationLibraryCPP for cocos2.2
===========================

# 目录说明

* `DragonBones` cocos2d-x 2.2 C++版本的DragonBones源码实现
* `demo_for_cocos2d-x-2.2.2` 一个简单的DEMO，基于cocos2d-x2.2.2编写，修改了一点点CCTextureAtlas.cpp的代码，同时把除了vs2010之外的所有工程删除了。

# Build & Run

1. 使用VS2010或更高版本打开 `demo_for_cocos2d-x-2.2.2/cocos2d-win32.vc2010.sln`
2. Build Debug或Release
3. Run HelloCpp
4. Goodluck!

# DragonBones源码结构

DragonBones目录里，Cocosx开头的文件（Cocos2dxAtlasNode.cpp、Cocos2dxDisplayBridge.cpp等等）是cocos2dx的渲染层实现代码，只有这些代码是依赖cocos2d-x的，其他代码都没有依赖cocos2d-x。

其他代码是基于dragonBones 2.4版本的actionScript版本翻译过来，只是语言改成C++，算法部分没有任何改动。  
  
#  现已支持quick-cocos2d-x 2.1.5版本.  
想要和quick-cocos2d-x一起使用:  
1. 将preDB.h的#define USE_QUICK_COCOS2DX_215取消注释  
2. 把quick-cocos2d-x的CCTextureAtlas两个文件用  
https://github.com/DragonBones/SkeletonAnimationLibraryCPP/tree/master/demo_for_cocos2d-x-2.2.2/cocos2dx/textures  
替换掉即可.
