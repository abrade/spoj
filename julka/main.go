package main

import (
	"fmt"
)

func main() {
	for x := 0; x < 10; x++ {
		var apples int64
		var klaudiaMore int64
		fmt.Scanf("%d", &apples)
		fmt.Scanf("%d", &klaudiaMore)

		klaudia := int64((apples + klaudiaMore) / 2)
		natalia := int64((apples - klaudiaMore) / 2)

		fmt.Printf("%d\n", klaudia)
		fmt.Printf("%d\n", natalia)
	}
}
