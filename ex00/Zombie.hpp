#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class   Zombie{
    
    public:
       
        Zombie();
        ~Zombie();
       
        void            randomChump(std::string name);
        Zombie          *newZombie(std::string name);
    
    private:
        std::string     name;
        void            announce(void);
}

#endif
