#include <stdio.h>
	int main(){
		float reais;
		float dolar;
		float taxa;
			printf("Digite o valor em reais: ");
			scanf("%f", &reais);
			printf("Digite a taxa de conversao: ");
			scanf("%f", &taxa);
				dolar = reais * taxa;
					printf("O valor em dolar e: U$ %.2f",dolar);
					return 0;
	}