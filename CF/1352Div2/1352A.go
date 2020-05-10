/*
	Problem: A - Sum of Round Numbers
	Author: Neeraj Rajpurohit
	Language: Go
    Complexity: O(n)
	Runtime: 467ms	
*/
package main

import  ( 
	"bufio"
	"fmt"
	"os"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
func scanf(f string, a ...interface{}) { fmt.Fscanf(reader, f, a...) }

func main() {
	var t int
	fmt.Scanf("%d\n", &t)
	for t1 := 0; t1 < t; t1++ {
		var n string
		var coun int
		scanf("%s\n", &n)
		var l int
		l = len(n)
		coun=0
		for i:=0; i < l; i++ {
			if( string(n[i]) == "0") {
				coun = coun+1
			}
		}
		fmt.Println(l-coun)
		for i:=0; i < l; i++ {
			if n[i] != '0' {
				fmt.Print(string(n[i]))
				for j:=0; j < l-i-1; j++ {
					fmt.Print("0")
				}
				fmt.Print(" ")
			}
		}
		fmt.Print("\n")
	}
}
