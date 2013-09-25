/* 
 * File:   ICockTail.h
 * Author: Bert
 *
 * Created on September 24, 2013, 2:58 PM
 */

#ifndef ICOCKTAIL_H
#define	ICOCKTAIL_H
#include <string>
#include "IDrink.h"

using namespace std;

class ICockTail : public IDrink{
public:
    string soda;
    string glass;
    string alcohol;
    virtual string getName () = 0;
    virtual double getCost() = 0;
private:

};

#endif	/* ICOCKTAIL_H */

