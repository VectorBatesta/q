/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: a2104679
 *
 * Created on 5 de Abril de 2019, 13:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    for (int x=1; ; x++){
        if (x%1000000 == 0){
            if (x >= 0)
                printf(" ALL YOUR BASE ");
            else
                printf("ARE BELONG TO US ");
        }
    }
    return (EXIT_SUCCESS);
}

