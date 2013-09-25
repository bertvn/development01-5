/* 
 * File:   IceDecorator.h
 * Author: Bert;
 *
 * Created on September 24, 2013, 8:03 PM
 */

#ifndef ICEDECORATOR_H
#define	ICEDECORATOR_H
#include "ICockTailDecorator.h"
#include "IDrink.h"
#include <string>

class IceDecorator : public ICockTailDecorator{
public:
    IceDecorator(IDrink* drunk);
    string getName();
    double getCost();
private:

};

#endif	/* ICEDECORATOR_H */

