#include "poker_lib.h"

// all allocations
void create_deck(){

    ranks = malloc((13+1) * sizeof(char));
    strcpy(ranks, "23456789TJQKA\0");
    suits = malloc((4+1) * sizeof(char));
    strcpy(suits, "shdc\0");


    deck = malloc(DECK * sizeof(char));
    deck_copy = malloc(DECK * sizeof(char));  // if card in [deck] will be chosen, make same element in [deck_copy] as 'x'
    p1 = malloc(PLAYER * sizeof(int)); // cards for player1
    p2 = malloc(PLAYER * sizeof(int)); // cards for player1
    table = malloc(TABLE * sizeof(int)); // cards on table
}

//creating FULL deck
void new_deck(){
    int r = 0, s = 0;
    for (int i = 0; i < DECK; i+=2){
        deck[i] = ranks[r];  // to allocated area will be chosen rank [2-A]
        deck[i+1] = suits[s]; // will be chosen suit [spades, hearts, diams, clubs]
        r++;
        if(deck[i] == 'A'){
            r = 0;
            s++;
        }
    }
    for(int i = 0; i < DECK; i+=2)
        deck_copy[i] = deck[i];
}


// random will chose 9 cards from deck, 2 for p1, 2 for p2, 5 on table
void flop(){

    int flop = 52, table_index = 0, p1_index = 0, p2_index = 0, random; // creating indexation
    for(int i = 0; i < 9; i++){ // 2 cards for p1; 2 cards for p2; 5 cards for table;
        do{
            random = rand() % flop;      // Returns a pseudo-random integer between 0 and RAND_MAX. [rand]
        } while(deck_copy[random*2] == 'x');

        if(i < 2){ // for p1
            p1[p1_index] = random*2;
            p1_index++;
        } else if(i >= 2 && i < 4){ // for p2
            p2[p2_index] = random*2;
            p2_index++;
        } else { // for table
            table[table_index] = random*2;
            table_index++;
        }
        deck_copy[random*2] = 'x';
    }    
}

int main(){
    srand(time(NULL));   // Initialization, should only be called once. [rand]
    

    create_deck();
    new_deck();

    for(int i = 0; i < 10; i++)
        printf("%d ", rand() % 52);

    for (int i = 0; i < DECK; i+=2){
        print_card(i);
        printf(" ");
    }
    printf("\n");
    flop();
    print_table();
    
    print_player1();
    
    print_player2();

    printf("%d", score_combination(3, 7, 8, 9));




    return 0;
}