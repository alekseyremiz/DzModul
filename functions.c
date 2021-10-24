#include <stdio.h>
#include <math.h>
#include "Functions.h"
#include <time.h>

// Работу выполнил студент 17 группы Ремизов Алексей//

void zad_1(float x, float c, float a)
{
   float L = (sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(1) * sqrt(fabs(a + x * pow(c, 4))));
   printf("Значение длины равняется %f", L);
}

///////////////////////////////////////////////////////////////////////////////



void zad_2()

{
   float S, t;
   scanf_s("% f", &t);
   
   S = 3 * t * t - 6 * t;
   printf_s("Путь равен %f", S);
}

///////////////////////////////////////////////////////////////////////////////



void zad_3(double a, double b, double c)
{
   double x1, x2;
   double D;
   D = b * b - 4 * a * c;
   if (D > 0)
   {
      x1 = (-b - sqrt(D)) / (2 * a);
      x2 = (-b + sqrt(D)) / (2 * a);
      printf_s("Ваши корни:x1 = %f, x2 = %f", x1, x2);
   }
   if (D == 0)
   {
      x1 = -b / (2 * a);
      printf_s("Ваш корень:x = %f", x1);
   }
   if (D < 0)
      printf_s("Нет действительных корней");
}

///////////////////////////////////////////////////////////////////////////////




double zad_4(int kod, float t)
{
   switch (kod)
   {
   case 44: 18 * (t / 60); break;
   case 45: 11 * (t / 60); break;
   case 46: 13 * (t / 60); break;
   case 48: 15 * (t / 60); break;
   default: printf_s ("Неверно введен код города");
   }
   return 0;
}

///////////////////////////////////////////////////////////////////////////////



void zad_5()
{
   int chislo;
   int copy;
   for (int i = 1000; i <= 9999; i++)
   {
      chislo = 0;
      copy = i;
      for (int j = 0; j < 4; j++)
      {
         chislo = chislo + pow(copy % 10, 4);
         copy = copy % 10;
      }
      if (chislo == i)
         printf("%d", i);
   }
}

///////////////////////////////////////////////////////////////////////////////



void zad_6(int* bin, int N)
{
   int i, dec, c;
   i = 0;
   dec = 0;
   c = N - 1;
   while (i < N)
   {
      dec = dec + bin[i] * pow(2, c);
      i++;
      c = c - 1;
   }
   printf("%d", dec);
}


///////////////////////////////////////////////////////////////////////////////


void zad_7(int I, int J)    //С этим заданием возникли трудности, просил помощи у однокурсников//
{
   srand(time(NULL));
   int* L = malloc(I * J * sizeof(int));
   for (int i = 0; i < I * J; i++)
   {
      L[i] = rand() % (21) - 10;
   }
   for (int i = 0; i < I; i++)
   {
      for (int j = 0; j < J; j++)
      {
         printf_s("%d", L[i * J + j]);
      }
      printf_s("\n");
   }
}
