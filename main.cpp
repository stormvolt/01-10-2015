#include <iostream>
#include "Vector.h"
#include "Vector.cpp"

using namespace std;

int main()
{
	Vector vec1;
	vec1.start.x=0;
	vec1.start.y=0;

	vec1.end.x=4;
	vec1.end.y=3;

	double distance = vec1.distance();
	cout<< distance << endl;
	vec1.print();
}
