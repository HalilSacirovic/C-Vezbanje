#include <stdio.h>
#include <math.h>
#define PI 3.141592

main()
{
/*
// ====================================================================
// FOR PETLJA (LOOP ) ZADACI
// ====================================================================
// ZADATAK 4.25

double dx=0, ugaoRad,UgaoSte;
printf("Unesite korak u stepenima: ");
scanf("%lf",&dx);

printf("\n    x              sin<x>");
printf("\n ==========================");

for(UgaoSte=0;UgaoSte<=90;UgaoSte+=dx){
    ugaoRad = (PI*UgaoSte)/180.0;
    printf("%f \t %f\n",UgaoSte,sin(ugaoRad));
}

// ZADATAK 4.24

int i,n;
double xmin,xmax,dx,x,y=1,p=1;

printf("n= ");
scanf("%d",&n);

printf("xmin= ");
scanf("%lf",&xmin);

printf("xmax= ");
scanf("%lf",&xmax);

printf("dx= ");
scanf("%lf",&dx);

printf("\n    x              y");
printf("\n ==========================");


for(x=xmin;x<=xmax;x+=dx){
    for(i=1;i<=n;i++){
    p*=x;
    y*=(1+p);

    }
    printf("%10.6f %11.6f\n",x,y);
    p=1;
    y=1;
}



// ZADATAK 4.23


double xmin,xmax,dx,x,y;

printf("xmin= ");
 scanf("%lf", &xmin);
 printf("xmax= ");
 scanf("%lf", &xmax);
 printf("dx= ");
 scanf("%lf", &dx);
 printf("\n x      y\n ===================\n");

 for(x=xmin;x<=xmax;x+=dx){
    y=(2*x+1)/(pow(x,2)-1);
    printf("%10.3f%10.3f\n",x,y);
 }




// ZADATAK 4.22

int sat,min,sek,n;


printf("Unesite n= ");
scanf("%d",&n);

for(sat=0; sat<=23;  sat++){
    for(min=0;  min<=59; min++){
        for(sek=0;  sek<=59;  sek++){
            if(n == (sat/10 + sat%10 + min/10 + min%10 + sek/10 + sek%10)){
                printf(" %d sat %d min %d sek\n",sat,min,sek);
            }
        }
    }
}


// ZADATAK 4.21

int i,br=0,n,ocena;
float s,srednja;

printf("Broj ucenika n=");
scanf("%d",&n);

for(i=1;i<=n;i++){
    printf("Unesite ocenu %d. ucenika: ",i);
    scanf("%d",&ocena);
    s+=ocena;

    if(ocena==1){
        br++;
    }
}

srednja= s/n;
printf("%d Ucenika ima negativnu ocenu \n",br);
printf("Prosecna ocena ucenika je: %f",srednja);



// ZADATAK 4.20

int n,i,suma=0;

printf("n=");
scanf("%d",&n);

for(i=1;i<n;i++){
    if(n % i == 0){
        suma+=i;
    }

}
    if(suma == n){
        printf("Broj %d je dobar nije savrsen, jer samo je BOG savrsen",n);
    }
    else{
        printf("Broj %d nije dobar",n);
    }

*/
















// =========================================================================
// ===========================================================================

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


 // ZADATAK 5.13

 int i=1,n,znak=1;
 float suma=0;

 printf("Unesite n =");
 scanf("%d",&n);

 while(i<=n){
    suma+=(float)znak/i;
    i++;
    znak=-znak;
 }

 printf("\n S= %.3f \n",suma);

 // ZADATAK 5.17

 int a,b;

 printf("Unesite a=");
 scanf("%d",&a);


 printf("Unesite b=");
 scanf("%d",&b);

 while (a !=b){
    if(a>b){
        a=a-b;
    }
    else{
        b-=a;
    }
 }
 printf("\n NZD= %d",a);




 // ZADATAK 5.18


 int n,k,suma=0;

 printf("Unesite n=");
 scanf("%d",&n);
 k=n;
 while(k>0){
    suma=suma+k%10;
    k/=10;
 }
 if(k%suma== 0){
    printf("Broj je nivenov");
 }
 else{
    printf("Broj nije nivenov");
 }




 int n,obrnuti=0;
 printf("Unesite n= ");
 scanf("%d",&n);

 while(n>0){
    obrnuti = obrnuti*10+ n%10;
    n/=10;
 }

 printf("Obrnuti: %d\n",obrnuti);


 // ZADATAK 5.20

 int m,n,k;
 printf("n=");
 scanf("%d",&n);
 m=n/2;

 for(k=2;k<=m;k++){
    while(n%k==0){
        printf("%3d",k);
        n/=k;
    }
 }


// ZADATAK 5.21



int a,b,c,zbir;

printf("Pitagorini brojevi su:\n");

for(a=1;a<=20;a++){
    for(b=1;b<=20;b++){
        zbir=a*a+b*b;
        c=1;
        while(c*c<=zbir){
           if(c*c== zbir){
            printf(" a=%2d b=%2d c=%2d\n",a,b,c);
           }
            c++;

        }
    }
}
////////////////////////////////////////////////////////////////////////////////////

// DO WHILE PETLJA

////////////////////////////////////////////////////////////////////////////////////]

// ZADATAK 6.1


int i;
i=1;

do{
    printf("Pozdrav svima\n");
    i++;
}

while(i<=5);


// ZADATAK 6.2


int i;

i=1;

do{
    printf("%d ",i);
    i++;
}
while(i<=10);




 // ZADATAK 6.3


 int n;

 do{
    printf("n=");
    scanf("%d",&n);

 }

while(n*n>=100);{
    printf("Kvadrat broja %d  %d pripada prvoj stotini",n,n*n);
}




 // ZADATAK 6.4



int stepen,granica;

printf("Unesite granicu:");
scanf("%d",&granica);
stepen=1;
do {
    printf("%d\n",stepen);
    stepen*=2;
}
while(stepen<=granica);


 // ZADATAK 6.6

 float a,i=0,s=0;
 printf("a=");
 scanf("%f",&a);

 do{
    i++;
    s=s+1/i;
    printf("%f\n",s);
 }
 while(s<a);
 {
 printf("S=%.3f",s);
 }



 // ZADATAK 6.8


 int x,a,b,brojac=0;

 do{

 printf("Unesite granice opsega:");
 scanf("%d%d",&a,&b);

 }
while(a>1 || a>b || b<=a || b<100);
printf("\n Brojevi u opsegu od %d do %d deljivi sa 4:\n", a, b);
for(x=a;x<=b;x++){
    if(x% 4 ==0){
        printf(" %d ", x);
        brojac++;
    }
    if(brojac%10==0){
        printf("\n");
    }
}



 // ZADATAK 6.9

 int suma=0,i=100,br=0;

 do {
    if(i % 64 == 0){
        suma+=i;
        br++;
    }
    i++;
 }
 while(i<=999);

 printf("Suma=%d",suma);
 printf("Brojeva=%d",br);



 // ZADATAK 6.10


 int m,n,k,br=0;
 float x;

 do{
    printf ("m=");
    scanf("%d",&m);

 }
 while (m<=0 || m>=10);
printf ("\n Unesite cele brojeve [0 za kraj]:\n");
scanf("%d",&k);
 do{
    n=log10 (k);
    n=k/pow(10,n);
    if(n==m){
        br++;
    }
    scanf("%d",&k);

 }
 while(k!=0);
 printf("\n %d brojeva ima prvu cifru %d ", br, m);


// ZADATAK AVION

int sat,min,sek,q,sat1,min1,sek1,q1,q3,suma;

printf("U koliko sati je krenuo: ");
scanf("%d",&sat);

printf("U koliko minuta je krenuo: ");
scanf("%d",&min);

printf("U koliko sekundi je krenuo: ");
scanf("%d",&sek);

printf("Koliko sati je proveo u letu: ");
scanf("%d",&q);

printf("Koliko minuta je proveo u letu: ");
scanf("%d",&q1);


printf("Koliko sekundi je proveo u letu: ");
scanf("%d",&q3);

suma=sat*3600+min*60+sek+q*3600+q1*60+q3; //suma koja treba da se izracuna i pretvori u sekunde

sat1=f/3600;
min1=(f%3600)/60;
sek1=(f/3600)%60;

printf("Avion slece u: %dh:%dmin:%dsek",sat1,min1,sek1);




int n;
    printf("Unesite broj N:");
    do{
        scanf("%d",&n);
    }
    while(n <= 10);
    int broj_cifara = 0;

    int temp = n;
    do {
        temp /= 10;
        ++broj_cifara;
    } while (temp != 0);

    int zadnja_cifra = n % 10;
    int prva_cifra = n / (pow(10, broj_cifara-1));

    int sredina = 0;

    temp = n;

    for(int i = 0; i < broj_cifara; i++) {
        int temp2 = temp % 10;
        temp /= 10;
        if(i == 0 || i ==broj_cifara-1){
            continue;
        }
        sredina += temp2 * pow(10, i-1);
    }
    int m = zadnja_cifra * pow(10, broj_cifara-1)  + sredina * 10 + prva_cifra;

    printf("%d ",m);




 int n, obrnuti=0,mafija;
 printf(" n= ");
 scanf("%d", &n);
 while(n > 0)
 {
mafija = n%10;
printf("\n%d\n",mafija);
 obrnuti = obrnuti*10 + n%10;
 printf("%d\n",obrnuti);
 n /= 10;
 printf("%d\n",n);
 }
 printf("\n Obruti: %d\n", obrnuti);




 int x,y,cx=2,cy=3,r=2;

 printf("Unesite x koordinatu tacke \n");
 scanf("%d",&x);

 printf("Unesite y koordinatu tacke \n");
 scanf("%d",&y);

 if(pow((x-cx),2)+pow((y-cy),2)<=r*r){
    printf("Tacka se nalazi u krugu");
 }
 else {
    printf("Tacka se ne nalazi u krugu");
 }



 int n, obrnuti=0,mafija;
 printf(" n= ");
 scanf("%d", &n);
 while(n > 0)
 {

 obrnuti = obrnuti*10 + n%10;

 n /= 10;
 }
 printf("\n Obruti: %d\n", obrnuti);


 int n,k,suma=0;

 printf("Unesite n=");
 scanf("%d",&n);
 k=n;

 while(k>0){
    suma+=k%10;
    printf("%d \n",suma);
    k/=10;
    printf("%d\n",k);
 }

 if(suma % k == 0 ){
    printf("Broj je nivenov");
 }
 else{
    printf("Broj nije nivenov");
 }



 int n,m,k;


 printf("n=");
 scanf("%d",&n);
 printf("Prosti faktori su:");
 m=n/2;

for(k=2;k<=m;k++){
    while(n % k == 0){
        printf("%d ",k);
        n/=k;
    }
}

 int n,m,i;

 long s=1;

 printf("n=");
 scanf("%d",&n);

 printf("m=");
 scanf("%d",&m);

 for(i=0;i<=m;i++){
        s*=(n+i*m);

 }

 printf("%ld",s);



 int n,m,i,znak;
 float s=0;


  printf("n=");
 scanf("%d",&n);

 printf("m=");
 scanf("%d",&m);

znak=1;

for(i=1;i<=m;i++){
    s+=((float)znak/(n+i*m));
    znak=-znak;
}
printf("%f",s);


 int sat,min,sek,n;

 printf("n=");
 scanf("%d",&n);

 for(sat=0;sat<=23;sat++){
    for(min=0;min<=59;min++){
        for(sek=0;sek<=59;sek++){
            if(n == (sat/10+sat%10+min/10+min%10+sek/10+sek%10))
                printf(" %d : %d : %d\n",sat,min,sek);
        }
    }
 }
 */

int a,b,c,d,e;

printf("A=");
scanf("%d",&a);

b=a/10;
printf("%d\n",b);

d=a%10;

printf("%d\n",d);

////////////////////////////////////////////
// =================================================================================
////////////////////////////////////////


 getche();
 return 0;
}
