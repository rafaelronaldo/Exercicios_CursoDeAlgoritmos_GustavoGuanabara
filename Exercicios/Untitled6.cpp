#include <stdio.h>
#include <locale.h>

// 6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu sucessor. Ex:  Digite um número: 9 O antecessor de 9 é 8 O sucessor de 9 é 10 //

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int Numero, Antecessor, Sucessor;
	
	
	printf ("Digite um numero: \n");
	scanf ("%d", &Numero);
	Antecessor = Numero - 1;
	Sucessor = Numero + 1;
	printf ("O antecessor de %d é %d", Numero, Antecessor);
	printf ("\n");
	printf ("O sucessor de %d é %d", Numero, Sucessor);
	
	
	
	
}
