rot :: (Integral a) => String -> a -> String
rot (h:t) 1 = t ++ [h] 
rot (h:t) n = rot (t ++ [h]) (n-1)

printRot :: (Integral a) => String -> a -> IO ()
				
				
 
