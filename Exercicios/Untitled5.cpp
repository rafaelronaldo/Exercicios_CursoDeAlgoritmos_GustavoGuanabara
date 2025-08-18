#include <stdio.h>
#include <locale.h>

//5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre na tela a sua média na disciplina. Ex:  Nota 1: 4.5 Nota 2: 8.5 A média entre 4.5 e 8.5 é igual a 6.5//


int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char Nome [50];
	float Nota1, Nota2, Media;
	
	
	
	
	printf ("Qual é o seu nome?\n");
	scanf ("%s", &Nome);
	printf ("Qual foi a sua nota em matemática?\n");
	scanf ("%f", &Nota1);
	printf ("Qual foi a sua nota em português?\n");
	scanf ("%f", &Nota2);
	Media = (Nota1 + Nota2) / 2;
	printf ("Nome: %s\n", Nome);
	printf ("Nota em matemática: %0.1f\n", Nota1);
	printf ("Nota em português: %0.1f\n", Nota2);
	printf ("Média: %0.1f\n", Media);
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
