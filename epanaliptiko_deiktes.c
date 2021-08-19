/**
* Programma pou zitaei apo to pliktrologio dyo akeraious arithmous
* kai ypologizei kai emfanizei stin othoni to athroisma, ti diafora
* kai to ginomeno. Oloi oi ypologismoi tha ginoun se MIA synartisi.
* Ta apotelesmata ta emfanizei to programma
*/

#include <stdio.h>

void ypologismoi(int, int, int*, int*, int*);

int main() {
	int a, b;
	printf("\nDose tous dyo arithmous: ");
	scanf("%d", &a);
	scanf("%d", &b);
	
	int athroisma, ginomeno, diafora;
	//kaloume ti synartisi
	ypologismoi(a, b, &athroisma, &ginomeno, &diafora);
	
	printf("\nTo athroisma einai %d, to ginomeno %d kai i diafora %d", athroisma, ginomeno, diafora);
	return 0;
}

/** 
* Synartisi pou ypologizei kai epistrefei to athroisma, to ginomeno kai ti diafora dyo arithmon
*/
void ypologismoi(int a, int b, int *athr, int *gin, int *diaf) {
	*athr = a + b;
	*gin = a * b;
	*diaf = a - b;
}


