#include <stdio.h>
	int main(){
		float prod;
		float preco;
	  		printf("Digite a quantidade de produto: ");
	  		scanf("%f",&prod);
	  		printf("Digite o preco dos produtos: ");
	  		scanf("%f",&preco);
	  			preco = prod * preco;
	  				printf("O valor dos produtos e: R$%.2f", preco);
	  				
	  				return 0;
	}