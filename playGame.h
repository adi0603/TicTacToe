//
// Created by Aditya on 6/27/19.
//

#include <stdio.h>
#include "checkWinner.h"
#include "display.h"


int game(char player1[], char player2[],int score1,int score2) {
    int c, count = 1, result, flag = 0;
    char ch[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; //Storing the steps played
    while (count <= 9) {
        board(score1,score2,ch);
        if (count % 2 == 1) {
            printf("%s make your step by entering the block number\n", player1);
            scanf("%d", &c);
            if ((ch[c - 1] == ' ') && (c > 0 && c < 10)) {
                ch[c - 1] = 'X';
                count++;
            } else {
                printf("Wrong Input\n");
            }
        } else if (count % 2 == 0) {
            printf("%s make your step by entering the block number\n", player2);
            scanf("%d", &c);
            if ((ch[c - 1] == ' ') && (c > 0 && c < 10)) {
                ch[c - 1] = 'Y';
                count++;
            } else {
                printf("Wrong Input\n");
            }
        }
        result = check(ch);
        if (result == 1) {
            flag = 1;
            break;
        } else if (result == 2) {
            flag = 2;
            break;
        } else if (result == 3) {
            flag = 3;
            break;
        }
    }
    return flag;
}