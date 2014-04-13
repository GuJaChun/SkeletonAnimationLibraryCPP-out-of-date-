
--------------------------------
-- @module Animation
-- @extend Object

--------------------------------
-- @function [parent=#Animation] setTimeScale 
-- @param self
-- @param #float float
        
--------------------------------
-- @function [parent=#Animation] getMovementID 
-- @param self
-- @return std::basic_string<char>#std::basic_string<char> ret (return value: std::basic_string<char>)
        
--------------------------------
-- @function [parent=#Animation] addState 
-- @param self
-- @param #db.AnimationState animationstate
        
--------------------------------
-- @function [parent=#Animation] dispose 
-- @param self
        
--------------------------------
-- @function [parent=#Animation] setActive 
-- @param self
-- @param #db.AnimationState animationstate
-- @param #bool bool
        
--------------------------------
-- @function [parent=#Animation] play 
-- @param self
        
--------------------------------
-- @function [parent=#Animation] getState 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #unsigned int int
-- @return AnimationState#AnimationState ret (return value: db.AnimationState)
        
--------------------------------
-- @function [parent=#Animation] removeState 
-- @param self
-- @param #db.AnimationState animationstate
        
--------------------------------
-- @function [parent=#Animation] stop 
-- @param self
        
--------------------------------
-- @function [parent=#Animation] getLastAnimationState 
-- @param self
-- @return AnimationState#AnimationState ret (return value: db.AnimationState)
        
--------------------------------
-- @function [parent=#Animation] getIsComplete 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#Animation] advanceTime 
-- @param self
-- @param #float float
        
--------------------------------
-- @function [parent=#Animation] getTimeScale 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- @function [parent=#Animation] hasAnimation 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#Animation] gotoAndPlay 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #float float
-- @param #float float
-- @param #float float
-- @param #unsigned int int
-- @param #std::basic_string<char> basic_string<char>
-- @param #std::basic_string<char> basic_string<char>
-- @param #bool bool
-- @param #bool bool
-- @param #bool bool
-- @return AnimationState#AnimationState ret (return value: db.AnimationState)
        
--------------------------------
-- @function [parent=#Animation] getIsPlaying 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#Animation] addLayer 
-- @param self
-- @param #unsigned int int
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- @function [parent=#Animation] Animation 
-- @param self
-- @param #db.Armature armature
        
return nil
