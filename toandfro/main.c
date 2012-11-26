#include <stdio.h>
#include <string.h>


void swap(char* first, char* second)
{
   char tmp = *first;
   *first = *second;
   *second = tmp;
}

int main(int argc, char** argv)
{
   int column;
   char cryptedText[200];
   char decryptedText[200];
   int i, l, k;
   int reverse = 0;
   int columns, j;

   while(scanf("%i", &column) && column != 0)
   {
      memset(decryptedText, 0, 200);
      scanf("%s", cryptedText);
      columns = strlen(cryptedText) / column;
      for(j = 0; j < columns; j++)
      {
         reverse = j * column;
         if((j % 2) != 0 && j > 0)
         { 
            i = 0;
            for(k = (reverse+column - 1); k > (reverse + (column/2) - 1); k--)
            {
               swap(&cryptedText[k], &cryptedText[reverse + i++]);
            }
         }
      }
      i = 0;
      l = 1;
      for(k = 0; k < column; k++)
      {
         for(j = 0; j < columns; j++)
         {
            reverse = j * column;
            decryptedText[i] = cryptedText[(reverse - 1)+l];
            i++;
         }
         l++;
      }

      printf("%s\n", decryptedText);
   }

   return 0;
}
