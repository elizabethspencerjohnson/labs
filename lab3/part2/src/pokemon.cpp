#include "pokemon.h"

Pokemon::Pokemon(std::string n, int h) {
  name = n;
  maxhp = h;
  hp = h;

  offense = rand() % 4 + 6;
  defense = rand() % 5 + 1;
}

void Pokemon::setMoves(AttackMove* a, AttackMove* b, AttackMove* c, 
    AttackMove* d) {
  moves.clear();
  moves.push_back(a);
  moves.push_back(b);
  moves.push_back(c);
  moves.push_back(d);
}

int attackPowerOf(int i) {
  return moves[i]->getPotency() * offense / 10;
}

int attackedBy(int power) {
  int damaged = power * (10 - defense) / 10;
  hp -= damaged;
  return damaged;
}

int getHP() {
  return (hp > 0) ? hp : 0;
}

std::string getName() {
  return name;
}

std::string getMove(int) {
  return moves[i]->getName();
}