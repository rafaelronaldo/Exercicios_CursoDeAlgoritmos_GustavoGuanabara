#include <stdio.h>
#include <locale.h>


// 4) Desenvolva um algoritmo que leia dois n�meros inteiros e mostre o somat�rio entre eles. Ex: Digite um valor: 8 Digite outro valor: 5  A soma entre 8 e 5 � igual a 13 //


int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int Numero1, Numero2, Soma;
	
	
	
	
	printf ("Digite o primeiro n�mero: ");
	scanf ("%d", &Numero1);
	printf ("Digite o segundo n�mero: ");
	scanf ("%d", &Numero2);
	Soma = Numero1 + Numero2;
	printf ("A soma entre %d e %d � igual a %d", Numero1, Numero2, Soma);	
	
	
}
