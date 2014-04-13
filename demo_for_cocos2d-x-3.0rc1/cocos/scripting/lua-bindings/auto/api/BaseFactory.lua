
--------------------------------
-- @module BaseFactory

--------------------------------
-- @function [parent=#BaseFactory] addSkeletonData 
-- @param self
-- @param #db.SkeletonData skeletondata
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#BaseFactory] buildArmature 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #std::basic_string<char> basic_string<char>
-- @param #std::basic_string<char> basic_string<char>
-- @param #std::basic_string<char> basic_string<char>
-- @param #std::basic_string<char> basic_string<char>
-- @return Armature#Armature ret (return value: db.Armature)
        
--------------------------------
-- @function [parent=#BaseFactory] getSkeletonData 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @return SkeletonData#SkeletonData ret (return value: db.SkeletonData)
        
--------------------------------
-- @function [parent=#BaseFactory] removeTextureAtlas 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#BaseFactory] dispose 
-- @param self
        
--------------------------------
-- @function [parent=#BaseFactory] getTextureAtlas 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @return ITextureAtlas#ITextureAtlas ret (return value: db.ITextureAtlas)
        
--------------------------------
-- @function [parent=#BaseFactory] generateDisplay 
-- @param self
-- @param #db.ITextureAtlas itextureatlas
-- @param #std::basic_string<char> basic_string<char>
-- @param #float float
-- @param #float float
-- @return Ref#Ref ret (return value: cc.Ref)
        
--------------------------------
-- @function [parent=#BaseFactory] generateTextureAtlas 
-- @param self
-- @param #cc.Ref ref
-- @param #db.TextureAtlasData textureatlasdata
-- @return ITextureAtlas#ITextureAtlas ret (return value: db.ITextureAtlas)
        
--------------------------------
-- @function [parent=#BaseFactory] loadTextureAtlasFile 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#BaseFactory] generateArmature 
-- @param self
-- @return Armature#Armature ret (return value: db.Armature)
        
--------------------------------
-- @function [parent=#BaseFactory] getTextureDisplay 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #std::basic_string<char> basic_string<char>
-- @param #float float
-- @param #float float
-- @return Ref#Ref ret (return value: cc.Ref)
        
--------------------------------
-- @function [parent=#BaseFactory] loadSkeletonFile 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#BaseFactory] addTextureAtlas 
-- @param self
-- @param #db.ITextureAtlas itextureatlas
-- @param #std::basic_string<char> basic_string<char>
        
--------------------------------
-- @function [parent=#BaseFactory] generateSlot 
-- @param self
-- @return Slot#Slot ret (return value: db.Slot)
        
--------------------------------
-- @function [parent=#BaseFactory] removeSkeletonData 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
        
return nil
