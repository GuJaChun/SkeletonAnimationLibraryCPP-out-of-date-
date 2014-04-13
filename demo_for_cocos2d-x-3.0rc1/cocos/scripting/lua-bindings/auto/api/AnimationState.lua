
--------------------------------
-- @module AnimationState
-- @extend Object

--------------------------------
-- @function [parent=#AnimationState] setCurrentTime 
-- @param self
-- @param #float float
        
--------------------------------
-- @function [parent=#AnimationState] setTimeScale 
-- @param self
-- @param #float float
        
--------------------------------
-- @function [parent=#AnimationState] getClip 
-- @param self
-- @return AnimationData#AnimationData ret (return value: db.AnimationData)
        
--------------------------------
-- @function [parent=#AnimationState] getLoopCount 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- @function [parent=#AnimationState] updateTimelineStates 
-- @param self
        
--------------------------------
-- @function [parent=#AnimationState] removeMixingTransform 
-- @param self
        
--------------------------------
-- @function [parent=#AnimationState] getTotalTime 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- @function [parent=#AnimationState] addMixingTransform 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #int int
-- @param #bool bool
        
--------------------------------
-- @function [parent=#AnimationState] getCurrentTime 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- @function [parent=#AnimationState] getFadeInTime 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- @function [parent=#AnimationState] fadeIn 
-- @param self
-- @param #db.Armature armature
-- @param #db.AnimationData animationdata
-- @param #float float
-- @param #float float
-- @param #int int
-- @param #unsigned int int
-- @param #bool bool
-- @param #bool bool
        
--------------------------------
-- @function [parent=#AnimationState] getLayer 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- @function [parent=#AnimationState] play 
-- @param self
        
--------------------------------
-- @function [parent=#AnimationState] fadeOut 
-- @param self
-- @param #float float
-- @param #bool bool
        
--------------------------------
-- @function [parent=#AnimationState] removeTimelineState 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#AnimationState] stop 
-- @param self
        
--------------------------------
-- @function [parent=#AnimationState] getLoop 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- @function [parent=#AnimationState] getIsComplete 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#AnimationState] advanceTime 
-- @param self
-- @param #float float
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#AnimationState] getTimeScale 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- @function [parent=#AnimationState] addTimelineState 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#AnimationState] getMixingTransform 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @return int#int ret (return value: int)
        
--------------------------------
-- @function [parent=#AnimationState] getIsPlaying 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#AnimationState] clearAll 
-- @param self
        
--------------------------------
-- @function [parent=#AnimationState] clear 
-- @param self
        
--------------------------------
-- @function [parent=#AnimationState] returnObject 
-- @param self
-- @param #db.AnimationState animationstate
        
--------------------------------
-- @function [parent=#AnimationState] borrowObject 
-- @param self
-- @return AnimationState#AnimationState ret (return value: db.AnimationState)
        
--------------------------------
-- @function [parent=#AnimationState] AnimationState 
-- @param self
        
return nil
