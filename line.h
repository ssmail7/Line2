#include <string>
using namespace std;

class RuntimeException { // generic run-time exception
 private:
  string errorMsg;
 public:
  RuntimeException(const string& err) { errorMsg = err; }
  string getMessage() const { return errorMsg; }
};

class EqualLines: public RuntimeException
{
 public:
	EqualLines(const string& err): RuntimeException("The lines are equal: infinite intersection") {}
};

class ParallelLines: public RuntimeException
{
 public:
	ParallelLines(const string& err): RuntimeException("The lines are parallel: no intersection") {}

};


class Line {
 public:
  Line(double slope, double y_intercept): a(slope), b(y_intercept) {};
  double intersect(const Line L) const ;
  double getSlope() const {return a;};
  double getIntercept() const {return b;};
  
  // return the y-coordinate of the point with x-coordinate z:
  double get_y(double z) const;
  
 private:
  double a;
  double b;
};


