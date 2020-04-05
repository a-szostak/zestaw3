#include <stdio.h>

char tab[3][3] = {{"   "},
{"   "},
{"   "}};
int pion, poziom, a, b,i = 1,j;


int main(){

printf("Kolko i krzyzyk!\n");

while(i<10){ // rundy gry

  if (i%2==1){
  printf("Podaj wspolrzedne(pionowa,pozioma): \n");
  scanf("%d %d",&pion, &poziom);
  if ((tab[pion-1][poziom-1]=='X') || (tab[pion-1][poziom-1]=='O') || (pion>3) || (poziom>3)){
    printf("Nastepnym razem podaj dobre wspolrzedne!"); // jak się podało złe współrzędne, program się kończy - trzeba ponosić konsekwencje swoich czynów
    break;
  }
  else{
    tab[pion-1][poziom-1] = 'X' ;
  }}
  else {



int o = 1;
while(o>0){    //szukanie dobrego miejsca na postawienie O, żeby zablkokować X
    if((tab[0][0]=='X')&&(tab[1][1]=='X')){
      tab[2][2] = 'O';
      j = 0;
      for (a=0; a<3; a++){
        for(b=0; b<3; b++){
          if (tab[a][b] == 'O'){
            j++;}}}
        if (j==(i/2)){
          break;
        }
    }
    else if((tab[2][2]=='X')&&(tab[1][1]=='X')){
      tab[0][0] = 'O';
      j = 0;
      for (a=0; a<3; a++){
        for(b=0; b<3; b++){
          if (tab[a][b] == 'O'){
            j++;}}}
        if (j==(i/2)){
          break;
        }
    }
    if ((tab[0][2]=='X')&&(tab[1][1]=='X')){
      tab[2][0]='O';
      j = 0;
      for (a=0; a<3; a++){
        for(b=0; b<3; b++){
          if (tab[a][b] == 'O'){
            j++;}}}
        if (j==(i/2)){
          break;
        }
    }
    if ((tab[0][0]=='X')&&(tab[2][2]=='X')){
      tab[1][1]='O';
      j = 0;
      for (a=0; a<3; a++){
        for(b=0; b<3; b++){
          if (tab[a][b] == 'O'){
            j++;}}}
        if (j==(i/2)){
          break;
        }
    }
    if ((tab[2][0]=='X')&&(tab[1][1]=='X')){
      tab[0][2]='O';
      j = 0;
      for (a=0; a<3; a++){
        for(b=0; b<3; b++){
          if (tab[a][b] == 'O'){
            j++;}}}
        if (j==(i/2)){
          break;
        }
    }

    if ((tab[2][0]=='X')&&(tab[0][2]=='X')){
      tab[1][1]='O';
      j = 0;
      for (a=0; a<3; a++){
        for(b=0; b<3; b++){
          if (tab[a][b] == 'O'){
            j++;}}}
        if (j==(i/2)){
          break;
        }
    }


   for(a=0; a<3; a++){
     if ((tab[a][0]=='X')&&(tab[a][2]=='X')){
       tab[a][1] = 'O';
     }
   }
   j = 0;
   for (a=0; a<3; a++){
     for(b=0; b<3; b++){
       if (tab[a][b] == 'O'){
         j++;}}}
     if (j==(i/2)){
       break;
     }


   for(a=0; a<3; a++){
     if ((tab[0][a]=='X')&&(tab[2][a]=='X')){
       tab[1][a] = 'O';
     }
   }
   j = 0;
   for (a=0; a<3; a++){
     for(b=0; b<3; b++){
       if (tab[a][b] == 'O'){
         j++;}}}
     if (j==(i/2)){
       break;
     }


    for (a=0; a<3; a++){
      int f = 0;
      for(b=0; b<3; b++){
        if (tab[a][b] == 'X'){
          f++;
        if((f==2)&&(tab[a][0]=='X')){
          tab[a][2] = 'O' ;
        }}}}
        j = 0;
        for (a=0; a<3; a++){
          for(b=0; b<3; b++){
            if (tab[a][b] == 'O'){
              j++;}}}
          if (j==(i/2)){
            break;
          }

        for (a=2; a>=0; a--){
          int h = 0;
          for(b=2; b>=0; b--){
            if (tab[a][b] == 'X'){
              h++;
            if((h==2)&&(tab[a][2]=='X')){

              tab[a][0] = 'O' ;
            }}}}
            j = 0;
            for (a=0; a<3; a++){
              for(b=0; b<3; b++){
                if (tab[a][b] == 'O'){
                  j++;}}}
              if (j==(i/2)){
                break;
              }



        for (b=0; b<3; b++){
        int g = 0;
          for(a=0; a<3; a++){
            if (tab[a][b] == 'X'){
              g++;
            if((g==2)&&(tab[0][b]=='X')){
              tab[2][b] = 'O' ;
            }}}}
            j = 0;
            for (a=0; a<3; a++){
              for(b=0; b<3; b++){
                if (tab[a][b] == 'O'){
                  j++;}}}
              if (j==(i/2)){
                break;
              }

            for (b=2; b>=0; b--){
              int l = 0;
              for(a=2; a>=0; a--){
                if (tab[a][b] == 'X'){
                  l++;
                if((l==2)&&(tab[2][b]=='X')){
                  tab[0][b] = 'O' ;
                }}}}
                j = 0;
                for (a=0; a<3; a++){
                  for(b=0; b<3; b++){
                    if (tab[a][b] == 'O'){
                      j++;}}}
                  if (j==(i/2)){
                    break;
                  }
// jeśli nie ma okazji do blokowania:
      if(tab[1][1]==' '){   // zajęcie środka
        tab[1][1] = 'O';
        o = 0;
      }
   else{
      for (a=0; a<3; a++){
        for(b=0; b<3; b++){
          if (tab[a][b] == ' '){    // szukanie wolnego miejsca na O
            tab[a][b] = 'O';
             a = 3;
             break;}
           }
          }o = 0;
        }



}
  }
printf("\n_____ _____ _____");
printf("\n     |     |     |\n  %c",tab[0][0]);
printf("  |  %c",tab[0][1]);
printf("  |  %c",tab[0][2]);
printf("  |\n_____|_____|_____|");
printf("\n     |     |     |\n  %c",tab[1][0]);
printf("  |  %c",tab[1][1]);
printf("  |  %c",tab[1][2]);                           // wyświetlanie planszy
printf("  |\n_____|_____|_____|");
printf("\n     |     |     |\n  %c",tab[2][0]);
printf("  |  %c",tab[2][1]);
printf("  |  %c",tab[2][2]);
printf("  |\n_____|_____|_____|\n\n");


// sprawdzanie, czy ktoś nie wygrał
for (a=0; a<3; a++){
  int d = 0,e = 0;
  for(b=0; b<3; b++){
    if (tab[a][b] == 'X'){
      d++;}
    if(d==3){
      printf("\nWYGRANA!");
      i = 10;
      }

  else if(tab[a][b] == 'O'){
      e++;}
    if (e==3){
      printf("\nPRZEGRANA :(");
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
        printf("\nWYGRANA!");
        i = 10;
        }

    else if(tab[a][b] == 'O'){
        e++;}
      if (e==3){
        printf("\nPRZEGRANA :(");
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
        printf("\nWYGRANA!");
        i = 10;}
    if(e==3){
        printf("\nPRZEGRANA :(");
          i = 10;
        }

 if ((tab[0][2]=='X')&&(tab[1][1]=='X')&&(tab[2][0]=='X')){
   printf("\nWYGRANA!");
   i = 10;
 }

 if ((tab[0][2]=='O')&&(tab[1][1]=='O')&&(tab[2][0]=='O')){
   printf("\nPRZEGRANA :(");
   i = 10;
 }

i++;

}

return 0;
}
