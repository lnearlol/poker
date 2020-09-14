#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//#include "combinations.h"
#include <stdarg.h>

double average(int num,...);


#define DECK 104
#define TABLE 5
#define PLAYER 2
//char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
//char suits[] = {'s', 'h', 'd', 'c'};
char *ranks, *suits;

char *deck, *p1, *p2, *table, *deck_copy;
void create_deck();
void new_deck();
void print_card(int i);
void print_table();
void print_player1();
void print_player2();
void flop();

typedef struct{
    unsigned char combination[30];
    unsigned char value[10];
    int points;
} combination_value;

combination_value *p1_combo, *p2_combo, *max_combo;
void allocate_combo();



