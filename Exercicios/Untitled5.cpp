#include <stdio.h>
#include <locale.h>

//5) Fa�a um programa que leia as duas notas de um aluno em uma mat�ria e mostre na tela a sua m�dia na disciplina. Ex:  Nota 1: 4.5 Nota 2: 8.5 A m�dia entre 4.5 e 8.5 � igual a 6.5//


int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char Nome [50];
	float Nota1, Nota2, Media;
	
	
	
	
	printf ("Qual � o seu nome?\n");
	scanf ("%s", &Nome);
	printf ("Qual foi a sua nota em matem�tica?\n");
	scanf ("%f", &Nota1);
	printf ("Qual foi a sua nota em portugu�s?\n");
	scanf ("%f", &Nota2);
	Media = (Nota1 + Nota2) / 2;
	printf ("Nome: %s\n", Nome);
	printf ("Nota em matem�tica: %0.1f\n", Nota1);
	printf ("Nota em portugu�s: %0.1f\n", Nota2);
	printf ("M�dia: %0.1f\n", Media);
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
