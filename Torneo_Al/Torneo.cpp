/* File:   Torneo.cpp
 * Author: Alemol
 * Created on 26 de diciembre de 2019, 9:47
 */

#include <cmath>

#include "Torneo.h"

Torneo::Torneo(int numPersonas, std::string nombre):
    numParticipantes(numPersonas), nombreTorneo(nombre){
    organizaFases();
    
}

Torneo::Torneo(const Torneo& orig) {
}

Torneo::~Torneo() {
}

void Torneo::organizaFases() {
    int ele=1,base=2,resPotencia=2;
    bool potencia=true;
    do{
        if(numParticipantes<resPotencia){
            this->tamTorneo=resPotencia;
            numFases=ele;
            potencia=false;
            
        }else{
        resPotencia=resPotencia*base;
        ++ele;
        }     
    }while(!potencia);
    
}

