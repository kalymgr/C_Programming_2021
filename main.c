#include<stdio.h>
void evadon(int *epilogi,float *Evt,float *Evk);
main()
{
float Evk,Evt;
int epilogi;
printf("1.Evadon kiklou\n");
    printf("2.Evadon tetragonou\n");
do{
printf("\n An thes Evadon kiklou pata 1 \n An thes Evadon tetragonou pata 2\n:");
    scanf("%d", &epilogi);
}while(epilogi!=2 && epilogi!=1);



evadon(&epilogi,&Evt,&Evk);

if(epilogi==1)
{
printf("To Evadon tou kiklou einai : %f\n",Evk);
}
else
{
printf("To Evadon tou tetragonou einai : %f\n",Evt);
}
}

void evadon(int *epilogi,float *Evt,float *Evk)
{
float pi,r,p;
pi=3.1415;
if(*epilogi == 1)
{
printf("Dwse tin aktina :");
scanf("%f",&r);
*Evk= r*r*pi;


}
else
{

printf("Dwse tin pleura:");
scanf("%f",&p);
*Evt=(float)p*p;


}

}
