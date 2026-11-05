#include <stdio.h>

#define SIZE 30

char board[SIZE][SIZE];

void initialize_board(char board[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < SIZE; j++){
			board[i][j] =  '.';
		}
	}
}

void print_board(char *board) {
	for (int i = 0; i < 30; i++){
		for (int j = 0; j < 30; j++){
			printf(" . ");
		}
		printf("\n");
	}
}

int main(void) {
	initialize_board(board);
	print_board(*board);
	return 0;
}
