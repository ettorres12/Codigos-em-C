#include <stdio.h>
	int main(){
		float valor1;
		float valor2;
		float valor3;
		float media;
			printf("Digite o primeiro valor: ");
			scanf("%f", &valor1);
			printf("Digite o segundo valor: ");
			scanf("%f", &valor2);
			printf("Digite o terceiro valor: ");
			scanf("%f", &valor3);
				media = (valor1 + valor2 + valor3)/3.0;
				printf("O valor da media e: %.2f", media);
				return 0;
	}