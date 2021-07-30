#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) {
	int array_a[ARRAY_SIZE];
	int array_b[ARRAY_SIZE];
	int array_c[ARRAY_SIZE];
	int i, j;

	printf("Digite 10 elementos para o array A\n");
	
	for (i=0; i<10; i++) {
		printf("Digite o elemento %d: ",i);
		scanf("%d", &array_a[i]);
	}

	printf("\n");

	for (i=0; i<10; i++) {
	//	printf("A[%d] = %d\n", i, array_a[i]);
		array_b[i] = (2*i) + array_a[i];
		printf("B[%d] = (%d) + %d\n",i, (2*i), array_a[i]);
		printf("B[%d] = %d\n", i, array_b[i]);
	}

	printf("\n");

	j = 0;

	for (i=9; i>=0; i--) {
		printf("B[%d] = %d\n", i, array_b[i]);
		array_c[j] = array_b[i];
		j++;

	} 

	return 0;
}

