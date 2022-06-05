#pragma once
#define STRENGTH_ATTACK 1
#define SPELL_ATTACK 2 

class Character {
public:
	Character(unsigned strength, unsigned mana, unsigned health, unsigned armour);
	virtual unsigned calculate_dmg(unsigned attack_type) = 0;
	virtual void take_dmg(unsigned dmg);
protected:
	unsigned m_strength;
	unsigned m_mana;
	unsigned m_health;
	Weapon m_weapon;
	Armour m_armour;
	Spell m_spell;
};