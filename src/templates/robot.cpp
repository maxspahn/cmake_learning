#include "robot.h"

Robot::Robot(int id){
  this->id = id;
}

void Robot::printStatus(void){
  std::cout << this->getId() << std::endl;
}

int Robot::getID(void){
  return this->id;
}

