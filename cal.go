package main

import "fmt"
import "time"


var (
   numCount, result int
)

func main() {
   fmt.Println("请输入整数值: ")
   fmt.Scanln(&numCount)
   start:=time.Now().UnixNano()
   for a := 0; a <= numCount; a++ {
      result+=a
   }
   end:=time.Now().UnixNano()
   fmt.Println("耗时: ",(end-start)/1000000, "ms")
   fmt.Println("结算结果为: ", result)
}
