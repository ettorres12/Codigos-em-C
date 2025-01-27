#include <stdio.h>
	int main(){
		float fah;
		float cel;
			printf("Digite o valor em fahrenheit: ");
			scanf("%f", &fah);
				cel = ((5.0/9.0) * (fah - 32.0));
					printf("O valor em celsius e: %.2f", cel);
					return 0;
	}