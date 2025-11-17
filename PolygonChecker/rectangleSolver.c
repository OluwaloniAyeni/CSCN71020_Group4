#include <math.h>
#include "rectangleSolver.h"

static int dist2(int x1, int y1, int x2, int y2)
{
	return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

static int dot(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	int v1x = x2 - x1, v1y = y2 - y1;
	int v2x = x4 - x1, v2y = y4 - y1;
	return v1x * v2x + v1y * v2y;
}

int isRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	//reject duplicate points
	if ((x1 == x2 && y1 == y2) ||
		(x2 == x3 && y2 == y3) ||
		(x3 == x4 && y3 == y4) ||
		(x4 == x1 && y4 == y1))
	{
		return 0;
	}
	//calculate all sides
	int d1 = dist2(x1, y1, x2, y2);
	int d2 = dist2(x2, y2, x3, y3);
	int d3 = dist2(x3, y3, x4, y4);
	int d4 = dist2(x4, y4, x1, y1);

	//calculate diagonals
	int diag1 = dist2(x1, y1, x3, y3);
	int diag2 = dist2(x2, y2, x4, y4);


	if (d1 > 0 && d2 > 0 && d1 == d3 && d2 == d4 && diag1 == diag2 && dot(x1, y1, x2, y2, x3, y3, x4, y4) == 0)

	{
		return 1;
	}
	return 0;
}
float calculateArea(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	if (!isRectangle(x1, y1, x2, y2, x3, y3, x4, y4))
		return 0.0f;

	float w = sqrtf((float)dist2(x1, y1, x2, y2));
	float h = sqrtf((float)dist2(x2, y2, x3, y3));
	return w * h;
}

float calculatePerimeter(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	if (!isRectangle(x1, y1, x2, y2, x3, y3, x4, y4))
		return 0.0f;

	float w = sqrtf((float)dist2(x1, y1, x2, y2));
	float h = sqrtf((float)dist2(x2, y2, x3, y3));
	return 2.0f * (w + h);
}


