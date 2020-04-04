#include <stdio.h>    // 65-90 duże litery, 97-122 - małe

char x, vkey;
int s, ckey;

int main(){



printf("Podaj litere: \n");
scanf("%s",&x);

printf("\nDostepne szyfry: \n1 - Vigenere'a \n2 - Cezara \n\nWybieram nr: ");
scanf("%d", &s);

if (s==1){
  printf("Podaj klucz (litera): ");
  scanf("%s", &vkey);
  int b = vkey;

}
else if (s==2){
  printf("Podaj klucz (liczba calkowita): ");
  scanf("%d", &ckey);
  int n = x;
  ckey = ckey%26;
  x = x + ckey;
  char a = (char)x;
  printf("\nLitera po zaszyfrowaniu: ");
  printf("%c", x);

}
else{
  printf("Musisz wybrac jeden z dostepnych szyfrow!");
}
  return 0;
}
