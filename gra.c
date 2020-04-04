#include <stdio.h>

char tab[3][3] = {{"   "},
{"   "},
{"   "}};
int pion, poziom, a, b;

int main(){

int i = 1;

printf("Kolko i krzyzyk!\n");

while(i<10){
  printf("Podaj wspolrzedne(pionowa,pozioma): \n");
  scanf("%d %d",&pion, &poziom);

  if (i%2==1){
  tab[pion-1][poziom-1] = 'X' ;
  }
  else {
    tab[pion-1][poziom-1] = 'O' ;
  }
printf("\n_____ _____ _____");
printf("\n     |     |     |\n  %c",tab[0][0]);
printf("  |  %c",tab[0][1]);
printf("  |  %c",tab[0][2]);
printf("  |\n_____|_____|_____|");
printf("\n     |     |     |\n  %c",tab[1][0]);
printf("  |  %c",tab[1][1]);
printf("  |  %c",tab[1][2]);
printf("  |\n_____|_____|_____|");
printf("\n     |     |     |\n  %c",tab[2][0]);
printf("  |  %c",tab[2][1]);
printf("  |  %c",tab[2][2]);
printf("  |\n_____|_____|_____|\n\n");


for (a=0; a<3; a++){
  int d = 0,e = 0;
  for(b=0; b<3; b++){
    if (tab[a][b] == 'X'){
      d++;}
    if(d==3){
      printf("\nKrzyzyk wygral");
      i = 10;
      }

  else if(tab[a][b] == 'O'){
      e++;}
    if (e==3){
      printf("\nKolko wygralo");
      i = 10;
      }
    }
  }


  for (b=0; b<3; b++){
    int d = 0,e = 0;
    for(a=0; a<3; a++){
      if (tab[a][b] == 'X'){
        d++;}
      if(d==3){
        printf("\nKrzyzyk wygral");
        i = 10;
        }

    else if(tab[a][b] == 'O'){
        e++;}
      if (e==3){
        printf("\nKolko wygralo");
        i = 10;
        }
      }
    }

int d = 0, e = 0;
  for (a=0; a<3; a++){
    if (tab[a][a] == 'X'){
      d++;}
      if (tab[a][a] == 'O'){
          e++;}}
    if(d==3){
        printf("\nKrzyzyk wygral");
        i = 10;}
    if(e==3){
        printf("\nKolko wygralo");
          i = 10;
        }

 if ((tab[0][2]=='X')&&(tab[1][1]=='X')&&(tab[2][0]=='X')){
   printf("\nKrzyzyk wygral");
   i = 10;
 }

 if ((tab[0][2]=='O')&&(tab[1][1]=='O')&&(tab[2][0]=='O')){
   printf("\nKolko wygralo");
   i = 10;
 }

i++;

}

return 0;
}
