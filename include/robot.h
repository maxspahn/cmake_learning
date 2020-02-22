#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>

class Robot
{
private:
  int id;

public:
  Robot();
  int getId(void);
  void printStatus(void);
};

#endif /* ROBOT_H */
