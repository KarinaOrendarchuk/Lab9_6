#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void zl(char *S1, char *S2){
char *S3 =  (char*)malloc(strlen(S1)+strlen(S2));
S3[0] = '\0';
strcat(S3, S1);
strcat(S3, S2);
puts(S3);
}

int main()
{
char S[10000];
char S2[10000];

printf("\nПерше речення: ");
gets(S);

printf("Друге речення: ");
gets(S2);

printf("\nРезультат виконання функції: ");
zl(S, S2);

return 0;
}