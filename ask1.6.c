/**
H askisi 1.6 apo ti Sofia Erga
Exei lathos.
Otan doso to
sofia1*2+3-4/5.6,789,,0
emfanizei os output to
sofia2 3 4 5 678001
eno tha eprepe na emfanizei to
sofia2 3 4 5 678901
*/

#include <stdio.h>
#define SIZE 100

int main() {

	char kimeno[SIZE];
	int i;
	i=0;

	printf("Enter String=");
    gets(kimeno);

	for (i=0; i<SIZE; i++)
	 {
		if (kimeno[i]>=48 && kimeno[i]<=56)
		{
			kimeno[i]=kimeno[i]+1;

		}
		if (kimeno[i]==57)
		{
			kimeno[i]=48;

		}
		if (kimeno[i]==42 || kimeno[i]==43 || kimeno[i]==45 || kimeno[i]==47)
		{
			kimeno[i]=32;

		}

		if (kimeno[i]==44 || kimeno[i]==46)
		{
			kimeno[i]=7;
		}
	}
	printf("The string has replaced with %s", kimeno);

	}


