#ifndef POKEMON_H
#define POKMONE_H

#include "attackMove.h"
#include <string>

class Pokemon {
  public:
    Pokemon(std::string, int);
    void setMoves(AttackMove*, AttackMove*, AttackMove*, AttackMove*);
    int getHP();
    int attackPowerOf(int);
    int attackedBy(int);
    std::string getMove(int);
  
  private:
    std::string name;
    int offense;
    int defense;
    int maxhp;
    int hp;

    vector<AttackMove*> moves;
};

#endif