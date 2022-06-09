#include <stdio.h>

int main() {
	int n, fat, valor_inicial;
	
	do {
		printf("Digite o numero que tera seu fatorial calculado: ");
		scanf("%d", &n);
		
	}while(n < 0);
	
	valor_inicial = n;
	
	for(fat = 1; n > 1; n--) {
		fat = fat * n;
	}
	
	printf("%d! = %d", valor_inicial, fat);
	
	
	
	return 0;
}

