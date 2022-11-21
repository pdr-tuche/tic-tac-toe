/**
 * @file main.c
 * @author Pedro Neves (github.com/pdr-tuche)
 * @brief 
 * @version 0.1
 * @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){

    switch (menu())
    {
    case 1:
        system("cls");
        int single= setSinglePlayer();
        if(single == 1){
            initTicTacToeSinglePlayer();
        }else if(single == 2){
            initTicTacToe();
        }
        break;
    case 2:
        system("cls");
        verVencedores();
        break;
    case 3:
        system("cls");
        credits();
        break;
    default:
        printf("See ya! ^^");
        break;
    }

    return 0;
}