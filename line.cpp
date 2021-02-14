//*****************************************
// line.cpp (Project 3)
//
// Written by Steven Smail for COP4530
//
//*****************************************

#include <iostream>
#include "line.h"

double Line::intersect(const Line L) const 
{
  if(a == L.a && b == L.b)
    throw EqualLines("");
  else if(a == L.a)
    throw ParallelLines("");
  else
    return (L.b - b)/(a - L.a);
}

double Line::get_y(double z) const
{
  return (a * z) + b;
}
