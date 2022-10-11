#include <iostream>

#include "Pokemon.hpp"

namespace PL = PokemonLibrary;

int main() {

    bool a  = true;
    PL::Pokemon ratata("ratata", 3, 10);
    PL::Pokemon pikachu("pikachu", 5, 12);
    PL::Pokemon::defaultHealth();

    if (a) {
        PL::Pokemon pikachu2(pikachu);
    }

    // stdio streams (operator <<)

    PL::Pokemon combo = pikachu + ratata;

    ratata.baseAttack(pikachu);
    ratata.baseAttack(pikachu);
    pikachu.doNothing();
    std::cout << pikachu.to_string() << std::endl;
    pikachu + 1;
    std::cout << pikachu << std::endl;

}