/* 
 * File:   AbstractFactory.h
 * Author: Bert
 *
 * Created on September 25, 2013, 2:24 PM
 */

#ifndef ABSTRACTFACTORY_H
#define	ABSTRACTFACTORY_H
#include "IAbstractFactory.h"
#include "Ingredient.h"

class AbstractFactory : public IAbstractFactory {
public:
    Ingredient* createDrink(int cocktailID);
private:

};

#endif	/* ABSTRACTFACTORY_H */

