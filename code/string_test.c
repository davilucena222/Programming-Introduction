#include <stdio.h>
#include <string.h>

void cifra(char* str, int chave) {
	int i;
	int size = strlen(str);
	for(i=0;i<size;i++) {
		int temp = (int) str[i];
		str[i] = (char) temp+chave;
	}
}

void decifra(char* str, int chave) {
        int i;
        int size = strlen(str);
        for(i=0;i<size;i++) {
                int temp = (int) str[i];
                str[i] = (char) temp-chave;
        }
}

int main()
{
 char str[] = "Teste";
 strcpy (str, "Alo");
 printf ("%s\n", str);
 cifra(str,10);
 printf ("%s\n", str);
 decifra(str,11);
 printf ("%s\n", str);
 return 0;	
}


