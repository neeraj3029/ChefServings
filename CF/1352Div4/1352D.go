/*
	Author: Neeraj Rajpurohit
	Language: Go
    Complexity: O(n)
    Runtime: 140ms
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
		var n int
		scanf("%d\n", &n)
		arr := make([]int, n)
		for i :=0; i<n; i++ {
			if i == n-1 {
				scanf("%d\n", &arr[i])
			} else {
				scanf("%d ", &arr[i])
			}
		}
		var i,j,a,b,t1,t2,steps,chance int
		i = -1
		j = n
		t1 = 0
		t2 = 0
	
		a = 0
		b = 0
		steps=0
		chance = 1
		for i < j {
			if chance == 1 {
				i++
				if i >= j { 
					if t1 > 0 { 
						steps ++ 
					}
					break 
				}
				a += arr[i]
				t1 += arr[i]
				if t1 > t2 { 
					steps++
					chance = 0
					t2=0
				}
			} else {
				j--
				if i >= j {
					if t2 > 0 { steps ++ ;} 
					break; 
				}
				t2+=arr[j];
				b += arr[j];
				if t2 > t1 { 
					steps++; 
					chance = 1 
					t1 = 0;
				}
			}
		}
		fmt.Println(steps, a, b)

	}
}