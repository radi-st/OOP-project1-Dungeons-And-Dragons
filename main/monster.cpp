#include "monster.h"

Monster::Monster(unsigned lvl) : Character(25 + (lvl-1) * 10, 25 + (lvl - 1) * 10, 50 + (lvl - 1) * 10, 15 + (lvl - 1) * 5) {}