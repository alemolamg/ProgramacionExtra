/* File:   Player.h
 * Author: Alemol
 * Created on 26 de diciembre de 2019, 9:23
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>


class Player {
    std::string nombre="Vacio";
    
public:
    Player(std::string nombrePlayer="Nadie"): nombre(nombrePlayer){};
    Player(const Player& orig):nombre(orig.nombre){};
    virtual ~Player();
    bool operator==(const Player& otro){
        if(this!=&otro){
            if (this->nombre==otro.nombre)
                return true;
            else
                return false;
        }else{
            std::cout<<"Es el mismo Jugador";
            return true;
        }     
    };

};

#endif /* PLAYER_H */

