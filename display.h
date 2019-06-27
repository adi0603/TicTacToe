//
// Created by Aditya on 6/27/19.
//
#include <stdio.h>

void board(int score1,int score2,char ch[]) {
    printf("\033[1;32m");
    printf("_________________________________________________________\n");
    printf("|                    TIC TAC TOE                        |\n");
    printf("|                                                       |\n");
    printf("|  Player 1 - %d                          Player 2 - %d   |\n", score1, score2);
    printf("|                                                       |\n");
    printf("|                   |                 |                 |\n");
    printf("|            %c      |        %c        |     %c           |\n", ch[0], ch[1], ch[2]);
    printf("|                   |                 |                 |\n");
    printf("|                1  |              2  |         3       |\n");
    printf("|     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n");
    printf("|                   |                 |                 |\n");
    printf("|            %c      |        %c        |     %c           |\n", ch[3], ch[4], ch[5]);
    printf("|                   |                 |                 |\n");
    printf("|                4  |              5  |         6       |\n");
    printf("|      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n");
    printf("|                   |                 |                 |\n");
    printf("|            %c      |        %c        |     %c           |\n", ch[6], ch[7], ch[8]);
    printf("|                   |                 |                 |\n");
    printf("|                7  |              8  |         9       |\n");
    printf("|                                                       |\n");
    printf("|                                      By Aditya Pandey |\n");
    printf("|_______________________________________________________|\n");
    printf("\033[0m");

}
