/*****************************************************************
//    NAME:        Tracy Bui
//
//    HOMEWORK:    Homework 9
//
//    CLASS:	   ICS 212
//
//    INSTRUCTOR:  Ravi Narayan
//
//    DATE:        December 10, 2020
//  
//    FILE:        Lucario.cpp
//
//    DESCRIPTION:
//     This file contains the child class Lucario, Lucario.cpp 
//     functions for Homework 9. This will execute all the
//     necessary methods that are called.
//
//
****************************************************************/

#include <iostream>
#include "Pokemon.h"
#include "Lucario.h"
using namespace std;

/*****************************************************************
//
//  Function name: Lucario
//
//  DESCRIPTION:   A constructor function
//                 This function will be called in the beginning
//                 before the actual program starts and execute
//                 certain actions needed.
//
//  Parameters:    N/A
//
//  Return values: N/A
//
****************************************************************/

Lucario::Lucario()
{
    cout << "Lucario Constructor\n";
    this->type = "Fighting and Steel";
    this->height = 119;
}

/*****************************************************************
//
//  Function name: ~Lucario
//
//  DESCRIPTION:   A destructor function
//                 This function will be called after the program
//                 is done and execute certain actions needed.
//
//  Parameters:    N/A
//
//  Return values: N/A
//
****************************************************************/

Lucario::~Lucario()
{
    cout << "Lucario Destructor\n";
}

/*****************************************************************
//
//  Function name: printData
//
//  DESCRIPTION:   A printing function
//                 This function will be print the Lucario
//                 pokemon data when called.
//
//  Parameters:    N/A
//
//  Return values: N/A
//
****************************************************************/

void Lucario::printData()
{
    cout << "\nName of child class: Lucario\n";
    cout << "Type: " << this->type << "\n";
    cout << "Height: " << this->height << " cm\n";
}
