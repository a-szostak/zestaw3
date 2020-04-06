#include <stdio.h>
#include <math.h>

int p, q, n, e = 2;
char m, cm;
long long int c;

int main(){

printf("Podaj 2 liczby pierwsze: ");
scanf("%d %d", &p, &q);

n = p*q;

printf("Podaj znak: ");
scanf("%s", &m);

int i = m;

while(((p-1)*(q-1))%e == 0){
  e++;
}


long long int w = pow(m,e);


c = w%n;

char cm = c;

printf("Znak po zaszyfrowaniu: %c", c);



  return 0;
}
