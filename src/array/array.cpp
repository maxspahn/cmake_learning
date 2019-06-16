#include<iostream>
#include<string>
#include<array>

struct touple {
	int t1;
	int t2;
};

int main(int argc, char *argv[])
{
	// First we create the classical array structure
	int a1[5];
	int a2[2] = {3, 4};
	int a3[] = {4, 5, 8};

	// Second using pointers
	int* b1 = new int[2];
	int* b2 = new int[3]{4, 5, 6};
	// Make sure that these are always deleted at the end
	// When you do not do this explicitly, the garbage 
	// collector will delete the pointer with freeing the 
	// storage behind at the actual addresses.
	// Try using $valgrind ./array to detect leaks
	delete[] b1;
	delete[] b2;

	// Third using std::array
	std::array<int, 3> c1 = {3, 6, 7};
	std::array<int, 2> c2;
	std::array<int, 2> c3({3,4});

	// You could also store custom objects in all of these types
	touple d1[2];
	d1[0].t1 = 3;
	d1[0].t2 = 4;
	d1[1].t1 = 8;
	d1[1].t2 = 9;
	// It can be done in the same way with method 2 and 3
	// Think about the implementations

	// Now what about an array of arrays?
  // What methods could you think of?
	int e1[2][4];
	e1[0][1] = 35;
	e1[0][3] = 5;
	// By default the values are set to zero
	std::cout << e1[0][0] << std::endl;
	int e2[2][2] = {{3,4},{3,5}};
	std::cout << e2[1][0] << std::endl;

	// Using std::array...it is getting more complicated
	// The first syntax cannot work, why?
	//std::array<std::array<int, 2>, 2> f1 = {{3,4}, {4,5}};
	
	// What is the difference in the following expression?
	std::array<std::array<int, 2>, 2> f2 = {std::array<int, 2>({2,3}), std::array<int, 2>({1, 1})};

	// Now you should be able to create all kind of array structures for
	// all variable types. What are your questions?
	// Now we need to look at heaps and other, more sophisticated 
	// data structures.
  return 0;
}
