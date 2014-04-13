
--------------------------------
-- @module EventDispatcher
-- @extend Object

--------------------------------
-- @function [parent=#EventDispatcher] addListener 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #int int
        
--------------------------------
-- @function [parent=#EventDispatcher] removeEventListener 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #string str
        
--------------------------------
-- @function [parent=#EventDispatcher] addEventListener 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #function func
-- @param #string str
        
--------------------------------
-- @function [parent=#EventDispatcher] dispatchEvent 
-- @param self
-- @param #db.Event event
        
--------------------------------
-- @function [parent=#EventDispatcher] hasEventListener 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#EventDispatcher] removeListener 
-- @param self
-- @param #std::basic_string<char> basic_string<char>
-- @param #int int
        
return nil
