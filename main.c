#include <stdio.h>
#include <math.h>

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

    // NACIN SA DO WHILE PETLJOM

    const float STOP = 0;
int brojac = 0;
float realanBroj = -1, S= 0;

do {
    printf("Unesite jedan relana broj");
    scanf("%f",&realanBroj);
    S += realanBroj;
    brojac++;

    }

    while(realanBroj != STOP);
    float as= S /(brojac - 1);
    printf("Aritmeticka sredina brojeva je: %.2f",as);



// ZADATAK 5.18
// OBJASNJENJE ZNACI NIVENOV BROJ JE AKO JE DELJIV NPR ZA ZBIROM TIH BROJEVA NPR AKO UZMEMO BROJ 224 2+2+4=8, i ako je taj broj deljiv sa 8 bez ostatka znaci da
// Je taj broj nivenov i onda nam ispisuje ovo;
int broj,S = 0, zadnjaCifra,pom;

printf("Unesite broj za proveru");
scanf("%d",&broj);

pom=broj;

while(broj>0) {
    zadnjaCifra = broj%10;
    S += zadnjaCifra;
    broj = broj/10;

}

if (pom % S == 0){
    printf("Uneti broj je nivenov");
}
else {
    printf("Uneti broj nije Nivenov");
}




// ZADATAK 6.5

int i = 1, znak = 1;
double eps,PI,S = 0,clan;

do{
    printf("Unesite eps");
    scanf("%lf",&eps);

}while (eps <= 0 );

do {
    clan = znak * 1.0 / i;
    S += clan;
    znak = -znak;
    i += 2;

}while (fabs(clan)>= eps);

PI = 4 *S;
printf("Dobijena vrednost PI Izosi %lf",PI);



double x, y, z, p;
 printf("Unesite tri realna broja: ");
 scanf("%lf%lf%lf", &x, &y, &z);
 if(x>y)
 {
 p=x; x=y; y=p;
 }
 if(x>z)
 {
 p=x; x=z; z=p;
 }
 if(y>z)
 {
 p=y; y=z; z=p;
 }
 printf("Uredjeni brojevi: %.2f %.2f %.2f\n", x, y, z);




// ZADATAK 3.18

double a,b,c,D,x1,x2;
 printf("Unesite a:");
 scanf("%lf",&a);

 printf("Unesite b:");
 scanf("%lf",&b);

 printf("Unesite c:");
 scanf("%lf",&c);

 if (a != 0 ) {
    D= b*b-4*a*c;

    if (D > 0 ){
        x1= (-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("Resenja:\nx1=%.2f, x2=%.2f",x1,x2);
    }
    else if(D==0) {
        x1= (-b/(2*a));
        printf("Resenje iznosi:\nx1=x2=%.2f",x1);
    }
    else {
        x1 = -b/ (2*a);
        x2 =sqrt(-D)/(2*a);
    printf("Resenje iznosi:\nx1=x2=%.2f",x1);
    }
 }

 else  {
    if( b!= 0) {
        x1= -c/b;
        printf("\nResenje je:\nx=%.2f",x1);
}
else {

    printf("Sistem nema resenje ");
    }
 }

 double a, b, c, D, x1, x2;
 printf("Unesite koeficijente:\na= "); scanf("%lf",&a);
 printf("b= "); scanf("%lf",&b);
 printf("c= "); scanf("%lf",&c);
 if(a!=0)
 {
 D=b*b-4*a*c;
 if(D>0)
 {
 x1=(-b+sqrt(D))/(2*a);
 x2=(-b-sqrt(D))/(2*a);
 printf("n\Resenja:\nx1=%.2f, x2=%.2f",x1,x2);
 }
 else if(D==0)
 {
 x1=(-b/(2*a));
 printf("\nResenje:\nx1=x2=%.2f",x1);
 }
 else
 {
 x1=-b/(2*a);
 x2=sqrt(-D)/(2*a);
 printf("\nKompleksna resenja:\n");
 printf("x1=%.2f+i%.2f, x2=%.2f-i%.2fi",x1,x2,x1,x2);
 }
 }
 else
 {
 if(b!=0)
 {
 x1=-c/b;
 printf("\nResenje:\nx=%.2f",x1);
 }
 else printf("Sistem nema resenja.");
 }


// VIDI ZASTO TI NECE PRVI KOD OVOG Zadatka


// ZADATAK 4.1
int i;

for (i=1;i<6;i++){
    printf("Pozdrav Svima\n");
}



//ZADATAK 4.2

a)

int i;

for(i=1; i<=10; i++){
    printf("%d\n",i);
}


b)
int i;

for(i=10;i>1;i--){
 printf("%d\n",i);
}


// ZADATAK 4.3


int i,j;

for(i=1;i<=2;i++){
    for(j=1;j<=3;j++) {
        printf("i=%d,  j=%d\n",i,j);

    }
}
for(i=1;i<=3;i++){
    for(j=1;j<=2;j++) {
        printf("\ni=%d,  j=%d\n",i,j);

    }
}


// ZADATAK 4.4


int n,i,S;
S=0;

printf("Unesite n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
    S=i+S;
    // Ovde IDE ALGORITAM AKO JE i=1 S=1+0,zatim za i=2, s=2+1
    //(staro s koje smo izracunali od i=1), i zatim sve ide do broja n kojeg smo mi uneli;

}
    printf("Suma=%d",S);

int n,i;
float k,S,ar;
S=0;

printf("n=");
scanf("%d",&n);

printf("Unesite %d brojeva:",n);
for (i=1;i<=n;i++){
    scanf("%f",&k);
    S=k+S;
}

ar=S/n;
printf("Suma zadatih brojeva je:%.2f",S);
printf("\nAritmeticka sredina zadatih brojeva je:%.2f",ar);



// ZADATAK 4.6



int i,n;
long faktorijel=1;

printf("Unesite n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
faktorijel=faktorijel*i;
}
printf("Faktorijel:%ld",faktorijel);

ZADATAK 4.7


int i,n;
long f=1,s=0;

printf("Unesite n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
f=f*i;
s=f+s;
}
printf("S=%ld",s);


// ZADATAK 4.8

int i,n,m;
long s;


printf("Unesite n=");
scanf("%d",&n);

printf("Unesite m=");
scanf("%d",&m);

s= 1;

for(i=0; i<=m;i++){
    s=s*(n+i*m);
}
printf("\ns=%ld",s);



///// ZADATAK 4.9

int n,i,faktorijel;
float s,q;

printf("n=");
scanf("%d",&n);

s=0;
q=0;

for (i=1;i<=n;i++){
    faktorijel= faktorijel*i;
    q=q+1./(1+i);
    s= s+ faktorijel/q;
}
printf("\ns=%.5f",s);



// 4.11 Ne znam

// 4.12


int n,i;
float br,max;

printf("n=");
scanf("%d",&n);
max=br;

printf("\nUnesite:1 ,  broj:");
scanf("%f",&br);

for (i=2;i<=n;i++){
    printf("Unesite:%d.  broj: ",i);
    scanf("%f",&br);
        if(br>max){
            max=br;
        }
}
printf("Najveci:%.2f",max);




// ZADATAK 4.13


int i,s=0;

printf("Brojevi deljivi sa 6:\n");
for (i=1;i<=100;i++){
    if(i % 6 == 0) {
        s=s+i;
        printf("%d\n",i);
    }
}

printf("Suma iznosi:%d",s);

// ZADATAK 4.14


int a,b,c;

for(a=1;a<=9;a++){
    for(b=3;b<=9;b++){
        for(c=4;c<=9;c++){
            if (b==a+2 && c== b+1){
                printf("%d%d%d\n",a,b,c);
            }
        }
    }
}




// ZADATAK 4.15

int a,b,c,d,broj;

printf("Amstrongovi brojevi su:");

for(a=1;a<=9;a++){
    for(b=0;b<=9;b++){
        for(c=0;c<=9;c++){
            broj=a*100+b*10+c;
            if(broj == pow(a,3)+pow(b,3)+pow(c,3)){
               printf("%d\n",broj);
        }
    }
}
}



// ZADATAK 4.16 OVAJ ZADATAK NE ZNAMM

int a,b,c,broj;

for(a=1;a<=9;a++){
    for(b=0;b<=9;b++){
        for(c=0;c<=9;c++){
            broj= 100*a+b*10+c;
            if(broj == (a*b)*(a*b)-c*c){
                printf("%d\n",broj);
            }
        }
    }
}



// ZADATAK 4.21


int i,n,br=0,ocena;

float zbir,srednja;

printf("Broj ucenika n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
    printf("Unesite ocenu %d -ucenika:",i);
    scanf("%d",&ocena);
    zbir=zbir+ocena;

    if(ocena == 1){
        br++;
    }

}
    srednja= zbir/n;
    printf("\nSrednja ocena svih ucenika iznosi:%.2f",srednja);

    printf("\nBroj negativnih ocena iznosi:%d",br);

// ZADATAK 4.28 a)

int i,j,n;

printf("Unesite n=");
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        printf("* ");
    }
        printf("\n");
}

// v)
int i,j,n;

printf("Unesite n=");
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf("* ");
    }

}




// ZADATAK 4.20

int n,i,s=0;

printf("n=");
scanf("%d",&n);
for (i=1; i<=n; i++) {
if (n% i ==0){
    s+=i;
}
}
if(s== n){
    printf("Broj %d jeste savrsen broj.\n",n);
}
else{
printf("Broj %d nije savrsen broj.\n",n);
    }
??????????????????????????


int sat,minut,sekunde,n;

printf("n=");
scanf("%d",&n);

for (sat=0;sat<=23;sat++){
    for(minut=0;minut<=59;minut++)
        for(sekunde=0;sekunde<=59;sekunde++){
            if(n==(sat/10+sat%10+minut/10+minut%10+sekunde/10+sekunde%10)){
               printf("\n%d sat %d min %d sec", sat, minut, sekunde);
}
}
}


// ZADATAK 4.26

int i,j,n;


printf("n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=0;j<2*n;j++){
        printf("%d",j);
    }
        printf("\n");
}


// ZADATAK 4.28

//a)

int i,n,j;

printf("n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=0;j<n;j++){
        printf("*");
    }
        printf("\n");
}





 b)

int i,n,j;

printf("n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i ==1  || i== n){
            printf("* ");
        }
        else if (j == 1 || j == n) {
            printf("*    ");
        }
        else {
            printf(" ");
        }
    }
        printf("\n");
}

c)

int i,n,j;

printf("n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=0;j<i;j++){
        printf("*");
    }
        printf("\n");
}

 d)

int i,n,j;

printf("n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=n;j>=i;j--){
        printf("*");
    }
        printf("\n");
}



 int i, j, n, k;
 printf(" n= ");
 scanf("%d", &n);
 printf("\n");
 for(i=1; i<=n; i++)
 {
 for(k=n; k>i; k--)
 printf(" ");
 for(j=1; j<=i; j++)
 printf("* ");
 printf("\n");
 }


/////////////////////////////////////////

 int i, j, n, k;
 printf(" n= ");
 scanf("%d", &n);
 printf("\n");
 for(i=1; i<=n; i++)
 {
 for(k=n; k>i; k--)
 printf("* ");
 printf("%d",k);
 for(j=1; j<=i; j++)
 printf("* ");
 printf("\n");
 }



// SKOKOVI ZADACI


// ZADATAK 7.4



int i,semafor=0;

for(i=7;i<=400;i++){
    if (i % 3 == 0 && i % 4== 0 && i % 5 == 0 && i % 7 == 0) {
        printf ("Broj koji zadovoljava uslov %d",i);
        semafor = 1;
        break;
    }

}

if (semafor == 0 ){
    printf("Ne postoji broj koji zadovoljava uslov ");
}


/////////////////////////////////////////////////////////////////////


int n,i;
float s;

while(1){
    printf("Unesite n=");
    scanf("%d",&n);

    if(n<=0){
        break;
    }
    s=0;
    for( i=1; i<=n; i++){
        s+=1./(i*i);
    }
        printf("S = %.6f\n\n",s);
}


/////////////////////////////////////


int i;
long fakt = 1;
long s=0;


printf("Unesite n= ");
scanf("%d",&n);
for (i=2;i<=n;i++){
    fakt *=i;
    if(i % 2 == 1){
    continue;
    }
    s +=fakt;
}





// SWITCH

int x;
 printf(" n= ");
 scanf("%d",&x);
 switch(x)
 {
case 1:
 printf("\n ponedeljak");
 break;
case 2:
 printf("\n utorak");
 break;
case 3:
 printf("\n sreda");
 break;
case 4:
 printf("\n cetvrtak");
 break;
 case 5:
 printf("\n Petak");
 break;
 case 6:
 printf("\n Subota");
 break;
 case 7:
 printf("\n Nedelja");
 break;
 default:
 printf("\n Greska");
 break;
 }

// ZADATAK 7.20

 char x;
 printf ("Unesite jedno slovo:");
 scanf("%c",&x);

 switch (x){
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
     printf(" %c je Samoglasnik",x);
     break;
 default:
    printf(" %c je Suglasnik",x);
 }


 // ZADATAK 7.22


char operacija;
float op1,op2;
float rezultat;

printf("Unesite operand operacija operand:");
scanf("%f %c %f",&op1,&operacija,&op2);

switch (operacija) {
case '+':
    rezultat= op1 + op2;
    break;
case '-':
    rezultat= op1 - op2;
    break;
case '*':
    rezultat= op1 * op2;
    break;
case '/':
    rezultat= op1 / op2;
    break;
default:
    printf("Greska");
    return 1;
}

printf("\nRezultat:%f",rezultat);


// ZADATAK 7.24


int g,m;

printf("Godinu i mesec:");
scanf ("%d %d",&g,&m);

switch (m){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
     printf("Uneti mesec ima 31 dan");
     break;
case 4:
case 6:
case 9:
case 11:
    printf("Uneti mesec ima 30 dan");
     break;
case 2: if ((g%4==0 && g%100 !=0)|| g%400 ==0 ){
printf("Uneti mesec ima 29 dana");
}else {
printf("Uneti mesec ima 28 dana");
break;
}
default:printf("Greska");


}

*/
 return 0;

}
