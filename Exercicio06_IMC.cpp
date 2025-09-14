#include<stdio.h>
main()
{
	float peso, altura, imc;
	printf("\nDigite a sua altura com . (Exemplo 1.60)>>> "); scanf("%f",&altura);

	printf("\nDigite o seu peso >>> "); scanf("%f",&peso);
	imc = peso/(altura*altura);
	
	if (imc<20){
		printf("\nVoce esta classificado em SUBNORMAL, o seu imc e >>> %.2f",imc);
}
    else if (imc>=20 && imc<25){
    	printf("\nVoce esta classificado em NORMAL, o seu imc e >>> %.2f",imc);
}
    else if (imc>=25 && imc<30){
    	printf("\nVoce esta classificado em SOBREPESO, o seu imc e >>> %.2f",imc);
}
    else if (imc>=30 && imc<35){
    	printf("\nVoce esta classificado em OBESIDADE LEVE, o seu imc e >>> %.2f", imc);
	}
	else if (imc>=35 && imc<40){
		printf("\nVoce esta classificado em OBESIDADE MODERADA, o seu imc e >>> %.2f", imc);
	}
	else printf("\nVoce esta classificado em OBESIDADE MORBIDA, o seu imc e >>> %.2f", imc);
	
}
