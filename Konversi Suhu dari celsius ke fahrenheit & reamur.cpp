#include <stdio.h>
#include <conio.h>

int main ()
{
float c,r,f,k;
printf("masukkan besar suhu dalam celsius : ");
scanf("%f", &c);
f=(c*1.8)+32;
printf("suhu dalam farenheit : %.2f farenheit\n", f);
r=(c*0.8);
printf ("suhu dalam rheamur : %.2f Rheamur\n", r);
getch();
}
