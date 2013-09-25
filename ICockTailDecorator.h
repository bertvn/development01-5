/* 
 * File:   ICockTailDecorator.h
 * Author: Bert
 *
 * Created on September 24, 2013, 6:38 PM
 */

#ifndef ICOCKTAILDECORATOR_H
#define	ICOCKTAILDECORATOR_H
#include "IDrink.h"
#include <string>

using namespace std;

class ICockTailDecorator : public IDrink{
public:
    IDrink* drink;
    virtual string getName () = 0;
    virtual double getCost() = 0;
private:

};

#endif	/* ICOCKTAILDECORATOR_H */

