#pragma once
#include "preDB.h"
namespace dragonBones
{
	class Event
	{
		String _type;
	public:
		Event(const String &type)
		: _type(type)
		{};
		virtual ~Event(){};

		const String &getType()const
		{
			return _type;
		}
	};

	class EventDispatcher
	{
	public:
		typedef void (*Function)(Event *event , void *userData);
		// ʹ�� EventDispatcher ����ע���¼�������������ʹ�������ܹ������¼�֪ͨ�� 
		void addEventListener(const String &type, Function listener , void *userData);

		// ���¼����ȵ��¼����С�
		void dispatchEvent(Event *event);

		// ��� EventDispatcher �����Ƿ�Ϊ�ض��¼�����ע�����κ���������  
		bool hasEventListener(const String &type)const;

		// �� EventDispatcher ������ɾ���������� 
		void removeEventListener(const String &type, Function listener);
	protected:

		typedef std::pair<Function , void*> Callback;
		typedef std::list<Callback> Listeners;
		typedef std::map<String , Listeners> EventListeners;
		// ���������������б�
		EventListeners mEventListeners;
	};
}