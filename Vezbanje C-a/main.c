#include <stdio.h>
#include <math.h>
#define STOP 0

main()
{

// WHILE PETLJA(LOOP) ZADACI

// ZADATAK 5.1
/*
 int i;
 i=1;
 while(i<=5)
 {
 printf("Pozdrav svima!\n");
 i++;
 }


 // ZADATAK 5.2

 int i;

 while (i<=10) {
    printf("%d ",i);
    i++;
 }

 printf("\n");
 // b)

 int j;

 j=2;
 while (j<=10){
    printf("%d ",j);
    j+=2;
 }
  printf("\n");

 // c)

 int k;
 k=10;
 while (k>=1) {
    printf("%d ",k);
    k--;
 }
  printf("\n");


 // ZADATAK 5.3
 int i,n,s=0;

 printf("Unesite n = ");
 scanf("%d",&n);

 while(i<=n){
    s+=i;
    i++;
 }
    printf("Suma datih prirodnih brojeva iznosi: %d",s);


 // ZADATAK 5.9

 int n=0;
 float x,suma = 0;

 printf("Unesite niz realnih brojeva (0 za kraj): \n\n");
 scanf("%f",&x);

 while(x != STOP){
    suma+=x;
    n++;
    scanf("%f",&x);
 }
 if(n==0 ){
    printf("\n Nije Zadat niz realnih brojeva. \n\n");
 }
 else {
    printf("\n Aritmeticka sredina zadatog niza je %.3f\n",suma/n);
 }

 */


 // ZADATAK 5.10


 int i=0;
 float x, suma=0, sredina;
 printf("\n Unesite niz realnih brojeva (0 za kraj):\n\n");
 while(1)
 {
 scanf("%f",&x);
 if(x>=2 && x<=6)
 {
 suma+=x;
 i++;
 }
 if(x==0)
 {
 sredina=suma/i;
 printf(" Aritmeticka sredina: %.3f\n", sredina);
 }
 }


 getche();
 return 0;
}
