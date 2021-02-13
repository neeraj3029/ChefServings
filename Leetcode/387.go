func firstUniqChar(s string) int {
	leng := len(s)
	m := make(map[byte]int)
	for i := 0; i < leng; i++ {
		m[s[i]] += 1
	}
	for i := 0; i < leng; i++ {
		if m[s[i]] == 1 {
			return i
		}
	}
	return -1
}