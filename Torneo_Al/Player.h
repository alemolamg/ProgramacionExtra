/* File:   Player.h
 * Author: Alemol
 * Created on 26 de diciembre de 2019, 9:23
 */

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    std::string nombre="Vacio";
    
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
private:

};

#endif /* PLAYER_H */

