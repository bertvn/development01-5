/* 
 * File:   IGlass.h
 * Author: Bert
 *
 * Created on September 25, 2013, 7:42 PM
 */

#ifndef IGLASS_H
#define	IGLASS_H

#include "CockTailPart.h"


class IGlass : public CockTailPart{
public:
    IGlass();
    IGlass(const IGlass& orig);
    virtual ~IGlass();
private:

};

#endif	/* IGLASS_H */

