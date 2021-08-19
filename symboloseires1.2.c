/**
* Na grafei programma to opoio na periexei synartisi, i opoia dexetai ws eisodo mia symboloseira (string)
* kai enan xaraktira kai tha epistrefei ton arithmo tvn emfaniseon aftou tou xaraktira mesa sti 
* symboloseira
*/

#include <stdio.h>

// prototypo tis synartisis anazitisi
int anazitisi (char *, char);

int main() {
	
	char keimeno[50];
	char ch;
	printf("\nDose to keimeno sto opoio tha ginei i anazitisi:");
	gets(keimeno);
	printf("\n Molis edoses to keimeno: %s",keimeno);
	printf("\n Dose to xaraktira pou thes na anazitiseis mesa sto keimeno:");
	ch = getc(stdin);
	
	// kane tin anazitisi
	int plithos = anazitisi(keimeno,ch);
	printf("\nO xaraktiras yparxei mesa sto keimeno %d fores", plithos);
	return 0;
}

/**
* Synartisi pou metraei poses fores yparxei enas xaraktiras mesa sto keimeno
*/
int anazitisi (char* text, char xaraktiras) {
	int plithos = 0;
	while  (*text != '\0') {
		text++ ;
		if (*text == xaraktiras)
			plithos++ ;
	}
	return plithos;
}
