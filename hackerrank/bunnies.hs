lcmlist :: (Integral a) => [a] -> a
lcmlist [x,y] = lcm x y
lcmlist (h1:h2:t) = lcmlist ((lcm h1 h2):t)

wordsWhen     :: (Char -> Bool) -> String -> [String]
wordsWhen p s =  case dropWhile p s of
                      "" -> []
                      s' -> w : wordsWhen p s''
                            where (w, s'') = break p s'

f :: [String] -> [Int]
f = map read

main = do
		n <- getLine
		j <- getLine
		let
			ans = lcmlist (f (wordsWhen (==' ') j))
		putStrLn (show ans)
