#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) {
	int array_a[ARRAY_SIZE];
	int array_b[ARRAY_SIZE] = {0,0,0,0,0,0,0,0,0,0};
	int i, j;
	
	printf("Digite 10 elementos para o array A\n");
	
	for (i=0; i<10; i++) {
		printf("Digite o elemento %d: ",i);
		scanf("%d", &array_a[i]);
	}

	j = 0;

	for (i=0; i<10; i++) {
		if ((array_a[i] % 2) == 0) {
			array_b[j] = array_a[i];
			//printf("B[%d] = %d\n", j, array_b[j]);
			j++;
			
		}	
	} 

	for (i=0; i<10; i++) {
		printf("B[%d] = %d\n", i, array_b[i]);
	}

	return 0;
}

