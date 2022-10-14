//
// Created by nathan letourneau on 10/10/2022.
//

#ifndef KATAMALLOCWORLD_ALL_H
#define KATAMALLOCWORLD_ALL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Player{
    //name : chaîne de caractères au format pointeur
    //hp : entier court
    //coordinates : tableau d'entiers… mais combien ?
} Player;

typedef struct Map{
    //map : tableau à deux dimensions
    //nbLines : entier
    //nbColumn : entier
} Map;

typedef struct Game{
    //player : structure… mais sous quelle forme ?
    //map : structure… mais sous quelle forme ?
} Game;

#include "game.h"
#include "player.h"
#include "actions.h"


#endif //KATAMALLOCWORLD_ALL_H
