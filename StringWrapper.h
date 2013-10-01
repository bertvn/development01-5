/* 
 * File:   StringWrapper.h
 * Author: Bert
 *
 * Created on October 1, 2013, 9:19 AM
 */

#ifndef STRINGWRAPPER_H
#define	STRINGWRAPPER_H
#include <string>
#include "CockTailPart.h"

using namespace std;


class StringWrapper : public CockTailPart{
public:
    StringWrapper(string newName);
    string name;
    string getString();
    void setString(string newName);
private:

};

#endif	/* STRINGWRAPPER_H */

