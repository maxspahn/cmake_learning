#include <iostream>

template <typename T>
class MyMax
{
public:
  MyMax (T x, T y);
  void printValues ();
  bool compare ();

private:
  T x;
  T y;
};

template<typename T>
MyMax<T>::MyMax(T x, T y) {
  this->x = x;
  this->y = y;
}

template<typename T>
void MyMax<T>::printValues () {
  std::cout << "x : " << this->x << " , y : " << this->y << std::endl;
}

template<typename T>
bool MyMax<T>::compare () {
  return (this->x > this->y);
}
