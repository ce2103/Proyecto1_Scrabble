/**
 * @file player.h
 * @version 1.0
 * @date 24/03/2019
 * @autor angelortizv
 * @title Jugador
 * @brief Incluye características principales de jugador como: nombre, turno, puntaje, total de Fichas, entre otros...
 */

#ifndef PROYECTO1_SCRABBLE_PLAYER_H
#define PROYECTO1_SCRABBLE_PLAYER_H

#include <string>
#include <iostream>

using namespace std;

class player {

private:
    bool turn;
    int score;
    int amChips;
    string name;

public:
    player();

    string getName();
    void setName(string name);
    bool getTurn();
    void setTurn(bool turn);
    int getScore();
    void setScore(int score);
    int getAmChips();
    void setAmChips(int amChips);



};


#endif //PROYECTO1_SCRABBLE_PLAYER_H