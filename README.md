#Plik program.C
``c
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
``
# zd 1#
``sh
head -n 2 program.c
``
# zd 2#
``sh
tail -n 4 program.c
``

# zd 4#
``sh
chmod 640 program.c
``
# zd 3#
``sh
more program.c| grep main
``
