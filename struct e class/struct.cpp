#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct Aluno{
	char nome[100];
	int RA;
	char cpf[14];	
} _Aluno;

typedef struct Endereco{
	char rua[100], bairro[50];
	int numero;
} _Endereco;

struct pessoa{
	char nome[100], cpf[14];
	int idade, ano;
	_Endereco endereco; 
};

int main()
{	
	//Código COM STRUCT EM VETOR 
	struct pessoa p[2];
	
	strcpy(p[0].nome, "Paulo");
	p[0].idade = 18;
	p[0].ano = 2000;
	strcpy(p[0].cpf, "000.000.000-00");

	strcpy(p[0].endereco.rua, "Av. Antonio Carlos");
	strcpy(p[0].endereco.bairro, "Pampulha");
	
	cout << " Nome: " << p[0].nome << endl;
	cout << " Idade: " << p[0].idade << endl;
	cout << " Ano: " << p[0].ano << endl;
	cout << " Cpf: " << p[0].cpf << endl;
	cout << " Rua: " << p[0].endereco.rua << endl;
	
	//Populando Array
	strcpy(p[0].nome, "Paulo");
	strcpy(p[1].nome, "Beto");
	
	cout << " Nome Pessoa 1: " << p[0].nome << endl;
	cout << " Nome Pessoa 2: " << p[1].nome << endl;
	
	//Código COM STRUCT SEM VETOR
	_Aluno a1, a2;
	strcpy(a1.nome, "Paulo");
	strcpy(a2.nome, "Beto");
	
	cout << " Nome Aluno 1: " << a1.nome << endl;
	cout << " Nome Aluno 2: " << a2.nome << endl;
	
	
	//Código SEM STRUCT
	char nome1[100],nome2[100],nome3[100],nome4[100],nome5[100];
	int idade1,idade2,idade3,idade4,idade5;
	int ano1, ano2, ano3, ano4, ano5;
	char cpf1[14], cpf2[14], cpf3[14], cpf4[14], cpf5[14];
	
	return 0;
}

