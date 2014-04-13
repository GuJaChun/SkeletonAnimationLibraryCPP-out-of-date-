
--------------------------------
-- @module Armature
-- @extend EventDispatcher

--------------------------------
-- @function [parent=#Armature] getBone 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @return Bone#Bone ret (return value: db.Bone)
        
--------------------------------
-- @function [parent=#Armature] getSlot 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @return Slot#Slot ret (return value: db.Slot)
        
--------------------------------
-- @function [parent=#Armature] dispose 
-- @param self
        
--------------------------------
-- @function [parent=#Armature] removeSlotByName 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#Armature] addChild 
-- @param self
-- @param #db.DBObject dbobject
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#Armature] arriveAtFrame 
-- @param self
-- @param #db.Frame frame
-- @param #db.TimelineState timelinestate
-- @param #db.AnimationState animationstate
-- @param #bool bool
        
--------------------------------
-- @function [parent=#Armature] updateSlotsZOrder 
-- @param self
        
--------------------------------
-- @function [parent=#Armature] sortBoneList 
-- @param self
        
--------------------------------
-- @function [parent=#Armature] removeBone 
-- @param self
-- @param #db.Bone bone
        
--------------------------------
-- @function [parent=#Armature] getDisplay 
-- @param self
-- @return Ref#Ref ret (return value: cc.Ref)
        
--------------------------------
-- @function [parent=#Armature] invalidUpdate 
-- @param self
        
--------------------------------
-- @function [parent=#Armature] addDBObject 
-- @param self
-- @param #db.DBObject dbobject
        
--------------------------------
-- @function [parent=#Armature] getBoneByDisplay 
-- @param self
-- @param #cc.Ref ref
-- @return Bone#Bone ret (return value: db.Bone)
        
--------------------------------
-- @function [parent=#Armature] removeBoneByName 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#Armature] removeSlot 
-- @param self
-- @param #db.Slot slot
        
--------------------------------
-- @function [parent=#Armature] addBone 
-- @param self
-- @param #db.Bone bone
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#Armature] advanceTime 
-- @param self
-- @param #float float
        
--------------------------------
-- @function [parent=#Armature] getAnimation 
-- @param self
-- @return Animation#Animation ret (return value: db.Animation)
        
--------------------------------
-- @function [parent=#Armature] removeDBObject 
-- @param self
-- @param #db.DBObject dbobject
        
--------------------------------
-- @function [parent=#Armature] getSlotByDisplay 
-- @param self
-- @param #cc.Ref ref
-- @return Slot#Slot ret (return value: db.Slot)
        
--------------------------------
-- @function [parent=#Armature] sortSlot 
-- @param self
-- @param #db.Slot slot
-- @param #db.Slot slot
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#Armature] sortBone 
-- @param self
-- @param #std::pair<int, db.Bone > pair<int, dragonbones::bone >
-- @param #std::pair<int, db.Bone > pair<int, dragonbones::bone >
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#Armature] Armature 
-- @param self
-- @param #cc.Ref ref
        
return nil
