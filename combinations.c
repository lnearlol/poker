#include "poker_lib.h"

enum COMBINATION {HIGH_HAND, ONE_PAIR, TWO_PAIRS, THREE_OF_A_KIND, STRAIGHT, FLUSH, FULL_HOUSE, FOUR_OF_KIND, STRAIGHT_FLUSH, ROYAL_FLUSH};
enum CARD_VALUE {TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE}; 

// allocating combinations
void allocate_combo(){
    p1_combo = malloc((30+10+2) * sizeof(unsigned char) + sizeof(int)); // 30 for COMBO NAME; 10 for MAX CARD; 2 for \0; int for numerical value
    p2_combo = malloc((30+10+2) * sizeof(unsigned char) + sizeof(int));
    max_combo = malloc((30+10+2) * sizeof(unsigned char) + sizeof(int));
}

int score_combination(int num,...) {

   va_list valist;
   int sum = 0;

   /* initialize valist for num number of arguments */
   va_start(valist, num);

   /* access all the arguments assigned to valist */
   int i = 0;
   while(i < num){
       
       sum += va_arg(valist, int);
       printf("%d ", sum);
       i++;
   }
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum;
}

// int score_card_value(int num,...) {

//    va_list valist;
//    int sum = 0;

//    /* initialize valist for num number of arguments */
//    va_start(valist, num);

//    /* access all the arguments assigned to valist */
//    for (int i = 0; i < num; i++) {
//       sum += va_arg(valist, int);
//    }
	
//    /* clean memory reserved for valist */
//    va_end(valist);

//    return sum;
// }
