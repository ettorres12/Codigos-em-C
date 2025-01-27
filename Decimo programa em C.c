#include <stdio.h>
	int main(){
		float cat,ql,quiloper,consm;
			printf("Digite a capacidade do tanque: ");
			scanf("%f", &cat);
			printf("Digite a quantidade de litros: ");
			scanf("%f", &ql);
			printf("Digite a quilometragem percorrida: ");
			scanf("%f", &quiloper);
				consm = (quiloper/ql);
					printf("O valor medio de consumo de combustivel e: %.2f", consm);
					return 0;
	}