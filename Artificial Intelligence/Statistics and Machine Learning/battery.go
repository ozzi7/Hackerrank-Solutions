package main
import "fmt"

func main () {
   guess()
}

func guess() {
   var guess float64
   fmt.Scanf("%f", &guess)
   if guess < 0.0 {
      panic("negative time")
   }
   if guess < 4.0 {
      fmt.Println(guess * 2.0)
   } else {
      fmt.Println(8.00)
   }
}
