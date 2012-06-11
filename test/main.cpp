#include <stdio.h>

int main(int argc, char** argv)
{
   int value;
   
   while(scanf("%2d", &value) && value != 42)
   {
      printf("%d\n", value);
   }
   
   return 0;
}
