/* 
 * File:   Factory.h
 * Author: Bert
 *
 * Created on September 25, 2013, 9:11 AM
 */

#ifndef FACTORY_H
#define	FACTORY_H
#include "IFactory.h"
#include "IDrink.h"

class Factory : public IFactory {
public:
    Factory();
    int create(int cocktailID);
private:

};

#endif	/* FACTORY_H */

