#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float subt=0, total=0;
	int pa=0,op=0;
	
	printf("Insira o valor total gasto \n");
	scanf("%f", &subt);
	printf("Selecione a opcao da forma de pagamento \n");
	printf("1 - A vista \n");
	printf("2 - Parcelado em ate 2x \n");
	printf("3 - Parcelado de 3x ate 10x \n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1:
			total=subt-(subt*0.1);
			printf("valor a ser pago e %f", total);
			break;
		case 2:
			total=subt/2;
			printf("O valor a ser pago nas duas parcela e de: %f", total);
			break;
		case 3:
			printf("Insira a quantidade de parcelas \n");
			scanf("%d", &pa);
			if(subt<=100)
			{
				total=subt/pa;
				printf("O valor a ser pago por parcela e de: %f", total);
			}
			else
			{
				total=(subt/pa)+(subt*0.03);
				printf("O valor a ser pago por parcela e de: %f", total);
			}
			break;
		default:
			printf("Opcao invalida");
			break;
	}
	return 0;
}
