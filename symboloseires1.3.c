#include <stdio.h>

// prototipo synartisis sygkrisi
int sygkrisi(char*, char*);

int main () {
	char keimeno1[50];
	char keimeno2[50];
	printf("\nDose to proto keimeno:");
	gets(keimeno1);
	printf("\nDose to deftero keimeno:");
	gets(keimeno2);
	int apotelesma =sygkrisi(keimeno1, keimeno2);
	if (apotelesma < 0 ) 
		printf("\nTo proto keimeno proigeitai tou defterou");
	else if (apotelesma > 0) 
		printf("\nTo proto keimeno epetai tou defterou");
	else
		printf("\nTa dyo keimena taftizontai");
	
	return 0;
	
}

/**
* SYnartisi pou sygkrinei alfarithmitika. Ekdoxi me deiktes
*/
int sygkrisi(char *keimeno1, char *keimeno2) {
	int i;
	for ( ;*keimeno1 == *keimeno2; keimeno1++, keimeno2++ )
		if (*keimeno1=='\0') // an ta dyo keimena einai kena (kai profanos ta idia)
			return 0;
		return *keimeno1 - *keimeno2; // ta blepei os arithmous (ASCII) kai emfanizei diafora
}
