#include "factorial.h"

using namespace std;

int factorial(int a)
{
  if (a < 0){
    throw runtime_error("Not defined for negative values");
  }
  else if (a <= 1){
    return 1;
  }
  else{
    return factorial(a-1) * a;
  }
}



















