// MAIN.CPP - Case Study, Student Registration

// Count the number of courses taken by the student, calculate total credits
// author KRI
//

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "course.h"  // Course class declaration
#include "regist.h"  // Registration class declaration
#include "result.h"
#include "unit.h"
#include "result.h"

using namespace std;

// Main program:
// Open an input file stream, read a Registration object,
// including its list of courses. Redisplay all information,
// and calculate the total credits taken. Write the results
// to a file stream.

int main()
{
    stringstream ss;
  ifstream infile( "rinput.txt" );
  if( !infile ) return -1;

  Registration R;
  infile >> R;

  ofstream ofile( "routput.txt" );

// Use a debugger and track down the calls made "behind the scene"
  ofile << R
    << "Number of courses = " << R.GetCount() << '\n'
    << "Total credits     = " << R.GetCredits() << '\n';

  // Declare and initialize a Course, and modify
  // its credits.

  //Course aCourse( "MTH_3020", 'B', 2 );
  //aCourse.SetCredits( 5 );
  //cout << aCourse << endl; // the operator << for Course is called

 Result result1;
 result1.setMarks(50.5);
  Unit unita("Set Theory", 1, 3, result1.getMarks());
  unita.SetCredits(5);
  cout << unita << endl;

  return 0;
}

