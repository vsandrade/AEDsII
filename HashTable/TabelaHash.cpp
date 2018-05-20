#include <stdio.h>

using namespace std;

struct pair
{
	int value, key;
};

void display(struct pair ar[], int size)
{
	printf("Value\t\Key\n");
	for(int i=0; i<size; i++)
	{
		printf("%d\t\%d\n", ar[i].value, ar[i].key);
	}	
}

int main()
{
	int size, temp;
	printf("Entre com o tamanho da tabela: ");
	scanf("%d", &size);
	struct pair hash_table[size];
	printf("Entre com os Elementos: \n");
	for(int i = 0; i<size; i++)
	{
		scanf("%d", &temp);
		hash_table[temp % size].value = temp;
		printf("hash temp/mod/size: %d", temp%size);
		hash_table[temp % size].key = temp%size;
	}
	printf("\n");
	display(hash_table, size);
	
	return 0;
}
