#include <iostream>
#include <string>
#include <tuple>
#include "myMax.h"

int main(int argc, char *argv[])
{
  MyMax<int> m(3, 5);
  MyMax<char> n('a', 'c');
  m.printValues();
  std::cout << n.compare() << std::endl;

  std::tuple<int, int, std::string> myTuple = std::make_tuple(2,3, "peter");
  std::cout << std::get<2>(myTuple) << std::endl;
  return 0;
}

