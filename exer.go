package main

import "fmt"

var pets map[string]string = map[string]string{
	"gshep": "dog",
	"human": "apes",
}

var groceries []string = []string{"rice", "cinnamon", "coffee"}

func doesExist(pet string) bool {
	if _, ok := pets[pet]; ok { // using _ for unused variables, using inline ifs
		return true
	}
	return false
}

func addGroceries(items ...string) {
	for _, item := range items { // using rang to iterate
		groceries = append(groceries, item)
	}
	fmt.Println(groceries)
}

func main() {

	// if doesExist("gshep") {
	// 	fmt.Println("Exists")
	// } else {
	// 	fmt.Println("No they dont")
	// }
	addGroceries("tea", "oil")
}
