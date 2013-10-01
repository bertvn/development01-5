/* 
 * File:   StringWrapper.cpp
 * Author: Bert
 * 
 * Created on October 1, 2013, 9:19 AM
 */

#include "StringWrapper.h"

StringWrapper::StringWrapper(string newName) {
    name = newName;
}

string StringWrapper::getString() {
    return name;
}

string StringWrapper::setString(string newName){
    name = newName;
}


