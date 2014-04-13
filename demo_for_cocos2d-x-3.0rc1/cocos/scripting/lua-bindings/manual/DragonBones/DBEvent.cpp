#include "DBEvent.h"
#include "CCLuaEngine.h"
namespace dragonBones
{

    // 使用 EventDispatcher 对象注册事件侦听器对象，以使侦听器能够接收事件通知。 
	void EventDispatcher::addEventListener(const String &type, Function listener, const std::string &key)
    {
        Listeners &list = mEventListeners[type];
		list.push_back(Callback(listener, key));
    }

    // 将事件调度到事件流中。
    void EventDispatcher::dispatchEvent(Event *event)
    {
        EventListeners::iterator iter = mEventListeners.find(event->getType());
        if(iter != mEventListeners.end())
        {
            for(Listeners::iterator iterCallback = iter->second.begin() ; iterCallback != iter->second.end() ; iterCallback ++)
            {
                iterCallback->first(event);
            }
        }
        delete event;
    }

    // 检查 EventDispatcher 对象是否为特定事件类型注册了任何侦听器。  
    bool EventDispatcher::hasEventListener(const String &type)const
    {
        return mEventListeners.find(type) != mEventListeners.end();
    }

    // 从 EventDispatcher 对象中删除侦听器。 
    void EventDispatcher::removeEventListener(const String &type, const std::string &key)
    {
        EventListeners::iterator iter = mEventListeners.find(type);
        if(iter != mEventListeners.end())
        {
            for(Listeners::iterator iterCallback = iter->second.begin() ; iterCallback != iter->second.end() ; )
            {
				if (iterCallback->second == key)
                {
                    iterCallback = iter->second.erase(iterCallback);
                }
                else
                {
                    iterCallback ++;
                }
            }
        }
    }

	void EventDispatcher::addListener(const String &type , SCRIPT_FUNCTION handler)
	{
		auto func = [handler](Event* event)
		{
			cocos2d::LuaEngine::getInstance()->executeEvent(handler , event->getType().c_str() , event , event->getClassName());
		};
		
		char key[128];
		snprintf(key , sizeof(key) , "%s_s_%d" , type.c_str() , handler);
		
		addEventListener(type , func , key);
	}

	void EventDispatcher::removeListener(const String &type , SCRIPT_FUNCTION handler)
	{
		char key[128];
		snprintf(key , sizeof(key) , "%s_s_%d" , type.c_str() , handler);
		removeEventListener(type , key);
	}




}