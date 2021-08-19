/**
* Ylopoiisi tou paragontikou me anadromiki synartisi
*/

#include <stdio.h>

long int paragontiko (int);

int main() {
	int k;
	long int par;
	printf(	"\n Dose ton arithmo: ");
	scanf("%d", &k);
	par = paragontiko(k);
	printf("\nTo %d! einai %ld",k, par);	
	
	return 0;
}

long int paragontiko(int n) {
	long p; // metabliti pou apothikevei to paragontiko
	if (n==0)
		p = 1;
	else
		p = paragontiko(n-1) * n;
	return p;
}
