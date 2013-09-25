/* 
 * File:   CockTail.cpp
 * Author: Bert
 * 
 * Created on September 24, 2013, 2:58 PM
 */

#include "CockTail.h"
#include <string>


CockTail::CockTail(string soda, string glass, string alcohol, string name, double cost){
    this->soda = soda;
    this->glass = glass;
    this->alcohol = alcohol;
    this->name = name;
    this->cost = cost;
}



string CockTail::getName(){
        return name;
    }
double CockTail::getCost(){
        return cost;
    }

