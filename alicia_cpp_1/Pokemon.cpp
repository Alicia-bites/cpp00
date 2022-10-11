#include <iostream>
#include "Pokemon.hpp"

namespace PokemonLibrary {

// Pokemon::Pokemon()
// : _name{"default"}
// , _lvl{1}
// , _baseAtkValue{1}
// , _realBaseAtkValue{1}
// , _health{100}
// , _qqch{new(int)}
// {}

Pokemon::Pokemon(){
    _name = "default";
    _lvl = 1;
    _baseAtkValue = 1;
    _realBaseAtkValue = 1;
    _health = 100;
    _qqch = new(int);
}


// Pokemon::Pokemon(std::string name, int lvl, int baseAtkValue)
// : _name{name}
// , _lvl{(lvl > 100) ? 100 : lvl}
// , _baseAtkValue{baseAtkValue}
// , _realBaseAtkValue{baseAtkValue * (100+lvl)/100}
// , _health{100}
// , _qqch{new(int)}
// {}

Pokemon::Pokemon(std::string name, int lvl, int baseAtkValue)
{
    _name = name;
    _lvl = lvl > 100 ? 100 : lvl;
    _baseAtkValue = baseAtkValue;
    _realBaseAtkValue = baseAtkValue * (100+lvl)/100;
    _health = 100;
    _qqch = new(int);
}

Pokemon::Pokemon(const Pokemon& other) 
{
    _name = other._name;
    _lvl = other._lvl;
    _qqch = new(int);
    *_qqch = *other._qqch;
    _health = other._health;
}

Pokemon::~Pokemon() 
{
    delete(_qqch);
}

int Pokemon::getHealth()
{
    return _health;
}

bool Pokemon::baseAttack(Pokemon& other) {
    other._health -= _realBaseAtkValue;
    return true;
}

void Pokemon::doNothing() {
    return;
}

bool Pokemon::useObject(int objectID) {
    // NOT IMPL
    return true;
}

int Pokemon::defaultHealth() {
    return Pokemon::defaultHealthValue;
}

Pokemon Pokemon::operator+(const Pokemon& other) {
    return Pokemon(_name+" and "+other._name, _lvl + other._lvl, _baseAtkValue + other._baseAtkValue);
}

// this is a terrible idea
void Pokemon::operator+(int a) {
    _lvl += a;
}

std::string Pokemon::getName() {
    return _name;
}

int Pokemon::getLevel() {
    return _lvl;
}

int Pokemon::getBaseAtk() {
    return _baseAtkValue;
}

std::string Pokemon::to_string() {
    return "Pokemon {\nname: " + _name;
}

std::ostream& operator<<(std::ostream& o, Pokemon& p) {
    o << "Pokemon { " << std::endl << "name: " << p.getName() << std::endl
    << "level: " << p.getLevel() << std::endl << "health: " << p.getHealth() << std::endl << "basic attack: "
    << p.getBaseAtk() << std::endl << "}" << std::endl;
    return o;
}

}