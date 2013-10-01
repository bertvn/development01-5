/* 
 * File:   DoubleWrapper.cpp
 * Author: Bert
 * 
 * Created on October 1, 2013, 9:32 AM
 */

#include "DoubleWrapper.h"

DoubleWrapper::DoubleWrapper(double newCost) {
    cost = newCost;
}

double DoubleWrapper::getCost(){
    return cost;
}

void DoubleWrapper::setCost(double newCost){
    cost = newCost;
}
