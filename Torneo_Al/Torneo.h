/* File:   Torneo.h
 * Author: Alemol
 * Created on 26 de diciembre de 2019, 9:47
 */

#ifndef TORNEO_H
#define TORNEO_H

#include <string>

class Torneo {

    std::string nombreTorneo="Torneo Estandar";
    int numParticipantes;
    int numFases;
    
public:
    Torneo();
    Torneo(const Torneo& orig);
    virtual ~Torneo();
private:

};

#endif /* TORNEO_H */

