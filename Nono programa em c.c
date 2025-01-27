#include <stdio.h>
	int main(){
		float v1,v2,v3,v4,v5,media;
			printf("Digite o valor da primeira compra: ");
			scanf("%f", &v1);
			printf("Digite o valor da segunda compra: ");
			scanf("%f", &v2);
			printf("Digite o valor da terceira compra: ");
			scanf("%f", &v3);
			printf("Digite o valor da quarta compra: ");
			scanf("%f", &v4);
			printf("Digite o valor da quinta compra: ");
			scanf("%f", &v5);
				media = (v1 + v2 + v3 + v4 + v5)/5.0;
					printf("O valor medio da compra e: %.2f", media);
					return 0;
				
	}