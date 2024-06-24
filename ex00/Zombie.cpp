#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(){
    std::cout << "The zombie " << name << "has been destroyed" << std::endl;
}
