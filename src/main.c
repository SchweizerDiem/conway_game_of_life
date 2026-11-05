#include <stdio.h>

void print_board() {
	for (int i = 0; i < 30; i++){
		for (int j = 0; j < 30; j++){
			printf(" . ");
		}
		printf("\n");
	}
}

int main(void) {
	print_board();
	return 0;
}
