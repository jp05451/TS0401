#ifndef Point_H
#define Point_H
#include <iostream>
#include<cmath>
using namespace std;

class Point
{
private:
	int vertical;
	int horizontal;

public:
	Point()
	{
		vertical = 0;
		horizontal = 0;
	}

	void Set(int vertical, int horizontal);
	Point(int _virtical, int _horizontal);
	void Move(int x, int y);
	void Rotate();
	int RetrieveVertical() const { return vertical; }
	int RetrieveHorizontal() const { return horizontal; }
};

#endif //Point_H