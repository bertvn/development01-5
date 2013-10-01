/* 
 * File:   IAbstractFactory.h
 * Author: Bert
 *
 * Created on September 25, 2013, 9:18 AM
 */

#ifndef IABSTRACTFACTORY_H
#define	IABSTRACTFACTORY_H
#include <string>
#include "IAlcohol.h"
#include "ISoda.h"
#include "IGlass.h"

using namespace std;

class IAbstractFactory {
public:
    string name;
    double cost;
    virtual IAlcohol createAlcohol()=0;
    virtual ISoda createSoda()=0;
    virtual IGlass createGlass()=0;
private:

};

#endif	/* IABSTRACTFACTORY_H */

