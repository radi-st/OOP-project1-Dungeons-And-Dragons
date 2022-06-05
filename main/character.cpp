#include "character.h"

Character::Character(unsigned strength, unsigned mana, unsigned health, unsigned armour):
	m_strength{ strength }, m_mana{ mana }, m_health{ health }, m_armour{ armour }{}

unsigned Character::calculate_dmg(unsigned attack_type) {

}
virtual void take_dmg(unsigned dmg);