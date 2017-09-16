import Control.Applicative
import Control.Monad
import System.IO


main :: IO ()
main = do
    n_temp <- getLine
    let n = read n_temp :: Int
    printHelloWorld n
    
printHelloWorld 1 = putStrLn "Hello World"
printHelloWorld n = do
        putStrLn "Hello World" 
        printHelloWorld (n - 1)

