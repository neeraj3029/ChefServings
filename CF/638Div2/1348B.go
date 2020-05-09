/*
	Author: Neeraj Rajpurohit
	Language: Go
    Complexity: O(n)
    Runtime: 1465ms
*/
package main

import  ( 
	"bufio"
	"fmt"
	"os"
)

func unique(intSlice []int) []int {
    keys := make(map[int]bool)
    list := []int{} 
    for _, entry := range intSlice {
        if _, value := keys[entry]; !value {
            keys[entry] = true
            list = append(list, entry)
        }
    }    
    return list
}

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
func scanf(f string, a ...interface{}) { fmt.Fscanf(reader, f, a...) }

func main() {
	var t int
	fmt.Scanf("%d\n", &t)
	for t1 := 0; t1 < t; t1++ {
		var n, k int
		scanf("%d %d\n", &n, &k)
		a := make([]int, n)
		
		// fmt.Print(n,k)
		for i :=0; i<n; i++ {
			if i == n-1 {
				scanf("%d\n", &a[i])
			} else {
				scanf("%d ", &a[i])
			}
		}

		uniqueSlice := unique(a)
		
		if len(uniqueSlice) > k {
			fmt.Println("-1")
		} else {
			var lett int
			lett = len(uniqueSlice)
			for i :=0; i<(k-lett); i++ {
				uniqueSlice = append(uniqueSlice, 1)
			}
			
			fmt.Println(n*k)
			for i:=0; i < n; i++ {
				for j:=0; j < k; j++ {
					if i == n-1 && j == k-1 {
						fmt.Print(uniqueSlice[j], "\n")
			
					} else {
						fmt.Print(uniqueSlice[j], " ")
					}
				}
			}
		}
	}
}
