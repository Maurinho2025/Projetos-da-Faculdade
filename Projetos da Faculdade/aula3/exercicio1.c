#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "en_US.UTF-8");
  int i = 1;

  while (i <= 5){
    printf("%d", i);
    i++;
  }
  return 0;
}