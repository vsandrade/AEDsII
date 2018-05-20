#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	printf("Quantidade de argumentos: %d \n", argc);
	printf("Argumentos Passados: \n\n");
	
	for(int i = 0; i < argc; i++)
		cout << argv[i] << endl;
	
	printf("\n ------------ \n\n");
	
	return 0;
}