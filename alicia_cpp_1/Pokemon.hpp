#ifndef POKEMON_HPP
# define POKEMON_HPP

#include <string>

namespace PokemonLibrary {

class Pokemon {

public:
    Pokemon();
    Pokemon(std::string name, int lvl, int baseAtkValue);
    Pokemon(const Pokemon& p);
    ~Pokemon();

    static int defaultHealth();

    bool baseAttack(Pokemon& other);
    void doNothing();
    bool useObject(int objectID);
    int getHealth();
    std::string getName();
    int getLevel();
    int getBaseAtk();
    std::string to_string();

    std::ostream& operator<<(std::ostream& o);

    Pokemon operator+(const Pokemon& other);
    void operator+(int);

    
private:
    std::string _name;
    int _lvl;
    int _baseAtkValue;
    int _realBaseAtkValue;
    int _health;
    int *_qqch;

    static const int defaultHealthValue = 100;
};

std::ostream& operator<<(std::ostream& o, Pokemon& p);

}
#endif