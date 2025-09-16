#include<stdio.h>
main(){


	float n1, n2, resultado;
	 
	char sinal;
	
	printf("\nDigite um numero >>> "); scanf("%f",&n1);
	
	printf("\nDigite o operador matematico [+][-][*][/] >>>"); 
	scanf(" %c",&sinal);
	
	printf("\nDigite outro numero >>> "); scanf("%f",&n2);
	
	if (sinal == '+') {
	resultado = n1 + n2; 
	printf("\n %.2f + %.2f = %.2f ",n1 ,n2 ,resultado);
}
    else if (sinal == '-'){
    resultado = n1 - n2;
    printf("\n %.2f - %.2f = %.2f", n1, n2,resultado);
}
	else if (sinal == '*'){
	resultado = n1 * n2;	
	printf("\n %.2f X %.2f = %.2f",n1, n2, resultado);	
}
    else if (sinal == '/'){
    resultado = n1 / n2;
    printf("\n %.2f / %.2f = %.2f", n1, n2, resultado);
}
    else printf("\nValor digitado invalido");
}
