#include <stdio.h>
#include <locale.h>

//7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça parte. Ex: Digite um número: 3.5 O dobro de 3.5 é 7.0 A terça parte de 3.5 é 1.16666//

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float Numero, Dobro, TercaParte;
	
	
	printf ("Digite um número: ");
	scanf ("%f", &Numero);
	Dobro = Numero * 2;
	TercaParte = Numero / 3;
	printf ("O dobro de %0.1f é %0.3f\n", Numero, Dobro);
	printf ("A terça parte de %0.1f é %0.3f\n", Numero, TercaParte);
	
}

