/*****************************************************************
//
//  NAME:        Tracy Bui
//
//  HOMEWORK:    Homework 9
//
//  CLASS:	 ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        December 10, 2020
//
//  FILE:        Lucario.h
//
//  DESCRIPTION:
//  This file contains the Lucario child class definitions    
//  for Homework 9.
//
//
****************************************************************/

#ifndef LUCARIO_H
#define LUCARIO_H

class Lucario : public Pokemon
{
public:
    Lucario();
    virtual ~Lucario();
    void printData();
};

#endif
