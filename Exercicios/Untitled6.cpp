#include <stdio.h>
#include <locale.h>

// 6) Fa�a um programa que leia um n�mero inteiro e mostre o seu antecessor e seu sucessor. Ex:  Digite um n�mero: 9 O antecessor de 9 � 8 O sucessor de 9 � 10 //

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int Numero, Antecessor, Sucessor;
	
	
	printf ("Digite um numero: \n");
	scanf ("%d", &Numero);
	Antecessor = Numero - 1;
	Sucessor = Numero + 1;
	printf ("O antecessor de %d � %d", Numero, Antecessor);
	printf ("\n");
	printf ("O sucessor de %d � %d", Numero, Sucessor);
	
	
	
	
}
