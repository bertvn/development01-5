/* 
 * File:   main.cpp
 * Author: Bert
 *
 * Created on September 24, 2013, 2:57 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

#include "CockTail.h"
#include "IceDecorator.h"
#include "IDrink.h"

using namespace std;

void pause();

/*
 * 
 */
int main(int argc, char** argv) {

    IDrink* ct = new CockTail("cola", "limonade", "rum", "baco", 2.50);
    IDrink* drink = new IceDecorator(ct);
    cout << ct->getName() << " " << ct->getCost();
    cout << endl;
    cout << drink->getName() << " " << drink->getCost();
    cout << endl;
    
    //keeps the window open when runned outside of netbeans
    pause();
    
    return 0;
}

void pause() {
    cout << "Press [Enter] to continue... ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
