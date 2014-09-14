package main

import (
	"fmt"

)

type Position struct {
	x int
	y int
}


func isValid(p *Position, rows int, cols int) bool {
	return ((p.x >= 0) && (p.x < rows) && (p.y >= 0) && (p.y < cols))
}

func main() {
	var t int
	fmt.Scanf("%d", &t)
	for i := 0; i < t; i++ {
		var r int
		var c int
		nodes := make(map[Position]bool)

		fmt.Scanf("%d", &r)
		fmt.Scanf("%d", &c)

		result := make([][]int, r)
		values := make([][]int, r)
		for row := 0; row < r; row++ {
			result[row] = make([]int, c)
			values[row] = make([]int, c)
			var bitmap string
			fmt.Scanf("%s", &bitmap)
			for column, c := range bitmap {
				values[row][column] = int(c - '0')
				if values[row][column] == 1 {
					result[row][column] = 0
					nodes[Position{row,column}] = true
					continue
				}
				result[row][column] = 1000
			}
		}
		for len(nodes) > 0 {
		for key, _ := range nodes {
			pos := key
			delete(nodes, key)
			distance := result[pos.x][pos.y] + 1
			curPos := Position{pos.x + 1, pos.y}
			if ok := isValid(&curPos, r ,c); ok {
				if result[curPos.x][curPos.y] > distance {
					result[curPos.x][curPos.y] = distance
					nodes[curPos] = true
				}
			}
			curPos = Position{pos.x, pos.y + 1}
			if ok := isValid(&curPos, r ,c); ok {
				if result[curPos.x][curPos.y] > distance {
					result[curPos.x][curPos.y] = distance
					nodes[curPos] = true
				}
			}
			curPos = Position{pos.x - 1, pos.y}
			if ok := isValid(&curPos, r ,c); ok {
				if result[curPos.x][curPos.y] > distance {
					result[curPos.x][curPos.y] = distance
					nodes[curPos] = true
				}
			}
			curPos = Position{pos.x, pos.y - 1}
			if ok := isValid(&curPos, r ,c); ok {
				if result[curPos.x][curPos.y] > distance {
					result[curPos.x][curPos.y] = distance
					nodes[curPos] = true
				}
			}
		}
		}

		for row := 0; row < r; row++ {
			for col := 0; col < c; col++ {
				fmt.Printf("%d ", result[row][col])
			}
			fmt.Printf("\n")
		}
	}
}
