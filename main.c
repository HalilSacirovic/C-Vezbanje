#include <stdio.h>

int main()
{
    // ZADATAK BROJ 3.1
 /*
int broj;

printf("Unesite broj:");
scanf("%d",&broj);

if (broj % 2 == 0) {
    printf("Uneti broj je paran");
}
else if (broj %3 == 0 ){
    printf("Uneti broj je neparan");
}



// ZADATAK BROJ 3.2

int broj;

printf("Unesite broj");
scanf("%d",&broj);

if (broj>0){
    printf("Uneti broj je pozivan");
}
else if (broj < 0){
    printf("Uneti broj je negativan");

}

else {
    printf("Uneti broj je 0");
}


// ZADATAK 3.3


int a,b;

printf("Unesite broj a:");
scanf("%d",&a);


printf("Unesite broj b:");
scanf("%d",&b);

if (a>b){
    printf("Broj a je veci od broja b");
}
else if (a<b) {
    printf("Broj a je manji od broja b");
}
else {
 printf("Broj a je jednak broju b");

}


// ZADATAK 3.4


int a,b,c,max;

printf("Tri cela broja su:");
scanf("%d%d%d",&a,&b,&c);
max = a;

if(b>max)
    max = b;
if (c>max)
    max=c;

printf("Najveci broj je:%d",max);



 // ZADATAK 3.7


 int a;

 printf("Unesite broj poena ostvarenom na ispitu:");
 scanf("%d",&a);

 if (a>=101) {
    printf("Broj bodova prelazi 100");
 }
 else if (a>91){
    printf("Ocena je 10");
 }
 else if (a>81){
 printf("Ocena je 9");
 }

 else if (a>71){
 printf("Ocena je 8");
 }

 else if (a>61){
 printf("Ocena je 7");
 }

 else if (a>51){
 printf("Ocena je 6");
 }
 else {
    printf("Ocena je 5");
 }



 // ZADATAK 3.8

 int a,b,x;

 printf("Unesite donju i gornju granicu opsega:");
 scanf("%d%d",&a,&b);

 printf("Unesite ceo broj x = ");
 scanf("%d",&x);

 if (a<= x*x  && x*x <= b) {
    printf ("x*x=%d,pripada oblasti [%d,%d]",x*x,a,b);
 }
 else{
    printf ("x*x=%d, ne pripada oblasti [%d,%d]",x*x,a,b);
 }



// ZADATAK 3.11


float x,y;

printf("Unesite x = ");
scanf("%f",&x);

if (x<=2 && x>-2){
    y=2*x;
}
else if(x<7 && x>=5) {
    y=3*x-1;
}
else {
    y=1/x;
}
printf ("y = %.2f",y);




// ZADATAK 4.1

int i;

for (i=1;i<6; i++){
    printf("\nHello World");
}


//////////////////////////////////////////////////////////////////////////////////////

// WHILE

int a;
a=1;
    while(a<=100) {
    printf("Pozdrav svima\n");
    a++;
}





// ZADATAK 5.4

    int n,i,S;
    printf("Unesite n:");
    scanf("%d",&n);

    S = 0;
    i=1;

    while(i<=n) {
        S += i;
        i+= 3;

    }

    printf("Suma svakog treceg prirodnog broja je:%d",S);




    // ZADATAK 5.7


    int n,i,ft,fp=1 ,fpp=1;

    printf("Unesite n ");
    scanf("%d",&n);

    printf("Elementi fibonacijevog niza su:\n1 1 ");

    i= 3;
    while(i <=n ){
        ft=fp+fpp;
        printf("%d ",ft);
        fpp=fp;
        fp=ft;
        i++;
    }

// ZADATAK 5.8


int n,a,i=1,stepen = 1;
printf ("Unesite stepen i broj:");
scanf("%d %d",&n,&a);

while (i <= n) {
    stepen *= a;
    i++;
}

printf("Stepen unetog broja iznosi:%d",stepen);

*/

// ZADATAK 5.9

const float STOP = 0;
int brojac = 0;
float realanBroj = -1, S= 0;

while (realanBroj != STOP){
    printf("Unesite jedan relana broj");
    scanf("%f",&realanBroj);
    S += realanBroj;
    brojac++;

    }
    float as= S /(brojac - 1);
    printf("Aritmeticka sredina brojeva je: %.2f",as);
 return 0;

}
