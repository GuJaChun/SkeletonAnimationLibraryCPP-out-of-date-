#include "Event.h"
namespace dragonBones
{

	// ʹ�� EventDispatcher ����ע���¼�������������ʹ�������ܹ������¼�֪ͨ�� 
	void EventDispatcher::addEventListener(const String &type, Function listener , void *userData)
	{
		Listeners &list = mEventListeners[type];
		list.push_back(Callback(listener ,userData));
	}

	// ���¼����ȵ��¼����С�
	void EventDispatcher::dispatchEvent(Event *event)
	{
		EventListeners::iterator iter = mEventListeners.find(event->getType());
		if(iter != mEventListeners.end())
		{
			for(Listeners::iterator iterCallback = iter->second.begin() ; iterCallback != iter->second.end() ; iterCallback ++)
			{
				iterCallback->first(event , iterCallback->second);
			}
		}
		delete event;
	}

	// ��� EventDispatcher �����Ƿ�Ϊ�ض��¼�����ע�����κ���������  
	bool EventDispatcher::hasEventListener(const String &type)const
	{
		return mEventListeners.find(type) != mEventListeners.end();
	}

	// �� EventDispatcher ������ɾ���������� 
	void EventDispatcher::removeEventListener(const String &type, Function listener)
	{
		EventListeners::iterator iter = mEventListeners.find(type);
		if(iter != mEventListeners.end())
		{
			for(Listeners::iterator iterCallback = iter->second.begin() ; iterCallback != iter->second.end() ; )
			{
				if(iterCallback->first == listener)
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


}