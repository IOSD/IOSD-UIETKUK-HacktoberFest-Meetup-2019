package main
 
import "fmt"
 
func main(){
    fmt.Print("Enter number : ")
    var n int
    fmt.Scanln(&n)
    /*  Conditional Statement if .... else ........     */
    if(n%2==0){
        fmt.Println(n,"isn't ODD / It is even")
    }else{
        fmt.Println(n,"is Odd number")
    }
}
