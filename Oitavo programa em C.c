#include <stdio.h>
	int main(){
		float salario, salfa, valorh;
		int horas, filhos;
			printf("Digite o numero de horas trabalhado: ");
			scanf("%d", &horas);
			printf("Digite o valor por horas: ");
			scanf("%f", &valorh);
			printf("Digite o numero de filhos: ");
			scanf("%d", &filhos);
			printf("Digite o valor do salario familia: ");
			scanf("%f", &salfa);
				salario = (horas * valorh) + (salfa * filhos);
					printf("O valor do salario bruto a ser recebido e: %.2f", salario);
					return 0;
	}