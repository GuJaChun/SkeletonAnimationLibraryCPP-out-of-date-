#include "cocos2dx_dragonBones_auto.hpp"
#include "db-ext.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_dragonBones_Animation_setTimeScale(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_setTimeScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setTimeScale(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTimeScale",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_setTimeScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_getMovementID(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_getMovementID'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const dragonBones::String& ret = cobj->getMovementID();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementID",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_getMovementID'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_addState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_addState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::AnimationState* arg0;

        ok &= luaval_to_object<dragonBones::AnimationState>(tolua_S, 2, "db.AnimationState",&arg0);
        if(!ok)
            return 0;
        cobj->addState(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_addState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_dispose(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_dispose'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->dispose();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "dispose",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_dispose'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_setActive(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_setActive'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::AnimationState* arg0;
        bool arg1;

        ok &= luaval_to_object<dragonBones::AnimationState>(tolua_S, 2, "db.AnimationState",&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setActive(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setActive",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_setActive'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_play(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_play'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->play();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "play",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_play'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_getState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_getState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->getState(arg0);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 2) 
    {
        dragonBones::String arg0;
        unsigned int arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_uint32(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->getState(arg0, arg1);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_getState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_removeState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_removeState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::AnimationState* arg0;

        ok &= luaval_to_object<dragonBones::AnimationState>(tolua_S, 2, "db.AnimationState",&arg0);
        if(!ok)
            return 0;
        cobj->removeState(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_removeState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_stop(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_stop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stop();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_stop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_getLastAnimationState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_getLastAnimationState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->getLastAnimationState();
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLastAnimationState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_getLastAnimationState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_getIsComplete(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_getIsComplete'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getIsComplete();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getIsComplete",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_getIsComplete'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_advanceTime(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_advanceTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->advanceTime(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "advanceTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_advanceTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_getTimeScale(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_getTimeScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getTimeScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTimeScale",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_getTimeScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_hasAnimation(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_hasAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->hasAnimation(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hasAnimation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_hasAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_gotoAndPlay(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_gotoAndPlay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 2) 
    {
        dragonBones::String arg0;
        double arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 3) 
    {
        dragonBones::String arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1, arg2);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 4) 
    {
        dragonBones::String arg0;
        double arg1;
        double arg2;
        double arg3;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1, arg2, arg3);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 5) 
    {
        dragonBones::String arg0;
        double arg1;
        double arg2;
        double arg3;
        unsigned int arg4;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);

        ok &= luaval_to_uint32(tolua_S, 6,&arg4);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1, arg2, arg3, arg4);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 6) 
    {
        dragonBones::String arg0;
        double arg1;
        double arg2;
        double arg3;
        unsigned int arg4;
        dragonBones::String arg5;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);

        ok &= luaval_to_uint32(tolua_S, 6,&arg4);

        ok &= luaval_to_std_string(tolua_S, 7,&arg5);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1, arg2, arg3, arg4, arg5);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 7) 
    {
        dragonBones::String arg0;
        double arg1;
        double arg2;
        double arg3;
        unsigned int arg4;
        dragonBones::String arg5;
        dragonBones::String arg6;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);

        ok &= luaval_to_uint32(tolua_S, 6,&arg4);

        ok &= luaval_to_std_string(tolua_S, 7,&arg5);

        ok &= luaval_to_std_string(tolua_S, 8,&arg6);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 8) 
    {
        dragonBones::String arg0;
        double arg1;
        double arg2;
        double arg3;
        unsigned int arg4;
        dragonBones::String arg5;
        dragonBones::String arg6;
        bool arg7;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);

        ok &= luaval_to_uint32(tolua_S, 6,&arg4);

        ok &= luaval_to_std_string(tolua_S, 7,&arg5);

        ok &= luaval_to_std_string(tolua_S, 8,&arg6);

        ok &= luaval_to_boolean(tolua_S, 9,&arg7);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 9) 
    {
        dragonBones::String arg0;
        double arg1;
        double arg2;
        double arg3;
        unsigned int arg4;
        dragonBones::String arg5;
        dragonBones::String arg6;
        bool arg7;
        bool arg8;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);

        ok &= luaval_to_uint32(tolua_S, 6,&arg4);

        ok &= luaval_to_std_string(tolua_S, 7,&arg5);

        ok &= luaval_to_std_string(tolua_S, 8,&arg6);

        ok &= luaval_to_boolean(tolua_S, 9,&arg7);

        ok &= luaval_to_boolean(tolua_S, 10,&arg8);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    if (argc == 10) 
    {
        dragonBones::String arg0;
        double arg1;
        double arg2;
        double arg3;
        unsigned int arg4;
        dragonBones::String arg5;
        dragonBones::String arg6;
        bool arg7;
        bool arg8;
        bool arg9;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);

        ok &= luaval_to_uint32(tolua_S, 6,&arg4);

        ok &= luaval_to_std_string(tolua_S, 7,&arg5);

        ok &= luaval_to_std_string(tolua_S, 8,&arg6);

        ok &= luaval_to_boolean(tolua_S, 9,&arg7);

        ok &= luaval_to_boolean(tolua_S, 10,&arg8);

        ok &= luaval_to_boolean(tolua_S, 11,&arg9);
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = cobj->gotoAndPlay(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "gotoAndPlay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_gotoAndPlay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_getIsPlaying(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_getIsPlaying'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getIsPlaying();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getIsPlaying",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_getIsPlaying'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_addLayer(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Animation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Animation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Animation_addLayer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        unsigned int ret = cobj->addLayer(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addLayer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_addLayer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Animation_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Animation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::Armature* arg0;

        ok &= luaval_to_object<dragonBones::Armature>(tolua_S, 2, "db.Armature",&arg0);
        if(!ok)
            return 0;
        cobj = new dragonBones::Animation(arg0);
        tolua_pushusertype(tolua_S,(void*)cobj,"db.Animation");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Animation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Animation_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_Animation_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Animation)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_Animation(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.Animation");
    tolua_cclass(tolua_S,"Animation","db.Animation","db.Object",nullptr);

    tolua_beginmodule(tolua_S,"Animation");
        tolua_function(tolua_S,"setTimeScale",lua_cocos2dx_dragonBones_Animation_setTimeScale);
        tolua_function(tolua_S,"getMovementID",lua_cocos2dx_dragonBones_Animation_getMovementID);
        tolua_function(tolua_S,"addState",lua_cocos2dx_dragonBones_Animation_addState);
        tolua_function(tolua_S,"dispose",lua_cocos2dx_dragonBones_Animation_dispose);
        tolua_function(tolua_S,"setActive",lua_cocos2dx_dragonBones_Animation_setActive);
        tolua_function(tolua_S,"play",lua_cocos2dx_dragonBones_Animation_play);
        tolua_function(tolua_S,"getState",lua_cocos2dx_dragonBones_Animation_getState);
        tolua_function(tolua_S,"removeState",lua_cocos2dx_dragonBones_Animation_removeState);
        tolua_function(tolua_S,"stop",lua_cocos2dx_dragonBones_Animation_stop);
        tolua_function(tolua_S,"getLastAnimationState",lua_cocos2dx_dragonBones_Animation_getLastAnimationState);
        tolua_function(tolua_S,"getIsComplete",lua_cocos2dx_dragonBones_Animation_getIsComplete);
        tolua_function(tolua_S,"advanceTime",lua_cocos2dx_dragonBones_Animation_advanceTime);
        tolua_function(tolua_S,"getTimeScale",lua_cocos2dx_dragonBones_Animation_getTimeScale);
        tolua_function(tolua_S,"hasAnimation",lua_cocos2dx_dragonBones_Animation_hasAnimation);
        tolua_function(tolua_S,"gotoAndPlay",lua_cocos2dx_dragonBones_Animation_gotoAndPlay);
        tolua_function(tolua_S,"getIsPlaying",lua_cocos2dx_dragonBones_Animation_getIsPlaying);
        tolua_function(tolua_S,"addLayer",lua_cocos2dx_dragonBones_Animation_addLayer);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_Animation_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::Animation).name();
    g_luaType[typeName] = "db.Animation";
    g_typeCast["Animation"] = "db.Animation";
    return 1;
}

int lua_cocos2dx_dragonBones_Event_getClassName(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Event* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Event",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Event*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Event_getClassName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getClassName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getClassName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Event_getClassName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Event_getType(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Event* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Event",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Event*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Event_getType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const dragonBones::String& ret = cobj->getType();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Event_getType'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_dragonBones_Event_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Event)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_Event(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.Event");
    tolua_cclass(tolua_S,"Event","db.Event","db.Object",nullptr);

    tolua_beginmodule(tolua_S,"Event");
        tolua_function(tolua_S,"getClassName",lua_cocos2dx_dragonBones_Event_getClassName);
        tolua_function(tolua_S,"getType",lua_cocos2dx_dragonBones_Event_getType);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::Event).name();
    g_luaType[typeName] = "db.Event";
    g_typeCast["Event"] = "db.Event";
    return 1;
}

int lua_cocos2dx_dragonBones_EventDispatcher_addListener(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventDispatcher* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventDispatcher",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventDispatcher*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_EventDispatcher_addListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::String arg0;
        dragonBones::SCRIPT_FUNCTION arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_function(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->addListener(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_EventDispatcher_addListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_EventDispatcher_removeEventListener(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventDispatcher* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventDispatcher",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventDispatcher*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_EventDispatcher_removeEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::String arg0;
        std::string arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeEventListener(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeEventListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_EventDispatcher_removeEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_EventDispatcher_addEventListener(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventDispatcher* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventDispatcher",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventDispatcher*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_EventDispatcher_addEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        dragonBones::String arg0;
        std::function<void (dragonBones::Event *)> arg1;
        std::string arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;

        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addEventListener(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addEventListener",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_EventDispatcher_addEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_EventDispatcher_dispatchEvent(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventDispatcher* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventDispatcher",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventDispatcher*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_EventDispatcher_dispatchEvent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::Event* arg0;

        ok &= luaval_to_object<dragonBones::Event>(tolua_S, 2, "db.Event",&arg0);
        if(!ok)
            return 0;
        cobj->dispatchEvent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "dispatchEvent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_EventDispatcher_dispatchEvent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_EventDispatcher_hasEventListener(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventDispatcher* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventDispatcher",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventDispatcher*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_EventDispatcher_hasEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->hasEventListener(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hasEventListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_EventDispatcher_hasEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_EventDispatcher_removeListener(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventDispatcher* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventDispatcher",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventDispatcher*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_EventDispatcher_removeListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::String arg0;
        dragonBones::SCRIPT_FUNCTION arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_function(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->removeListener(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_EventDispatcher_removeListener'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_dragonBones_EventDispatcher_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EventDispatcher)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_EventDispatcher(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.EventDispatcher");
    tolua_cclass(tolua_S,"EventDispatcher","db.EventDispatcher","db.Object",nullptr);

    tolua_beginmodule(tolua_S,"EventDispatcher");
        tolua_function(tolua_S,"addListener",lua_cocos2dx_dragonBones_EventDispatcher_addListener);
        tolua_function(tolua_S,"removeEventListener",lua_cocos2dx_dragonBones_EventDispatcher_removeEventListener);
        tolua_function(tolua_S,"addEventListener",lua_cocos2dx_dragonBones_EventDispatcher_addEventListener);
        tolua_function(tolua_S,"dispatchEvent",lua_cocos2dx_dragonBones_EventDispatcher_dispatchEvent);
        tolua_function(tolua_S,"hasEventListener",lua_cocos2dx_dragonBones_EventDispatcher_hasEventListener);
        tolua_function(tolua_S,"removeListener",lua_cocos2dx_dragonBones_EventDispatcher_removeListener);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::EventDispatcher).name();
    g_luaType[typeName] = "db.EventDispatcher";
    g_typeCast["EventDispatcher"] = "db.EventDispatcher";
    return 1;
}

int lua_cocos2dx_dragonBones_Armature_getBone(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_getBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        dragonBones::Bone* ret = cobj->getBone(arg0);
        object_to_luaval<dragonBones::Bone>(tolua_S, "db.Bone",(dragonBones::Bone*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_getBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_getSlot(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_getSlot'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        dragonBones::Slot* ret = cobj->getSlot(arg0);
        object_to_luaval<dragonBones::Slot>(tolua_S, "db.Slot",(dragonBones::Slot*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSlot",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_getSlot'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_dispose(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_dispose'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->dispose();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "dispose",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_dispose'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_removeSlotByName(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_removeSlotByName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeSlotByName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeSlotByName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_removeSlotByName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_addChild(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_addChild'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::DBObject* arg0;

        ok &= luaval_to_object<dragonBones::DBObject>(tolua_S, 2, "db.DBObject",&arg0);
        if(!ok)
            return 0;
        cobj->addChild(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        dragonBones::DBObject* arg0;
        dragonBones::String arg1;

        ok &= luaval_to_object<dragonBones::DBObject>(tolua_S, 2, "db.DBObject",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addChild(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addChild",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_addChild'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_arriveAtFrame(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_arriveAtFrame'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        dragonBones::Frame* arg0;
        dragonBones::TimelineState* arg1;
        dragonBones::AnimationState* arg2;
        bool arg3;

        ok &= luaval_to_object<dragonBones::Frame>(tolua_S, 2, "db.Frame",&arg0);

        ok &= luaval_to_object<dragonBones::TimelineState>(tolua_S, 3, "db.TimelineState",&arg1);

        ok &= luaval_to_object<dragonBones::AnimationState>(tolua_S, 4, "db.AnimationState",&arg2);

        ok &= luaval_to_boolean(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cobj->arriveAtFrame(arg0, arg1, arg2, arg3);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "arriveAtFrame",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_arriveAtFrame'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_updateSlotsZOrder(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_updateSlotsZOrder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateSlotsZOrder();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateSlotsZOrder",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_updateSlotsZOrder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_sortBoneList(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_sortBoneList'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->sortBoneList();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "sortBoneList",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_sortBoneList'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_removeBone(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_removeBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::Bone* arg0;

        ok &= luaval_to_object<dragonBones::Bone>(tolua_S, 2, "db.Bone",&arg0);
        if(!ok)
            return 0;
        cobj->removeBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_removeBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_getDisplay(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_getDisplay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Ref* ret = cobj->getDisplay();
        object_to_luaval<cocos2d::Ref>(tolua_S, "cc.Ref",(cocos2d::Ref*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplay",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_getDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_invalidUpdate(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_invalidUpdate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->invalidUpdate();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "invalidUpdate",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_invalidUpdate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_addDBObject(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_addDBObject'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::DBObject* arg0;

        ok &= luaval_to_object<dragonBones::DBObject>(tolua_S, 2, "db.DBObject",&arg0);
        if(!ok)
            return 0;
        cobj->addDBObject(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDBObject",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_addDBObject'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_getBoneByDisplay(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_getBoneByDisplay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Ref* arg0;

        ok &= luaval_to_object<cocos2d::Ref>(tolua_S, 2, "cc.Ref",&arg0);
        if(!ok)
            return 0;
        dragonBones::Bone* ret = cobj->getBoneByDisplay(arg0);
        object_to_luaval<dragonBones::Bone>(tolua_S, "db.Bone",(dragonBones::Bone*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneByDisplay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_getBoneByDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_removeBoneByName(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_removeBoneByName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeBoneByName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeBoneByName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_removeBoneByName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_removeSlot(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_removeSlot'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::Slot* arg0;

        ok &= luaval_to_object<dragonBones::Slot>(tolua_S, 2, "db.Slot",&arg0);
        if(!ok)
            return 0;
        cobj->removeSlot(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeSlot",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_removeSlot'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_addBone(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_addBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::Bone* arg0;

        ok &= luaval_to_object<dragonBones::Bone>(tolua_S, 2, "db.Bone",&arg0);
        if(!ok)
            return 0;
        cobj->addBone(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        dragonBones::Bone* arg0;
        dragonBones::String arg1;

        ok &= luaval_to_object<dragonBones::Bone>(tolua_S, 2, "db.Bone",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_addBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_advanceTime(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_advanceTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->advanceTime(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "advanceTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_advanceTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_getAnimation(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_getAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Animation* ret = cobj->getAnimation();
        object_to_luaval<dragonBones::Animation>(tolua_S, "db.Animation",(dragonBones::Animation*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_getAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_removeDBObject(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_removeDBObject'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::DBObject* arg0;

        ok &= luaval_to_object<dragonBones::DBObject>(tolua_S, 2, "db.DBObject",&arg0);
        if(!ok)
            return 0;
        cobj->removeDBObject(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeDBObject",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_removeDBObject'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_getSlotByDisplay(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Armature_getSlotByDisplay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Ref* arg0;

        ok &= luaval_to_object<cocos2d::Ref>(tolua_S, 2, "cc.Ref",&arg0);
        if(!ok)
            return 0;
        dragonBones::Slot* ret = cobj->getSlotByDisplay(arg0);
        object_to_luaval<dragonBones::Slot>(tolua_S, "db.Slot",(dragonBones::Slot*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSlotByDisplay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_getSlotByDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Armature_sortSlot(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        dragonBones::Slot* arg0;
        dragonBones::Slot* arg1;
        ok &= luaval_to_object<dragonBones::Slot>(tolua_S, 2, "db.Slot",&arg0);
        ok &= luaval_to_object<dragonBones::Slot>(tolua_S, 3, "db.Slot",&arg1);
        if(!ok)
            return 0;
        bool ret = dragonBones::Armature::sortSlot(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "sortSlot",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_sortSlot'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dragonBones_Armature_sortBone(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::pair<int, dragonBones::Bone *> arg0;
        std::pair<int, dragonBones::Bone *> arg1;
        #pragma warning NO CONVERSION TO NATIVE FOR pair<int, dragonBones::Bone *>;
        #pragma warning NO CONVERSION TO NATIVE FOR pair<int, dragonBones::Bone *>;
        if(!ok)
            return 0;
        bool ret = dragonBones::Armature::sortBone(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "sortBone",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_sortBone'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dragonBones_Armature_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Ref* arg0;

        ok &= luaval_to_object<cocos2d::Ref>(tolua_S, 2, "cc.Ref",&arg0);
        if(!ok)
            return 0;
        cobj = new dragonBones::Armature(arg0);
        tolua_pushusertype(tolua_S,(void*)cobj,"db.Armature");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Armature",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Armature_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_Armature_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Armature)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_Armature(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.Armature");
    tolua_cclass(tolua_S,"Armature","db.Armature","db.EventDispatcher",nullptr);

    tolua_beginmodule(tolua_S,"Armature");
        tolua_function(tolua_S,"getBone",lua_cocos2dx_dragonBones_Armature_getBone);
        tolua_function(tolua_S,"getSlot",lua_cocos2dx_dragonBones_Armature_getSlot);
        tolua_function(tolua_S,"dispose",lua_cocos2dx_dragonBones_Armature_dispose);
        tolua_function(tolua_S,"removeSlotByName",lua_cocos2dx_dragonBones_Armature_removeSlotByName);
        tolua_function(tolua_S,"addChild",lua_cocos2dx_dragonBones_Armature_addChild);
        tolua_function(tolua_S,"arriveAtFrame",lua_cocos2dx_dragonBones_Armature_arriveAtFrame);
        tolua_function(tolua_S,"updateSlotsZOrder",lua_cocos2dx_dragonBones_Armature_updateSlotsZOrder);
        tolua_function(tolua_S,"sortBoneList",lua_cocos2dx_dragonBones_Armature_sortBoneList);
        tolua_function(tolua_S,"removeBone",lua_cocos2dx_dragonBones_Armature_removeBone);
        tolua_function(tolua_S,"getDisplay",lua_cocos2dx_dragonBones_Armature_getDisplay);
        tolua_function(tolua_S,"invalidUpdate",lua_cocos2dx_dragonBones_Armature_invalidUpdate);
        tolua_function(tolua_S,"addDBObject",lua_cocos2dx_dragonBones_Armature_addDBObject);
        tolua_function(tolua_S,"getBoneByDisplay",lua_cocos2dx_dragonBones_Armature_getBoneByDisplay);
        tolua_function(tolua_S,"removeBoneByName",lua_cocos2dx_dragonBones_Armature_removeBoneByName);
        tolua_function(tolua_S,"removeSlot",lua_cocos2dx_dragonBones_Armature_removeSlot);
        tolua_function(tolua_S,"addBone",lua_cocos2dx_dragonBones_Armature_addBone);
        tolua_function(tolua_S,"advanceTime",lua_cocos2dx_dragonBones_Armature_advanceTime);
        tolua_function(tolua_S,"getAnimation",lua_cocos2dx_dragonBones_Armature_getAnimation);
        tolua_function(tolua_S,"removeDBObject",lua_cocos2dx_dragonBones_Armature_removeDBObject);
        tolua_function(tolua_S,"getSlotByDisplay",lua_cocos2dx_dragonBones_Armature_getSlotByDisplay);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_Armature_constructor);
        tolua_function(tolua_S,"sortSlot", lua_cocos2dx_dragonBones_Armature_sortSlot);
        tolua_function(tolua_S,"sortBone", lua_cocos2dx_dragonBones_Armature_sortBone);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::Armature).name();
    g_luaType[typeName] = "db.Armature";
    g_typeCast["Armature"] = "db.Armature";
    return 1;
}

int lua_cocos2dx_dragonBones_BaseFactory_addSkeletonData(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_addSkeletonData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::SkeletonData* arg0;

        ok &= luaval_to_object<dragonBones::SkeletonData>(tolua_S, 2, "db.SkeletonData",&arg0);
        if(!ok)
            return 0;
        cobj->addSkeletonData(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        dragonBones::SkeletonData* arg0;
        dragonBones::String arg1;

        ok &= luaval_to_object<dragonBones::SkeletonData>(tolua_S, 2, "db.SkeletonData",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addSkeletonData(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addSkeletonData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_addSkeletonData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_buildArmature(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_buildArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->buildArmature(arg0);
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    if (argc == 2) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->buildArmature(arg0, arg1);
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    if (argc == 3) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;
        dragonBones::String arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->buildArmature(arg0, arg1, arg2);
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    if (argc == 4) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;
        dragonBones::String arg2;
        dragonBones::String arg3;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_std_string(tolua_S, 4,&arg2);

        ok &= luaval_to_std_string(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->buildArmature(arg0, arg1, arg2, arg3);
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    if (argc == 5) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;
        dragonBones::String arg2;
        dragonBones::String arg3;
        dragonBones::String arg4;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_std_string(tolua_S, 4,&arg2);

        ok &= luaval_to_std_string(tolua_S, 5,&arg3);

        ok &= luaval_to_std_string(tolua_S, 6,&arg4);
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->buildArmature(arg0, arg1, arg2, arg3, arg4);
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "buildArmature",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_buildArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_getSkeletonData(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_getSkeletonData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        dragonBones::SkeletonData* ret = cobj->getSkeletonData(arg0);
        object_to_luaval<dragonBones::SkeletonData>(tolua_S, "db.SkeletonData",(dragonBones::SkeletonData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSkeletonData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_getSkeletonData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_removeTextureAtlas(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_removeTextureAtlas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeTextureAtlas(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeTextureAtlas",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_removeTextureAtlas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_dispose(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_dispose'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->dispose();
        return 0;
    }
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->dispose(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "dispose",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_dispose'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_getTextureAtlas(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_getTextureAtlas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        dragonBones::ITextureAtlas* ret = cobj->getTextureAtlas(arg0);
        object_to_luaval<dragonBones::ITextureAtlas>(tolua_S, "db.ITextureAtlas",(dragonBones::ITextureAtlas*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureAtlas",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_getTextureAtlas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_generateDisplay(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_generateDisplay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        dragonBones::ITextureAtlas* arg0;
        dragonBones::String arg1;
        double arg2;
        double arg3;

        ok &= luaval_to_object<dragonBones::ITextureAtlas>(tolua_S, 2, "db.ITextureAtlas",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::Ref* ret = cobj->generateDisplay(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::Ref>(tolua_S, "cc.Ref",(cocos2d::Ref*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "generateDisplay",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_generateDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_generateTextureAtlas(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_generateTextureAtlas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Ref* arg0;
        dragonBones::TextureAtlasData* arg1;

        ok &= luaval_to_object<cocos2d::Ref>(tolua_S, 2, "cc.Ref",&arg0);

        ok &= luaval_to_object<dragonBones::TextureAtlasData>(tolua_S, 3, "db.TextureAtlasData",&arg1);
        if(!ok)
            return 0;
        dragonBones::ITextureAtlas* ret = cobj->generateTextureAtlas(arg0, arg1);
        object_to_luaval<dragonBones::ITextureAtlas>(tolua_S, "db.ITextureAtlas",(dragonBones::ITextureAtlas*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "generateTextureAtlas",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_generateTextureAtlas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_loadTextureAtlasFile(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_loadTextureAtlasFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureAtlasFile(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureAtlasFile",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_loadTextureAtlasFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_generateArmature(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_generateArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->generateArmature();
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "generateArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_generateArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_getTextureDisplay(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_getTextureDisplay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::Ref* ret = cobj->getTextureDisplay(arg0);
        object_to_luaval<cocos2d::Ref>(tolua_S, "cc.Ref",(cocos2d::Ref*)ret);
        return 1;
    }
    if (argc == 2) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cocos2d::Ref* ret = cobj->getTextureDisplay(arg0, arg1);
        object_to_luaval<cocos2d::Ref>(tolua_S, "cc.Ref",(cocos2d::Ref*)ret);
        return 1;
    }
    if (argc == 3) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cocos2d::Ref* ret = cobj->getTextureDisplay(arg0, arg1, arg2);
        object_to_luaval<cocos2d::Ref>(tolua_S, "cc.Ref",(cocos2d::Ref*)ret);
        return 1;
    }
    if (argc == 4) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;
        double arg2;
        double arg3;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::Ref* ret = cobj->getTextureDisplay(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::Ref>(tolua_S, "cc.Ref",(cocos2d::Ref*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureDisplay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_getTextureDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_loadSkeletonFile(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_loadSkeletonFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->loadSkeletonFile(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadSkeletonFile",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_loadSkeletonFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_addTextureAtlas(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_addTextureAtlas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::ITextureAtlas* arg0;

        ok &= luaval_to_object<dragonBones::ITextureAtlas>(tolua_S, 2, "db.ITextureAtlas",&arg0);
        if(!ok)
            return 0;
        cobj->addTextureAtlas(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        dragonBones::ITextureAtlas* arg0;
        dragonBones::String arg1;

        ok &= luaval_to_object<dragonBones::ITextureAtlas>(tolua_S, 2, "db.ITextureAtlas",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addTextureAtlas(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addTextureAtlas",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_addTextureAtlas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_generateSlot(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_generateSlot'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Slot* ret = cobj->generateSlot();
        object_to_luaval<dragonBones::Slot>(tolua_S, "db.Slot",(dragonBones::Slot*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "generateSlot",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_generateSlot'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_BaseFactory_removeSkeletonData(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::BaseFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.BaseFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::BaseFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_BaseFactory_removeSkeletonData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeSkeletonData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeSkeletonData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_BaseFactory_removeSkeletonData'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_dragonBones_BaseFactory_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (BaseFactory)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_BaseFactory(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.BaseFactory");
    tolua_cclass(tolua_S,"BaseFactory","db.BaseFactory","",nullptr);

    tolua_beginmodule(tolua_S,"BaseFactory");
        tolua_function(tolua_S,"addSkeletonData",lua_cocos2dx_dragonBones_BaseFactory_addSkeletonData);
        tolua_function(tolua_S,"buildArmature",lua_cocos2dx_dragonBones_BaseFactory_buildArmature);
        tolua_function(tolua_S,"getSkeletonData",lua_cocos2dx_dragonBones_BaseFactory_getSkeletonData);
        tolua_function(tolua_S,"removeTextureAtlas",lua_cocos2dx_dragonBones_BaseFactory_removeTextureAtlas);
        tolua_function(tolua_S,"dispose",lua_cocos2dx_dragonBones_BaseFactory_dispose);
        tolua_function(tolua_S,"getTextureAtlas",lua_cocos2dx_dragonBones_BaseFactory_getTextureAtlas);
        tolua_function(tolua_S,"generateDisplay",lua_cocos2dx_dragonBones_BaseFactory_generateDisplay);
        tolua_function(tolua_S,"generateTextureAtlas",lua_cocos2dx_dragonBones_BaseFactory_generateTextureAtlas);
        tolua_function(tolua_S,"loadTextureAtlasFile",lua_cocos2dx_dragonBones_BaseFactory_loadTextureAtlasFile);
        tolua_function(tolua_S,"generateArmature",lua_cocos2dx_dragonBones_BaseFactory_generateArmature);
        tolua_function(tolua_S,"getTextureDisplay",lua_cocos2dx_dragonBones_BaseFactory_getTextureDisplay);
        tolua_function(tolua_S,"loadSkeletonFile",lua_cocos2dx_dragonBones_BaseFactory_loadSkeletonFile);
        tolua_function(tolua_S,"addTextureAtlas",lua_cocos2dx_dragonBones_BaseFactory_addTextureAtlas);
        tolua_function(tolua_S,"generateSlot",lua_cocos2dx_dragonBones_BaseFactory_generateSlot);
        tolua_function(tolua_S,"removeSkeletonData",lua_cocos2dx_dragonBones_BaseFactory_removeSkeletonData);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::BaseFactory).name();
    g_luaType[typeName] = "db.BaseFactory";
    g_typeCast["BaseFactory"] = "db.BaseFactory";
    return 1;
}

int lua_cocos2dx_dragonBones_CocosNode_getNode(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CocosNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CocosNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CocosNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_CocosNode_getNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getNode();
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_CocosNode_getNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_CocosNode_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CocosNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);
        if(!ok)
            return 0;
        cobj = new dragonBones::CocosNode(arg0);
        tolua_pushusertype(tolua_S,(void*)cobj,"db.CocosNode");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "CocosNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_CocosNode_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_CocosNode_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (CocosNode)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_CocosNode(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.CocosNode");
    tolua_cclass(tolua_S,"CocosNode","db.CocosNode","db.Object",nullptr);

    tolua_beginmodule(tolua_S,"CocosNode");
        tolua_function(tolua_S,"getNode",lua_cocos2dx_dragonBones_CocosNode_getNode);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_CocosNode_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::CocosNode).name();
    g_luaType[typeName] = "db.CocosNode";
    g_typeCast["CocosNode"] = "db.CocosNode";
    return 1;
}

int lua_cocos2dx_dragonBones_Cocos2dxFactory_generateDisplay(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Cocos2dxFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Cocos2dxFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Cocos2dxFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_generateDisplay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        dragonBones::ITextureAtlas* arg0;
        dragonBones::String arg1;
        double arg2;
        double arg3;

        ok &= luaval_to_object<dragonBones::ITextureAtlas>(tolua_S, 2, "db.ITextureAtlas",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        cocos2d::Ref* ret = cobj->generateDisplay(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::Ref>(tolua_S, "cc.Ref",(cocos2d::Ref*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "generateDisplay",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_generateDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Cocos2dxFactory_loadTextureAtlasFile(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Cocos2dxFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Cocos2dxFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Cocos2dxFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_loadTextureAtlasFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureAtlasFile(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureAtlasFile",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_loadTextureAtlasFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Cocos2dxFactory_generateArmature(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Cocos2dxFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Cocos2dxFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Cocos2dxFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_generateArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->generateArmature();
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "generateArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_generateArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Cocos2dxFactory_generateTextureAtlas(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Cocos2dxFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Cocos2dxFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Cocos2dxFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_generateTextureAtlas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Ref* arg0;
        dragonBones::TextureAtlasData* arg1;

        ok &= luaval_to_object<cocos2d::Ref>(tolua_S, 2, "cc.Ref",&arg0);

        ok &= luaval_to_object<dragonBones::TextureAtlasData>(tolua_S, 3, "db.TextureAtlasData",&arg1);
        if(!ok)
            return 0;
        dragonBones::ITextureAtlas* ret = cobj->generateTextureAtlas(arg0, arg1);
        object_to_luaval<dragonBones::ITextureAtlas>(tolua_S, "db.ITextureAtlas",(dragonBones::ITextureAtlas*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "generateTextureAtlas",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_generateTextureAtlas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Cocos2dxFactory_generateSlot(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Cocos2dxFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Cocos2dxFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Cocos2dxFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_generateSlot'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Slot* ret = cobj->generateSlot();
        object_to_luaval<dragonBones::Slot>(tolua_S, "db.Slot",(dragonBones::Slot*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "generateSlot",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_generateSlot'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Cocos2dxFactory_loadSkeletonFile(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Cocos2dxFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.Cocos2dxFactory",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::Cocos2dxFactory*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_loadSkeletonFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::String arg0;
        dragonBones::String arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->loadSkeletonFile(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadSkeletonFile",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_loadSkeletonFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_Cocos2dxFactory_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::Cocos2dxFactory* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new dragonBones::Cocos2dxFactory();
        tolua_pushusertype(tolua_S,(void*)cobj,"db.Cocos2dxFactory");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Cocos2dxFactory",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_Cocos2dxFactory_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_Cocos2dxFactory_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Cocos2dxFactory)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_Cocos2dxFactory(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.Cocos2dxFactory");
    tolua_cclass(tolua_S,"Cocos2dxFactory","db.Cocos2dxFactory","db.BaseFactory",nullptr);

    tolua_beginmodule(tolua_S,"Cocos2dxFactory");
        tolua_function(tolua_S,"generateDisplay",lua_cocos2dx_dragonBones_Cocos2dxFactory_generateDisplay);
        tolua_function(tolua_S,"loadTextureAtlasFile",lua_cocos2dx_dragonBones_Cocos2dxFactory_loadTextureAtlasFile);
        tolua_function(tolua_S,"generateArmature",lua_cocos2dx_dragonBones_Cocos2dxFactory_generateArmature);
        tolua_function(tolua_S,"generateTextureAtlas",lua_cocos2dx_dragonBones_Cocos2dxFactory_generateTextureAtlas);
        tolua_function(tolua_S,"generateSlot",lua_cocos2dx_dragonBones_Cocos2dxFactory_generateSlot);
        tolua_function(tolua_S,"loadSkeletonFile",lua_cocos2dx_dragonBones_Cocos2dxFactory_loadSkeletonFile);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_Cocos2dxFactory_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::Cocos2dxFactory).name();
    g_luaType[typeName] = "db.Cocos2dxFactory";
    g_typeCast["Cocos2dxFactory"] = "db.Cocos2dxFactory";
    return 1;
}

int lua_cocos2dx_dragonBones_AnimationData_addTimeline(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationData_addTimeline'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        dragonBones::TransformTimeline* arg0;
        dragonBones::String arg1;

        ok &= luaval_to_object<dragonBones::TransformTimeline>(tolua_S, 2, "db.TransformTimeline",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addTimeline(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addTimeline",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationData_addTimeline'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationData_dispose(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationData_dispose'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->dispose();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "dispose",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationData_dispose'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationData_setFadeInTime(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationData_setFadeInTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFadeInTime(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFadeInTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationData_setFadeInTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationData_getTimeline(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationData_getTimeline'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        dragonBones::TransformTimeline* ret = cobj->getTimeline(arg0);
        object_to_luaval<dragonBones::TransformTimeline>(tolua_S, "db.TransformTimeline",(dragonBones::TransformTimeline*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTimeline",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationData_getTimeline'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new dragonBones::AnimationData();
        tolua_pushusertype(tolua_S,(void*)cobj,"db.AnimationData");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "AnimationData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_AnimationData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AnimationData)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_AnimationData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.AnimationData");
    tolua_cclass(tolua_S,"AnimationData","db.AnimationData","db.Timeline",nullptr);

    tolua_beginmodule(tolua_S,"AnimationData");
        tolua_function(tolua_S,"addTimeline",lua_cocos2dx_dragonBones_AnimationData_addTimeline);
        tolua_function(tolua_S,"dispose",lua_cocos2dx_dragonBones_AnimationData_dispose);
        tolua_function(tolua_S,"setFadeInTime",lua_cocos2dx_dragonBones_AnimationData_setFadeInTime);
        tolua_function(tolua_S,"getTimeline",lua_cocos2dx_dragonBones_AnimationData_getTimeline);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_AnimationData_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::AnimationData).name();
    g_luaType[typeName] = "db.AnimationData";
    g_typeCast["AnimationData"] = "db.AnimationData";
    return 1;
}

int lua_cocos2dx_dragonBones_AnimationState_setCurrentTime(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_setCurrentTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setCurrentTime(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCurrentTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_setCurrentTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_setTimeScale(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_setTimeScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setTimeScale(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTimeScale",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_setTimeScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getClip(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getClip'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::AnimationData* ret = cobj->getClip();
        object_to_luaval<dragonBones::AnimationData>(tolua_S, "db.AnimationData",(dragonBones::AnimationData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getClip",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getClip'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getLoopCount(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getLoopCount'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getLoopCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLoopCount",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getLoopCount'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_updateTimelineStates(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_updateTimelineStates'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateTimelineStates();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateTimelineStates",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_updateTimelineStates'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_removeMixingTransform(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_removeMixingTransform'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeMixingTransform();
        return 0;
    }
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeMixingTransform(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        dragonBones::String arg0;
        bool arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeMixingTransform(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeMixingTransform",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_removeMixingTransform'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getTotalTime(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getTotalTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getTotalTime();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTotalTime",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getTotalTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_addMixingTransform(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_addMixingTransform'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addMixingTransform(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        dragonBones::String arg0;
        int arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->addMixingTransform(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        dragonBones::String arg0;
        int arg1;
        bool arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addMixingTransform(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addMixingTransform",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_addMixingTransform'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getCurrentTime(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getCurrentTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getCurrentTime();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentTime",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getCurrentTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getFadeInTime(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getFadeInTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getFadeInTime();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFadeInTime",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getFadeInTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_fadeIn(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_fadeIn'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 8) 
    {
        dragonBones::Armature* arg0;
        dragonBones::AnimationData* arg1;
        double arg2;
        double arg3;
        int arg4;
        unsigned int arg5;
        bool arg6;
        bool arg7;

        ok &= luaval_to_object<dragonBones::Armature>(tolua_S, 2, "db.Armature",&arg0);

        ok &= luaval_to_object<dragonBones::AnimationData>(tolua_S, 3, "db.AnimationData",&arg1);

        ok &= luaval_to_number(tolua_S, 4,&arg2);

        ok &= luaval_to_number(tolua_S, 5,&arg3);

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4);

        ok &= luaval_to_uint32(tolua_S, 7,&arg5);

        ok &= luaval_to_boolean(tolua_S, 8,&arg6);

        ok &= luaval_to_boolean(tolua_S, 9,&arg7);
        if(!ok)
            return 0;
        cobj->fadeIn(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "fadeIn",argc, 8);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_fadeIn'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getLayer(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getLayer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        unsigned int ret = cobj->getLayer();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLayer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getLayer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_play(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_play'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->play();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "play",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_play'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_fadeOut(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_fadeOut'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->fadeOut(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->fadeOut(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "fadeOut",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_fadeOut'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_removeTimelineState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_removeTimelineState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeTimelineState(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeTimelineState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_removeTimelineState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_stop(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_stop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stop();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_stop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getLoop(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getLoop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getLoop();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLoop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getLoop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getIsComplete(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getIsComplete'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getIsComplete();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getIsComplete",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getIsComplete'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_advanceTime(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_advanceTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->advanceTime(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "advanceTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_advanceTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getTimeScale(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getTimeScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getTimeScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTimeScale",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getTimeScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_addTimelineState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_addTimelineState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addTimelineState(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addTimelineState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_addTimelineState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getMixingTransform(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getMixingTransform'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        int ret = cobj->getMixingTransform(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMixingTransform",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getMixingTransform'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_getIsPlaying(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_getIsPlaying'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getIsPlaying();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getIsPlaying",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_getIsPlaying'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_clearAll(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationState*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationState_clearAll'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->clearAll();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "clearAll",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_clearAll'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_clear(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        dragonBones::AnimationState::clear();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "clear",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_clear'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_returnObject(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        dragonBones::AnimationState* arg0;
        ok &= luaval_to_object<dragonBones::AnimationState>(tolua_S, 2, "db.AnimationState",&arg0);
        if(!ok)
            return 0;
        dragonBones::AnimationState::returnObject(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "returnObject",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_returnObject'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_borrowObject(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.AnimationState",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        dragonBones::AnimationState* ret = dragonBones::AnimationState::borrowObject();
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "borrowObject",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_borrowObject'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dragonBones_AnimationState_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationState* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new dragonBones::AnimationState();
        tolua_pushusertype(tolua_S,(void*)cobj,"db.AnimationState");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "AnimationState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationState_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_AnimationState_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AnimationState)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_AnimationState(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.AnimationState");
    tolua_cclass(tolua_S,"AnimationState","db.AnimationState","db.Object",nullptr);

    tolua_beginmodule(tolua_S,"AnimationState");
        tolua_function(tolua_S,"setCurrentTime",lua_cocos2dx_dragonBones_AnimationState_setCurrentTime);
        tolua_function(tolua_S,"setTimeScale",lua_cocos2dx_dragonBones_AnimationState_setTimeScale);
        tolua_function(tolua_S,"getClip",lua_cocos2dx_dragonBones_AnimationState_getClip);
        tolua_function(tolua_S,"getLoopCount",lua_cocos2dx_dragonBones_AnimationState_getLoopCount);
        tolua_function(tolua_S,"updateTimelineStates",lua_cocos2dx_dragonBones_AnimationState_updateTimelineStates);
        tolua_function(tolua_S,"removeMixingTransform",lua_cocos2dx_dragonBones_AnimationState_removeMixingTransform);
        tolua_function(tolua_S,"getTotalTime",lua_cocos2dx_dragonBones_AnimationState_getTotalTime);
        tolua_function(tolua_S,"addMixingTransform",lua_cocos2dx_dragonBones_AnimationState_addMixingTransform);
        tolua_function(tolua_S,"getCurrentTime",lua_cocos2dx_dragonBones_AnimationState_getCurrentTime);
        tolua_function(tolua_S,"getFadeInTime",lua_cocos2dx_dragonBones_AnimationState_getFadeInTime);
        tolua_function(tolua_S,"fadeIn",lua_cocos2dx_dragonBones_AnimationState_fadeIn);
        tolua_function(tolua_S,"getLayer",lua_cocos2dx_dragonBones_AnimationState_getLayer);
        tolua_function(tolua_S,"play",lua_cocos2dx_dragonBones_AnimationState_play);
        tolua_function(tolua_S,"fadeOut",lua_cocos2dx_dragonBones_AnimationState_fadeOut);
        tolua_function(tolua_S,"removeTimelineState",lua_cocos2dx_dragonBones_AnimationState_removeTimelineState);
        tolua_function(tolua_S,"stop",lua_cocos2dx_dragonBones_AnimationState_stop);
        tolua_function(tolua_S,"getLoop",lua_cocos2dx_dragonBones_AnimationState_getLoop);
        tolua_function(tolua_S,"getIsComplete",lua_cocos2dx_dragonBones_AnimationState_getIsComplete);
        tolua_function(tolua_S,"advanceTime",lua_cocos2dx_dragonBones_AnimationState_advanceTime);
        tolua_function(tolua_S,"getTimeScale",lua_cocos2dx_dragonBones_AnimationState_getTimeScale);
        tolua_function(tolua_S,"addTimelineState",lua_cocos2dx_dragonBones_AnimationState_addTimelineState);
        tolua_function(tolua_S,"getMixingTransform",lua_cocos2dx_dragonBones_AnimationState_getMixingTransform);
        tolua_function(tolua_S,"getIsPlaying",lua_cocos2dx_dragonBones_AnimationState_getIsPlaying);
        tolua_function(tolua_S,"clearAll",lua_cocos2dx_dragonBones_AnimationState_clearAll);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_AnimationState_constructor);
        tolua_function(tolua_S,"clear", lua_cocos2dx_dragonBones_AnimationState_clear);
        tolua_function(tolua_S,"returnObject", lua_cocos2dx_dragonBones_AnimationState_returnObject);
        tolua_function(tolua_S,"borrowObject", lua_cocos2dx_dragonBones_AnimationState_borrowObject);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::AnimationState).name();
    g_luaType[typeName] = "db.AnimationState";
    g_typeCast["AnimationState"] = "db.AnimationState";
    return 1;
}

int lua_cocos2dx_dragonBones_FrameEvent_getBone(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::FrameEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.FrameEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::FrameEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_FrameEvent_getBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Bone* ret = cobj->getBone();
        object_to_luaval<dragonBones::Bone>(tolua_S, "db.Bone",(dragonBones::Bone*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_FrameEvent_getBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_FrameEvent_getArmature(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::FrameEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.FrameEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::FrameEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_FrameEvent_getArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->getArmature();
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_FrameEvent_getArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_FrameEvent_getAnimationState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::FrameEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.FrameEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::FrameEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_FrameEvent_getAnimationState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const dragonBones::AnimationState* ret = cobj->getAnimationState();
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_FrameEvent_getAnimationState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_FrameEvent_getFrameLabel(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::FrameEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.FrameEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::FrameEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_FrameEvent_getFrameLabel'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const dragonBones::String& ret = cobj->getFrameLabel();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFrameLabel",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_FrameEvent_getFrameLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_FrameEvent_getClassName(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::FrameEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.FrameEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::FrameEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_FrameEvent_getClassName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getClassName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getClassName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_FrameEvent_getClassName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_FrameEvent_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::FrameEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj = new dragonBones::FrameEvent(arg0);
        tolua_pushusertype(tolua_S,(void*)cobj,"db.FrameEvent");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "FrameEvent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_FrameEvent_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_FrameEvent_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (FrameEvent)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_FrameEvent(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.FrameEvent");
    tolua_cclass(tolua_S,"FrameEvent","db.FrameEvent","db.Event",nullptr);

    tolua_beginmodule(tolua_S,"FrameEvent");
        tolua_function(tolua_S,"getBone",lua_cocos2dx_dragonBones_FrameEvent_getBone);
        tolua_function(tolua_S,"getArmature",lua_cocos2dx_dragonBones_FrameEvent_getArmature);
        tolua_function(tolua_S,"getAnimationState",lua_cocos2dx_dragonBones_FrameEvent_getAnimationState);
        tolua_function(tolua_S,"getFrameLabel",lua_cocos2dx_dragonBones_FrameEvent_getFrameLabel);
        tolua_function(tolua_S,"getClassName",lua_cocos2dx_dragonBones_FrameEvent_getClassName);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_FrameEvent_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::FrameEvent).name();
    g_luaType[typeName] = "db.FrameEvent";
    g_typeCast["FrameEvent"] = "db.FrameEvent";
    return 1;
}

int lua_cocos2dx_dragonBones_SoundEvent_getSound(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::SoundEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.SoundEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::SoundEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_SoundEvent_getSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const dragonBones::String& ret = cobj->getSound();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSound",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_SoundEvent_getSound'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_SoundEvent_getAnimationState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::SoundEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.SoundEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::SoundEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_SoundEvent_getAnimationState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const dragonBones::AnimationState* ret = cobj->getAnimationState();
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_SoundEvent_getAnimationState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_SoundEvent_getClassName(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::SoundEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.SoundEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::SoundEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_SoundEvent_getClassName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getClassName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getClassName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_SoundEvent_getClassName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_SoundEvent_getArmature(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::SoundEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.SoundEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::SoundEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_SoundEvent_getArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->getArmature();
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_SoundEvent_getArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_SoundEvent_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::SoundEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj = new dragonBones::SoundEvent(arg0);
        tolua_pushusertype(tolua_S,(void*)cobj,"db.SoundEvent");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "SoundEvent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_SoundEvent_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_SoundEvent_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SoundEvent)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_SoundEvent(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.SoundEvent");
    tolua_cclass(tolua_S,"SoundEvent","db.SoundEvent","db.Event",nullptr);

    tolua_beginmodule(tolua_S,"SoundEvent");
        tolua_function(tolua_S,"getSound",lua_cocos2dx_dragonBones_SoundEvent_getSound);
        tolua_function(tolua_S,"getAnimationState",lua_cocos2dx_dragonBones_SoundEvent_getAnimationState);
        tolua_function(tolua_S,"getClassName",lua_cocos2dx_dragonBones_SoundEvent_getClassName);
        tolua_function(tolua_S,"getArmature",lua_cocos2dx_dragonBones_SoundEvent_getArmature);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_SoundEvent_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::SoundEvent).name();
    g_luaType[typeName] = "db.SoundEvent";
    g_typeCast["SoundEvent"] = "db.SoundEvent";
    return 1;
}

int lua_cocos2dx_dragonBones_AnimationEvent_getMovementID(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationEvent_getMovementID'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const dragonBones::String& ret = cobj->getMovementID();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementID",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationEvent_getMovementID'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationEvent_getAnimationState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationEvent_getAnimationState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const dragonBones::AnimationState* ret = cobj->getAnimationState();
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationEvent_getAnimationState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationEvent_getClassName(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationEvent_getClassName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getClassName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getClassName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationEvent_getClassName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationEvent_getArmature(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.AnimationEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::AnimationEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_AnimationEvent_getArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        dragonBones::Armature* ret = cobj->getArmature();
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationEvent_getArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_AnimationEvent_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::AnimationEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj = new dragonBones::AnimationEvent(arg0);
        tolua_pushusertype(tolua_S,(void*)cobj,"db.AnimationEvent");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "AnimationEvent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_AnimationEvent_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_AnimationEvent_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AnimationEvent)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_AnimationEvent(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.AnimationEvent");
    tolua_cclass(tolua_S,"AnimationEvent","db.AnimationEvent","db.Event",nullptr);

    tolua_beginmodule(tolua_S,"AnimationEvent");
        tolua_function(tolua_S,"getMovementID",lua_cocos2dx_dragonBones_AnimationEvent_getMovementID);
        tolua_function(tolua_S,"getAnimationState",lua_cocos2dx_dragonBones_AnimationEvent_getAnimationState);
        tolua_function(tolua_S,"getClassName",lua_cocos2dx_dragonBones_AnimationEvent_getClassName);
        tolua_function(tolua_S,"getArmature",lua_cocos2dx_dragonBones_AnimationEvent_getArmature);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_AnimationEvent_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::AnimationEvent).name();
    g_luaType[typeName] = "db.AnimationEvent";
    g_typeCast["AnimationEvent"] = "db.AnimationEvent";
    return 1;
}

int lua_cocos2dx_dragonBones_ArmatureEvent_getClassName(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::ArmatureEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.ArmatureEvent",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::ArmatureEvent*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dragonBones_ArmatureEvent_getClassName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getClassName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getClassName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_ArmatureEvent_getClassName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dragonBones_ArmatureEvent_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::ArmatureEvent* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::String arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj = new dragonBones::ArmatureEvent(arg0);
        tolua_pushusertype(tolua_S,(void*)cobj,"db.ArmatureEvent");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ArmatureEvent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_ArmatureEvent_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_ArmatureEvent_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureEvent)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_ArmatureEvent(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.ArmatureEvent");
    tolua_cclass(tolua_S,"ArmatureEvent","db.ArmatureEvent","db.Event",nullptr);

    tolua_beginmodule(tolua_S,"ArmatureEvent");
        tolua_function(tolua_S,"getClassName",lua_cocos2dx_dragonBones_ArmatureEvent_getClassName);
        tolua_function(tolua_S,"new",lua_cocos2dx_dragonBones_ArmatureEvent_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::ArmatureEvent).name();
    g_luaType[typeName] = "db.ArmatureEvent";
    g_typeCast["ArmatureEvent"] = "db.ArmatureEvent";
    return 1;
}

int lua_cocos2dx_dragonBones_SoundEventManager_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.SoundEventManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        dragonBones::SoundEventManager* ret = dragonBones::SoundEventManager::getInstance();
        object_to_luaval<dragonBones::SoundEventManager>(tolua_S, "db.SoundEventManager",(dragonBones::SoundEventManager*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_SoundEventManager_getInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dragonBones_SoundEventManager_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::SoundEventManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new dragonBones::SoundEventManager();
        tolua_pushusertype(tolua_S,(void*)cobj,"db.SoundEventManager");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "SoundEventManager",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dragonBones_SoundEventManager_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dragonBones_SoundEventManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SoundEventManager)");
    return 0;
}

int lua_register_cocos2dx_dragonBones_SoundEventManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.SoundEventManager");
    tolua_cclass(tolua_S,"SoundEventManager","db.SoundEventManager","db.EventDispatcher",nullptr);

    tolua_beginmodule(tolua_S,"SoundEventManager");
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_dragonBones_SoundEventManager_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::SoundEventManager).name();
    g_luaType[typeName] = "db.SoundEventManager";
    g_typeCast["SoundEventManager"] = "db.SoundEventManager";
    return 1;
}
TOLUA_API int register_all_cocos2dx_dragonBones(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"db",0);
	tolua_beginmodule(tolua_S,"db");

	lua_register_cocos2dx_dragonBones_EventDispatcher(tolua_S);
	lua_register_cocos2dx_dragonBones_BaseFactory(tolua_S);
	lua_register_cocos2dx_dragonBones_Event(tolua_S);
	lua_register_cocos2dx_dragonBones_ArmatureEvent(tolua_S);
	lua_register_cocos2dx_dragonBones_FrameEvent(tolua_S);
	lua_register_cocos2dx_dragonBones_AnimationState(tolua_S);
	lua_register_cocos2dx_dragonBones_AnimationEvent(tolua_S);
	lua_register_cocos2dx_dragonBones_Animation(tolua_S);
	lua_register_cocos2dx_dragonBones_SoundEvent(tolua_S);
	lua_register_cocos2dx_dragonBones_CocosNode(tolua_S);
	lua_register_cocos2dx_dragonBones_AnimationData(tolua_S);
	lua_register_cocos2dx_dragonBones_Armature(tolua_S);
	lua_register_cocos2dx_dragonBones_Cocos2dxFactory(tolua_S);
	lua_register_cocos2dx_dragonBones_SoundEventManager(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

