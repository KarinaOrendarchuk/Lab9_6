#include <stdio.h>
#include <stdlib.h>
#include <string.h>
_Bool x = 0;

int dov(char *S, ...){
int i, k=1;
int min=9999;
int max = 0;

	for (i=0; S[i] != '\0'; i++)
	{
		if (S[i+1] !=' ' && S[i+1] != '\0')
		    k++;
		else
		{
			if(x == 0 && k<min) min=k;
			else if(x == 1 && k>max) max=k;
			k=0;
		}
	}
	if (x == 0)
	{
		return min/2;
	} else return max/2;
}

int main()
{
char S[10000];
printf("\nВведіть речення: ");
gets(S);
printf("Довжина найкоротшого слова = %d\nДовжина найдовшого слова = %d\n",dov(S, x=0), dov(S, x=1));
return 0;
}