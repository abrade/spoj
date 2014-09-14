package main

import ( "fmt" )

func calculate(x int, y int) {
	if x != y && (x-2) != y {
		fmt.Println("No Number")
		return
	}
	if x == y {
		result := x * 2
		if x % 2 != 0 {
			result -= 1
		}
		fmt.Println(result)
		return
	}

	result := x + y
	if y % 2 != 0 {
		result -= 1
	}
	fmt.Println(result)
}

func main() {
	var testCases int
	fmt.Scanf("%d", &testCases)
	for i := 0; i < testCases; i++ {
		var x,y int
		fmt.Scanf("%d %d", &x,&y)
		calculate(x,y)
	}
}
