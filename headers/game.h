//
// Created by nathan letourneau on 10/10/2022.
//

#ifndef KATAMALLOCWORLD_GAME_H
#define KATAMALLOCWORLD_GAME_H


#define MAPCOLUMN 15
#define MAPLINE 13



Game *initGame();
void freeGame();
void startGame(Game *game);

Map *initMap();
void freeMap();
void printMap(Map *map);

#endif //KATAMALLOCWORLD_GAME_H
