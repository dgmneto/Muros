#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ORIGEM "S"
#define DESTINO "T"
#define MURO "#"
#define CHAO "."

int main()
{
	srand(time(NULL));
	char nome[50], txt[] = ".txt";
	int n, m;
	scanf("%s %d %d", nome, &n, &m);
	int i, j, inserido_origem = 0, inserido_destino = 0;
	int i_dest = rand() % n, j_dest = rand() % m;
	int i_orig, j_orig;
	do
	{
		i_orig = rand() % n;
		j_orig = rand() % m;
	} while(i_orig == i_dest && j_orig == j_dest);
	FILE *file = fopen("entrada.in", "w");
	fprintf(file, "%s\n", nome);
	fclose(file);
	strcat(nome, txt);
	file = fopen(nome, "w");
	fprintf(file, "%d %d\n", n, m);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			int a = rand() % 100;
			if(i == i_dest && j == j_dest)
				fprintf(file, DESTINO);
			else if(i == i_orig && j == j_orig)
				fprintf(file, ORIGEM);
			else if(a < 50)
				fprintf(file, MURO);
			else
				fprintf(file, CHAO);
		}
		fprintf(file, "\n");
	}
	fclose(file);
	return 0;
}
