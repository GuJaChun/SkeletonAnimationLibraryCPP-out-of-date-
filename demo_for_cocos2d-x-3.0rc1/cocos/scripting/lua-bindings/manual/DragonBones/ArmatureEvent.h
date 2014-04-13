#ifndef __ARMATURE_EVENT_H__
#define __ARMATURE_EVENT_H__
#include "preDB.h"
#include "DBEvent.h"
namespace dragonBones
{
    /**
     * The ArmatureEvent provides and defines all events dispatched directly by an Armature instance.
     *
     * 
     * @see dragonBones.animation.Animation
     */
    class ArmatureEvent : public Event
    {
    public:
        /**
         * Dispatched after a successful z order update.
         */
        static const String Z_ORDER_UPDATED;
        
        ArmatureEvent(const String &type)
            : Event(type)
        {

        }

		virtual const char *getClassName()const
		{
			return "db.ArmatureEvent";
		}
    };
}

#endif // __ARMATURE_EVENT_H__
