#include <stdio.h>
#include <locale.h>

//7) Crie um algoritmo que leia um n�mero real e mostre na tela o seu dobro e a sua ter�a parte. Ex: Digite um n�mero: 3.5 O dobro de 3.5 � 7.0 A ter�a parte de 3.5 � 1.16666//

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float Numero, Dobro, TercaParte;
	
	
	printf ("Digite um n�mero: ");
	scanf ("%f", &Numero);
	Dobro = Numero * 2;
	TercaParte = Numero / 3;
	printf ("O dobro de %0.1f � %0.3f\n", Numero, Dobro);
	printf ("A ter�a parte de %0.1f � %0.3f\n", Numero, TercaParte);
	
}

