#include <stdio.h>
#include <locale.h>
//3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no final uma mensagem. Ex: Nome do Funcionário: Maria do Carmo Salário: 1850,45 O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.// 

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char Nome [50];
	float Salario = 1850.45;
	
	
	printf ("Qual é o seu nome?\n");
	scanf ("%s", &Nome);
	printf ("Nome do Funcionário: %s\n", Nome);
	printf  ("Salário: %0.1f\n", Salario);
	printf ("O funcionário %s tem um salário de %0.1f em Junho.", Nome, Salario);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
