/* 
 * File:   IFactory.h
 * Author: Bert
 *
 * Created on September 25, 2013, 9:10 AM
 */

#ifndef IFACTORY_H
#define	IFACTORY_H
#include "IDrink.h"

class IFactory {
public:
    virtual int create(int cocktailID) = 0;
private:

};

#endif	/* IFACTORY_H */

