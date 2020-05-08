/*
	Author: Neeraj Rajpurohit
	Language: Go
    Complexity: O(1)
    Runtime: 342ms
*/
package main

import "fmt"

func main() {
	var t int
	fmt.Scanf("%d\n", &t)
	for i := 0; i < t; i++ {
		var a, b int
		fmt.Scanf("%d %d\n", &a, &b)
		fmt.Println(a + b)
	}
}
