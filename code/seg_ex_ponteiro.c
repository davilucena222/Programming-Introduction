#include <stdio.h>

int main(void) {
	int v[10];
	int* ptr;

	ptr = &v[1];

	v[0] = 1000;
	v[1] = 1001;

	printf("Endereco do 1o elem.: %p\n",v);

	printf("Endereco do 2o elem.: %p\n",ptr);

	printf("Valor v[0]: %d\n",*v);

	printf("Valor: v[1]: %d\n",ptr[0]);  

	return 0;
}
