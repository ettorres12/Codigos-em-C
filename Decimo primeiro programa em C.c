#include <stdio.h>
	int main(){
		float re,r1,r2,r3,re2;
			printf("Digite o valor de r1: ");
			scanf("%f", &r1);
			printf("Digite o valor de r2: ");
			scanf("%f", &r2);
			printf("Digite o valor de r3: ");
			scanf("%f", &r3);
				re = ((1.0/r1) + (1.0/r2) + (1.0/r3));
					re2 = (1.0/re);
						printf("O valor da resistencia equivalente e: %.2f", re2);
						return 0;
	}