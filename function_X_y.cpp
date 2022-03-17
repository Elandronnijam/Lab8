#include <iostream>
#include <cmath>

float function_X_y(int x, int y)
{
	int F = 0;
	F = pow(y, x + 1) - 5 * pow(x, 3);
	return F;
}