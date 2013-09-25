/* 
 * File:   IceDecorator.cpp
 * Author: Bert
 * 
 * Created on September 24, 2013, 8:03 PM
 */

#include "IceDecorator.h"
#include "ICockTailDecorator.h"

IceDecorator::IceDecorator(IDrink* drunk){
    drink = drunk;
    cost = 0.50;
    name = " met ijs";
}


double IceDecorator::getCost(){
    return drink->getCost() + cost;
}

string IceDecorator::getName(){
    return drink->getName() + name;
}


