// COURSE.CPP - Course class implementation

#include "unit.h"

Unit::Unit()
{
  name[0] = '\0'; // it is a char * string, not a C++ string object.
}

Unit::Unit( const char * nam, int id,
                unsigned cred, float mark )
{
  strncpy( name, nam, UnitNameSize );
  unitid = id;
  credits = cred;
  marks = mark;
}

istream & operator >>( istream & input, Unit & C )
{
  input >> C.name >> C.unitid >> C.credits;
  return input;
}

ostream & operator <<( ostream & os, const Unit & C )
{
  os << "  Course:  " << C.name << '\n'
     << "  Unit ID: " << C.unitid << '\n'
     << "  Credits: " << C.credits << '\n'
     << "  Marks: " << C.marks << '\n';
  return os;
}
