/* File:   Torneo.cpp
 * Author: Alemol
 * Created on 26 de diciembre de 2019, 9:47
 */

#include <cmath>

#include "Torneo.h"

Torneo::Torneo() {
}

Torneo::Torneo(const Torneo& orig) {
}

Torneo::~Torneo() {
}

void Torneo::organizaFases(int num) {
    int ele=1,base=2,resPotencia=2;
    bool potencia=true;
    do{
        if(num<resPotencia){
            this->tamTorneo=resPotencia;
            numFases=ele;
            potencia=false;
            
        }else{
        resPotencia=resPotencia*base;
        ++ele;
        }
           
    }while(!potencia);
}

