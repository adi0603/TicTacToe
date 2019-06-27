#include <stdio.h>
#include <string.h>
#include "playGame.h"


int main(void) {
    char player1[20], player2[20];
    int play,result,score1 = 0, score2 = 0;
    printf("WELCOME TO THE GAME OF TIC TAC TOE\n");
    printf("Enter name of Player 1\n");
    fgets(player1, 20, stdin);
    player1[strcspn(player1, "\r\n")] = 0;               //to clear '\n' from fgets
    printf("Enter name of Player 2\n");
    fgets(player2, 20, stdin);
    player2[strcspn(player2, "\r\n")] = 0;
    printf("Enter 1 if you want to play the game or 0 to exit\n");
    scanf("%d", &play);
    if (play == 1 || play == 0) {
        while (play == 1) {
            result = game(player1, player2,score1,score2);            //function calling to play game
            if (result == 1) {
                printf("%s won the match\n", player1);
                score1++;
            } else if (result == 2) {
                printf("%s won the match\n", player2);
                score2++;
            } else if (result == 3) {
                printf("%s draw a match with %s\n", player1, player2);
                score1++;
                score2++;
            }
            printf("Enter 1 if you want to play the game or 0 to exit\n");
            scanf("%d", &play);
        }
        if (score1 > score2) {
            printf("%s won the match by %d - %d from %s\n", player1, score1, score2, player2);
        } else if (score2 > score1) {
            printf("%s won the match by %d - %d from %s\n", player2, score2, score1, player1);
        } else {
            printf("%s draw the match by %d - %d from %s\n", player1, score1, score2, player2);
        }
    } else {
        printf("Invalid Input\n");
    }
    return 0;
}
