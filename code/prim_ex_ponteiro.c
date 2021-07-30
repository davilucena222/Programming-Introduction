#include <stdio.h>

int main() {

	int x;

	x = 10;

	printf("O endereco de x: %p\n",&x);

	int* y;

	y = &x;

	printf("O endereco de x (via y): %p\n",y);

	printf("Conteudo de x: %d\n",x);

	*y = 20;

	printf("Conteudo de x (mod. via *y): %d\n",x);

	printf("Conteudo de x (via *y): %d\n",*y);

	return 0;
}
