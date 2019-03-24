#include <stdio.h>

struct pair{
	int valor;
	int chave;
	struct pair *next;
};
void display(struct pair [], int size);
void main()
{
	int size,i,temp,j;
	printf("Enter the size of the table: ");
	scanf("%d", &size);
	struct pair hash_table[size];
	while(j<size)
	{
		hash_table[j].next = NULL;j++;
	}
	j=0;
	while(j<size)
	{
		hash_table[j].valor = -1;j++;
	}
	printf("Enter the element: ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &temp );
		hash_table[temp % size].valor = temp;
		hash_table[temp % size].chave = temp%size;
	}
	printf("\n");
	display(hash_table,size);
	int a = 0;
}

void display(struct pair hash_table[], int size)
{
	int i;

	printf("Value\tKey\n");
	for(i=0; i<size; i++)
	{
		printf("%d\t%d\n", hash_table[i].valor,hash_table[i].chave);
		struct pair *ptr;
		ptr = hash_table[i].next;
		while(ptr != NULL)
		{
			printf("%d\t", ptr->valor);
			ptr = ptr->next;
		}
		printf("\n");
	}
}

  
