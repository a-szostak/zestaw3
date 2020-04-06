#include <stdio.h>

char x, vkey;
int s, ckey;

int main(){

printf("Podaj litere: \n");
scanf("%s",&x);
int c = x;

if(x<91){
  x = x + 32;
}

printf("\nDostepne szyfry: \n1 - Vinegere'a \n2 - Cezara \n\nWybieram nr: ");
scanf("%d", &s);

if (s==1){
  printf("\nPodaj klucz (litera): ");
  scanf("%s", &vkey);
  int b = vkey;
  if(vkey<91){
    vkey = vkey + 32;
  }
  vkey = vkey - 97;
  x = x + vkey;
  if (x>122){
    x = x - 26;
  }
  char a = (char)x;
  printf("\nLitera po zaszyfrowaniu: ");
  printf("%c", x);


}
else if (s==2){
  printf("Podaj klucz (liczba calkowita): ");
  scanf("%d", &ckey);
  ckey = ckey%26;
  x = x + ckey;
  if (x>122){
    x = x - 26;
  }
  char a = (char)x;
  printf("\nLitera po zaszyfrowaniu: ");
  printf("%c", x);

}

else{
  printf("\nMusisz wybrac jeden z dostepnych szyfrow!");
}



  return 0;
}
