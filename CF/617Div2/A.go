package main

import "fmt"

func main() {
	var d int
	fmt.Scanf("%d\n", &d)
	res := d / 5
	if d%5 > 0 {
		res += 1
	}
	fmt.Println(res)
}
