#include <stdio.h>
#include <locale.h>

//2) Fa�a um programa que leia o nome de uma pessoa e mostre uma mensagem de boas vindas para ela: Ex: Qual � o seu nome? Jo�o da Silva  Ol� Jo�o da Silva, � um prazer te conhecer! //

int main () {
	setlocale(LC_ALL, "Portuguese");
	char Nome [50];
	
	
	printf ("Qual � o seu nome?\n");
	scanf ("%s", &Nome);
	printf ("Ol� %s, � um prazer te conhecer!", Nome);
	
	
	
	
	
	
}
