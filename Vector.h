#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include "Point.h"
#include "Point.cpp"

class Vector
{
	public:
		Point start, end;
		double distance();
		void print();
};

		
#endif
