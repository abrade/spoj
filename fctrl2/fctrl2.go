package main

import ( "fmt" )

func fak(faktorial int64) int64 {
	if faktorial == 1 {
		return faktorial
	}
	return faktorial * fak(faktorial - 1)
}

func main() {
	var t int
	fmt.Scanf("%d", &t)
	for i := 0;i < t; i++ {
		var faktor int64
		fmt.Scanf("%d", &faktor)

		fmt.Println(fak(faktor))
	}
}
