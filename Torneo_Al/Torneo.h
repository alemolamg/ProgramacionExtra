/* File:   Torneo.h
 * Author: Alemol
 * Created on 26 de diciembre de 2019, 9:47
 */

#ifndef TORNEO_H
#define TORNEO_H

#include <string>
#include <vector>
#include "Player.h"

class Torneo {

    std::string nombreTorneo;
    std::vector<Player> jugadores;
    int numParticipantes;
    int numFases;
    int tamTorneoIni;
    int tamTorneo;      //creo que sobra
    
public:
    Torneo(int numPersonas=0,std::string nombre="Torneo Estandar");
    Torneo(const Torneo& orig);
    virtual ~Torneo();
private:
    void organizaFases();

};

#endif /* TORNEO_H */

