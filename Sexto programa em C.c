#include <stdio.h>
#include <math.h>
	int main (){
		float a,b,c;
		float mediaarit,geo,geo2,harm,pond;
			printf("Digite o primeiro valor: ");
			scanf("%f", &a);
			printf("Digite o segundo valor: ");
			scanf("%f", &b);
			printf("Digite o terceiro valor: ");
			scanf("%f", &c);
				mediaarit = (a + b + c)/3.0;
				geo = pow (a * b * c , 1.0);
				geo2 = (geo/3.0);
				harm = 3.0/((1.0/a) + (1.0/b) + (1.0/c));
				pond = ((1.0*a) + (2.0*b) + (3.0*c))/(1.0 + 2.0 + 3.0);
					printf("mediaarit: %f\n", mediaarit);
					printf("geo: %f\n", geo2);
					printf("harm: %f\n", harm);
					printf("pond: %f\n", pond);
					return 0;
	}