#include <stdio.h>
#include <locale.h>
//3) Crie um programa que leia o nome e o sal�rio de um funcion�rio, mostrando no final uma mensagem. Ex: Nome do Funcion�rio: Maria do Carmo Sal�rio: 1850,45 O funcion�rio Maria do Carmo tem um sal�rio de R$1850,45 em Junho.// 

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char Nome [50];
	float Salario = 1850.45;
	
	
	printf ("Qual � o seu nome?\n");
	scanf ("%s", &Nome);
	printf ("Nome do Funcion�rio: %s\n", Nome);
	printf  ("Sal�rio: %0.1f\n", Salario);
	printf ("O funcion�rio %s tem um sal�rio de %0.1f em Junho.", Nome, Salario);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
