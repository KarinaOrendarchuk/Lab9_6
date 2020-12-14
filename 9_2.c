#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void max_hos(char *S1, char *S3){
int summ = 0;
int k = 0, i = 0;
int max = 0;
int max_i = 0;
_Bool check = 0;
for (k = 0; S1[k] != '\0'; k++)
{
	if (summ > 0)
	{
		check = 1;
	}
	if (summ > max)
	{
		max = summ;
		max_i = k-1;
	} summ = 0;
	for (i = k; S1[i] != ' '; i++)
	{
		for (int j = 0; S3[j] != '\0'; j++)
		{		
			if (S1[i] == S3[j]) //якщо в масиві S1 зустрічається голосна буква (S3) збільшує суму на одиницю
			{
				summ++;
			}
		}
	}
}
if (check == 0)
{
	printf("#Відсутнє\n\n");
	return;
}
for (int m = max_i; S1[m] != '\0'; m++)
{
	printf("%c", S1[m]);
	if (S1[m] == ' ')
	{
		printf("\n\n");
		return;
	}
}
printf("\n\n");
}

void clear_spaces(char *s1){
int i = 0, ss = 0, k = 0, m = 0;
for (i = 0; s1[i] != '\0'; i++)
{
	if (s1[i] == ' ' && s1[i+1] == ' ') //залишає лише по одному пробілу
	{
		for (ss = i+1; s1[ss] != '\0'; ss++)
		{
			s1[ss] = s1[ss+1];
		}
		i = 0;
	}
	if (s1[0] == ' ') // якщо перед текстом були пробіли - видаляє їх
	{
		do{
			for (m = 0; s1[m] != '\0'; m++)
			{
				s1[m] = s1[m+1];
			}
		}while(s1[0] == ' ');
	}

	if (s1[i] == ' ' && s1[i+1] == '\0'){ // якщо в кінці текста були пробіли - видаляє їх
		for (k = i; s1[k] == ' '; k--){}
		s1[k+1] = '\0';
	}
}
}

int main()
{
char S3[] = "аеиіоуяюєї"; // Голосні букви
char S[10000];
printf("\nВведіть речення: ");
gets(S);

printf("\n\na) Cлово, що містить найбільшу кількість голосних літер: ");
max_hos(S, S3);
clear_spaces(S);

puts("б) Речення після видалення з тексту всі непотрібні пробіли:\n");
puts(S);
return 0;
}