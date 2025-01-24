#include <stdio.h>
#include <math.h>
	int main(){
		float v1,v2,v3,v4,d;
			printf("Digite o valor v1: ");
			scanf("%f", &v1);
			printf("Digite o valor v2: ");
			scanf("%f", &v2);
		    printf("Digite o valor v3: ");
		    scanf("%f", &v3);
		    printf("Digite o valor v4: ");
		    scanf("%f", &v4);
		    	v1 = pow (v2 - v1, 2.0);
		    	v2 = pow (v3 - v4, 2.0);
		    		d = sqrt(v1 + v2);
		    			printf("A distancia entre um ponto e outro e: %f", d);
		    			return 0;
	}