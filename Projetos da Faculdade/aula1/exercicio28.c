#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "en_US.UTF-8");

  int nota = 65;
  
  if(nota >+ 60){
     printf("Parabéns, vocé passou\n");
     
     return 0;
   }

}