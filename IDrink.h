/* 
 * File:   IDrink.h
 * Author: Bert
 *
 * Created on September 24, 2013, 8:25 PM
 */

#ifndef IDRINK_H
#define	IDRINK_H
#include <string>

using namespace std;

class IDrink {
public:
    double cost;
    string name;
    virtual string getName () = 0;
    virtual double getCost() = 0;
private:

};

#endif	/* IDRINK_H */

