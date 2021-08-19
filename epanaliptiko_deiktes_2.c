/**
* Programma pou zitaei apo to pliktrologio dyo akeraious arithmous
* kai ypologizei kai emfanizei stin othoni to athroisma, ti diafora
* kai to ginomeno. Oloi oi ypologismoi tha ginoun se MIA synartisi.
* Ta apotelesmata ta emfanizei to programma
* Afti einai i lisi pou proteinetai stis simeioseis
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // gia na mporoume na grafoume ellinika-stis simeioseis tou mathimatos
// xrisimopoiei to greek.h
int praxeis(int x, int y, int *d, int *g);
int main(int argc, char *argv[])
{ 
	int a, b, sum, gin, diaf;
	SetConsoleOutputCP(1253);  // stis simeioseis tou mathimatos xrisimopoiei SetGreek()
	printf("Δώστε τον πρώτο ακέραιο : ");
	scanf("%d", &a);
	printf("Δώστε το δεύτερο ακέραιο : ");
	scanf("%d", &b);
	sum = praxeis(a, b, &diaf, &gin);
	printf("Τα %d και %d δίνουν άθροισμα %d,\
	γινόμενο %d και διαφορά %d\n\n", a,b,sum,gin,diaf);
	system("PAUSE");
	return 0;
}
int praxeis(int x, int y, int *d, int *g)
{
	*d = x - y;
	*g = x * y;
	return x + y;
}
