// Exercise-10
// create a rock, paper , Scissors game
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int randomnumber_generator(int n ){

    srand(time(NULL));
    printf(" the Random number is: %d \n " , rand()%n );
    return rand()%n;
    
}
char player_name[20];
int computer_choice;
int player_choice;
int main()
{
    printf("Enter Player-name \n");
    gets(player_name);
    scanf("now enter your choice in number : \t %d", &player_choice);
    // rock-1 paper-2 scissors-3
    int a = randomnumber_generator(1000);
    if(a < 300){
        computer_choice = 1;
    }
    else if(a > 300 & a < 600){
        computer_choice = 2;

    }
    else if(a> 600){
        computer_choice = 3;
    }

    // now
    if(player_choice == computer_choice){
        printf("Game-Dues\n ");
    }
    else{

    if(player_choice == 1 &  computer_choice== 2){
        printf("Computer wins player wins");
    }
    // else{
    //     printf(" %s wins \n " , player_name );
    // }
    if(player_choice == 2 &  computer_choice== 3){
        printf("Computer wins player wins");
    }
    // else{
    //     printf(" %s wins \n " , player_name );
    // }
    if(player_choice == 3 &  computer_choice== 1){
        printf("Computer wins player wins");
    }
    // else{
    //     printf(" %s wins \n " , player_name );
    // }
    }

    
  
    
    
    

    return 0;
} 