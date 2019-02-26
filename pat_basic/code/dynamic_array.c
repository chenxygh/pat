#include <stdio.h>
#include <stdlib.h>

int main () {
	int ***array;
	
	// create outside -> inside
	array = (int ***)calloc(5, sizeof(int**));
	for (int i = 0; i < 5; i++) {
		array[i] = (int **)calloc(3, sizeof(int *));
		for (int j = 0; j < 3; j++) {
			array[i][j] = (int *)calloc(10, sizeof(int));
			for (int k = 0; k < 10; ++k)
				array[i][j][k] = k;
		}
	}

	// free inside->outside
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			free(array[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		free(array[i]);
	}

	free(array);
	
	printf("%d\n", array[0][0][9]);
}
