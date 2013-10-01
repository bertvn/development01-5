/* 
 * File:   IAlcohol.h
 * Author: Bert
 *
 * Created on September 25, 2013, 7:41 PM
 */

#ifndef IALCOHOL_H
#define	IALCOHOL_H

#include "CockTailPart.h"


class IAlcohol : public CockTailPart{
public:
    IAlcohol();
    IAlcohol(const IAlcohol& orig);
    virtual ~IAlcohol();
private:

};

#endif	/* IALCOHOL_H */

