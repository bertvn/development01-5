/* 
 * File:   AbstractFactory.cpp
 * Author: Bert
 * 
 * Created on September 25, 2013, 2:24 PM
 */

#include "AbstractFactory.h"

Ingredient* AbstractFactory::createDrink(int cocktailID) {
    Ingredient* pointer;
    ingredient* info[5];
    pointer = info;
    info[0] = createAlcohol();
    info[1] = createSoda();
    info[2] = createGlass();
    return pointer;
}

