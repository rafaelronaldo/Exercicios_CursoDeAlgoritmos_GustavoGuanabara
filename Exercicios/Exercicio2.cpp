#include <stdio.h>
#include <locale.h>

//2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas vindas para ela: Ex: Qual é o seu nome? João da Silva  Olá João da Silva, é um prazer te conhecer! //

int main () {
	setlocale(LC_ALL, "Portuguese");
	char Nome [50];
	
	
	printf ("Qual é o seu nome?\n");
	scanf ("%s", &Nome);
	printf ("Olá %s, é um prazer te conhecer!", Nome);
	
	
	
	
	
	
}
