//*****************************************
// LineDriver.cpp (Project 3)
//
// Written by Steven Smail for COP4530
//
//*****************************************

#include <iostream>
#include "line.h"
using namespace std;

int main()
{
  cout << "\nThis is the LineDriver program.\n"
       << "All lines are in the form of 'y = ax + b'\n";

  // Define the Line objects
  Line L(2, 4);
  Line K(3, 3);
  Line M(2, 3);
  Line N(2, 4);

  // First Comparison
  cout << "\nThe first line is 'y = "
       << L.getSlope() << "x + "
       << L.getIntercept() << endl;

  cout << "The second line is 'y = "
       << K.getSlope() << "x + "
       << K.getIntercept() << endl;

  try
  {
    cout << L.intersect(K) << ", "
         << L.get_y(L.intersect(K))
         << " is the intersect" << endl;
  }

  catch (EqualLines &a)
  {
    cout << a.getMessage() << endl;
  }

  catch (ParallelLines &b)
  {
    cout << b.getMessage() << endl;
  }

  // Second Comparison
  cout << "\nThe first line is 'y = "
       << L.getSlope() << "x + "
       << L.getIntercept() << endl;

  cout << "The second line is 'y = "
       << M.getSlope() << "x + "
       << M.getIntercept() << endl;

  try
  {
    cout << L.intersect(M) << ", "
         << L.get_y(L.intersect(M))
         << " is the intersect" << endl;
  }

  catch (EqualLines &a)
  {
    cout << a.getMessage() << endl;
  }

  catch (ParallelLines &b)
  {
    cout << b.getMessage() << endl;
  }

  // Third Comparison
  cout << "\nThe first line is 'y = "
       << L.getSlope() << "x + "
       << L.getIntercept() << endl;

  cout << "The second line is 'y = "
       << N.getSlope() << "x + "
       << N.getIntercept() << endl;

  try
  {
    cout << L.intersect(N) << ", "
         << L.get_y(L.intersect(N))
         << " is the intersect" << endl;
  }

  catch (EqualLines &a)
  {
    cout << a.getMessage() << endl;
  }

  catch (ParallelLines &b)
  {
    cout << b.getMessage() << endl;
  }

  cout << "\nEnd of program" << endl;

  return 0;
}
