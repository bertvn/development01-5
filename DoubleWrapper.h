/* 
 * File:   DoubleWrapper.h
 * Author: Bert
 *
 * Created on October 1, 2013, 9:32 AM
 */

#ifndef DOUBLEWRAPPER_H
#define	DOUBLEWRAPPER_H

#include "CockTailPart.h"


class DoubleWrapper : public CockTailPart {
public:
    DoubleWrapper(double newCost);
    double cost;
    double getCost();
    void setCost(double newCost);
private:

};

#endif	/* DOUBLEWRAPPER_H */

