#include "poker_lib.h"

// allocating combinations
void allocate_combo(){
    p1_combo = malloc((30+10+2) * sizeof(unsigned char) + sizeof(int)); // 30 for COMBO NAME; 10 for MAX CARD; 2 for \0; int for numerical value
    p2_combo = malloc((30+10+2) * sizeof(unsigned char) + sizeof(int));
    max_combo = malloc((30+10+2) * sizeof(unsigned char) + sizeof(int));
}

double average(int num,...) {

   va_list valist;
   double sum = 0.0;
   int i;

   /* initialize valist for num number of arguments */
   va_start(valist, num);

   /* access all the arguments assigned to valist */
   for (i = 0; i < num; i++) {
      sum += va_arg(valist, int);
   }
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum/num;
}