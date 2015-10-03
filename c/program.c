#include <stdio.h>
#include <conio.h>
char znak='a';
void main()
{
  puts("Naciskaj klawisze (q=wyjscie)");
  while (znak!='q')
  {
    znak=getch();
    printf("Znak %c to liczba %d\n",znak,znak);
  }
}
