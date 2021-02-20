

func Reverse(s string) string {
	runes := []rune(s)
	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}

func frequencySort(s string) string {
	m := make(map[string]int)
	for _, c := range s {
		m[string(c)] += 1
	}
	m1 := make(map[int]string)

	for key, val := range m {
		m1[val] += key
	}
	keys := make([]int, len(m1))
	for key, _ := range m1 {
		keys = append(keys, key)
	}

	sort.Ints(keys)
	fmt.Println(keys)
	res := ""
	for _, key := range keys {
		val := m1[key]
		for _, c := range val {
			for i := 0; i < key; i++ {
				res += string(c)
			}
		}
	}

	fmt.Println(res)
	return Reverse(res)
}