#include<iostream>
#include<string>
#include "printer.h"

int main(int argc, char *argv[])
{
  std::cout << "ich habe dich lieb süße" << std::endl;
  int myIdo = 2;
  Printer* printer1 = new Printer(myIdo);
  int p = 4;
  printer1->printSpecial(p);
  return 0;
}
