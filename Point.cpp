#include "Point.h"

void Point::Set(int vertical, int horizontal)
{
				Point::Point::vertical = vertical;
				Point::Point::horizontal = horizontal;
}

void Point::Move(int x, int y)
{
				this->vertical += x;
				this->horizontal += y;
}
void Point::Rotate()
{
				int x = this->vertical, y = this->horizontal;		
				this->vertical = y;
				this->horizontal = x * -1;
}
