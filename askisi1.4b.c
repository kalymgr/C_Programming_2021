/**
* Askisi 1.4
*/

#include <stdio.h>

#define M 3
#define N 4

void gemismaPinakon(int**, int**);
void dimiourgiaPinaka(int **, int **, int **);
void emfanisiPinaka(int **);

int main() {
	int **pinakas1, **pinakas2, **pinakas3;
	
	// allocate memory to arrays
	pinakas1 = malloc(M * sizeof *pinakas1);
	pinakas2 = malloc(M * sizeof *pinakas2);
	pinakas3 = malloc(M * sizeof *pinakas3);
	
	int i;
	for (i=0; i<M; i++) {
		pinakas1[i] = malloc(N * sizeof *pinakas1[i]);
		pinakas2[i] = malloc(N * sizeof *pinakas2[i]);
		pinakas3[i] = malloc(N * sizeof *pinakas3[i]);
	}
	
	gemismaPinakon(pinakas1, pinakas2);
	dimiourgiaPinaka(pinakas1, pinakas2, pinakas3);
	emfanisiPinaka(pinakas3);
	
	// deallocate memory
	for (i=0; i<M; i++) {
		free(pinakas1[i]);
		free(pinakas2[i]);
		free(pinakas3[i]);
	}
	free(pinakas1);
	free(pinakas2);
	free(pinakas3);
	return 0;
}


/**
* synartisi pou emfanizei ta periexomena enos pinaka
*/
void emfanisiPinaka(int **p) {
	int i,j;
	for (i=0;i<M;i++) {
		for (j=0; j<N; j++) {
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}

/**
* synartisi pou dimiourgei enan pinaka, apo to athroisma dyo allon pinakon
*/
void dimiourgiaPinaka(int **pinakas1, int **pinakas2, int **pinakas3)
{
	int i,j;
	for (i=0;i<M;i++) {
		for (j=0; j<N; j++) {
			pinakas3[i][j]=pinakas1[i][j] + pinakas2[i][j];
		}
	}	
}

/**
* Synartisi pou gemizei dyo pinakes, ton ena me arithmous pou pliktrologoume kai to deftero me tyxaious
*/
void gemismaPinakon(int **pinakas1, int **pinakas2) {
	// diabazoume ta periexomena tou protou pinaka

	int i,j;
	
	// gemizoume ton proto pinaka me arithmous pou pliktrologoume
	for (i=0;i<M;i++) {
		for (j=0; j<N; j++) {
			printf("\nDose ena stoixeio: ");
			scanf("%d", &pinakas1[i][j]);
			
		}
	}
	
	// gemizoume to deftero pinaka me tyxaious arithmous apo to 15 mexri to 25
	srand(time(NULL));
	for (i=0;i<M;i++) {
		for (j=0; j<N; j++) {
			pinakas2[i][j] = 15 + rand()%(25-15+1);
		}
	}
}
