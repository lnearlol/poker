#include "poker_lib.h"

void print_card(int i)
{
    char spades[] = "♠";
    char hearts[] = "♥";
    char diams[] = "♦";
    char clubs[] = "♣";
    if(deck[i] != 'T')
        printf("%c", deck[i]);
    else 
        printf("10");
    switch(deck[i+1]){
        case 's':
            printf("%s", spades);
            break;
        case 'h':
            printf("%s", hearts);
            break;
        case 'd':
            printf("%s", diams);
            break;
        case 'c':
            printf("%s", clubs);
            break;
    }
}

void print_table(){
    printf("TABLE: ");
    for (int i = 0; i < TABLE; i++){
        print_card(table[i]);
        printf(" ");
        //printf("table[%d] = %d     ",i, table[i]);
    }
    printf("\n");
}

void print_player1(){
    printf("PLAYER1: ");
    for (int i = 0; i < PLAYER; i++){
        print_card(p1[i]);
        printf(" ");
    }
    printf("\n");
}

void print_player2(){
    printf("PLAYER2: ");
    for (int i = 0; i < PLAYER; i++){
        print_card(p2[i]);
        printf(" ");
    }
    
}

