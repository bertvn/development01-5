/* 
 * File:   CockTail.h
 * Author: Bert
 *
 * Created on September 24, 2013, 2:58 PM
 */

#ifndef COCKTAIL_H
#define	COCKTAIL_H
#include "ICockTail.h"
#include "IDrink.h"
#include <string>

using namespace std;

class CockTail : public ICockTail{
public:
    CockTail(string soda,string glass,string alcohol,string name, double cost);
    string soda;
    string glass;
    string alcohol;
    string getName();
    double getCost();
    
private:

};

#endif	/* COCKTAIL_H */

