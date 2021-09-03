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
//    FILE:        main.cpp
//
//    DESCRIPTION:
//     This file contains the main function and
//     checkPokedex function for Homework 9. This
//     will execute all the requirements such as
//     creating instances of the child classes in
//     heap memory and creating two data containers.
//
//
//  ****************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Pokemon.h"
#include "Lugia.h"
#include "Lapras.h"
#include "Lucario.h"
using namespace std;

void checkPokedex(Pokemon *);

/*****************************************************************
//
//  Function name: main
//
//  DESCRIPTION:   A program start-up function
//                 This function is the entry point into the 
//                 application for program execution.
//
//  Parameters:    argc (int) : contains the number of arguments
//                              passed to the program.
//
//                 *argv [char] : a pointer to a string array 
//                                holding the actual parameters. 
//
//  Return values:  0 : success
//                 -1 : the value was not found
//
****************************************************************/

int main(int argc, char *argv[])
{
    vector<Pokemon*> poke_vec;
    map<string, Pokemon*> poke_map;

    /* creates instance of all child classes in heap memory */
    Pokemon *P1 = new Lugia;
    Pokemon *P2 = new Lapras;
    Pokemon *P3 = new Lucario;

    /* stores addresses of objects into vector poke_vec */
    poke_vec.push_back(P1);
    poke_vec.push_back(P2);
    poke_vec.push_back(P3);

    /* stores addresses of objects into map poke_map */
    poke_map["lugia"] = P1;
    poke_map["lapras"] = P2;
    poke_map["lucario"] = P3;

    /* calls checkPokedex function by each element of the containers */
    cout << "\nVector Data Container: \n";
    cout << "-----------------------------\n";
    checkPokedex(poke_vec[0]);
    checkPokedex(poke_vec[1]);
    checkPokedex(poke_vec[2]);
    cout << "-----------------------------\n";

    cout << "\nMap Data Container: \n";
    cout << "-----------------------------\n";
    checkPokedex(poke_map["lugia"]);
    checkPokedex(poke_map["lapras"]);
    checkPokedex(poke_map["lucario"]);
    cout << "-----------------------------\n\n";

    /* cleans up the heap memory */
    delete P1;
    delete P2;
    delete P3;

    return 0;
}

/*****************************************************************
//
//  Function name: checkPokedex
//
//  DESCRIPTION:   A function-calling function
//                 This function will call the polymorphic
//                 function, printData() of the given 
//                 pokemon in the parameter.
//
//  Parameters:    *pokemon (Pokemon) : contains the pointer to
//                                      Pokemon which holds the
//                                      address of the child
//                                      class.
//
//  Return values: N/A
//
****************************************************************/

void checkPokedex(Pokemon *pokemon)
{
    pokemon->printData();
}
