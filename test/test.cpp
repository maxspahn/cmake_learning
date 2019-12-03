#include <gmock/gmock.h>
#include "factorial.h"

TEST(TestFactorial_5, Equals_120) {
  int myInt = 5;
  int myFac = factorial(myInt);
  ASSERT_EQ(myFac, 120);
}

TEST(TestFactorial_0, Equals_1) {
  int myInt = 0;
  int myFac = factorial(myInt);
  ASSERT_EQ(myFac, 1);
}

TEST(TestFactorial_negativ, RaisesError) {
  int myInt = -1;
  ASSERT_THROW(factorial(myInt), std::runtime_error);
}

int main(int argc, char *argv[])
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
