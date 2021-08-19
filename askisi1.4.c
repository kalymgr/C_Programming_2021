/**
* Askisi 1.4
*/

#include <stdio.h>

#define M 3
#define N 4

void gemismaPinakon(int [M][N], int [M][N]);
void dimiourgiaPinaka(int [M][N], int [M][N], int [M][N]);
void emfanisiPinaka(int [M][N]);

int main() {
	int pinakas1[M][N], pinakas2[M][N], pinakas3[M][N];
	
	gemismaPinakon(pinakas1, pinakas2);
	dimiourgiaPinaka(pinakas1, pinakas2, pinakas3);
	emfanisiPinaka(pinakas3);
	return 0;
}


/**
* synartisi pou emfanizei ta periexomena enos pinaka
*/
void emfanisiPinaka(int p[M][N]) {
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
void dimiourgiaPinaka(int pinakas1[M][N], int pinakas2[M][N], int pinakas3[M][N])
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
void gemismaPinakon(int pinakas1[M][N], int pinakas2[M][N]) {
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
