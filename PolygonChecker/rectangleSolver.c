#include <math.h>
#include "rectangleSolver.h"

static int dist2(int x1, int y1, int x2, int y2)
{
	return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

int isRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	int d1 = dist2(x1, y1, x2, y2);
	int d2 = dist2(x2, y2, x3, y3);
	int d3 = dist2(x3, y3, x4, y4);
	int d4 = dist2(x4, y4, x1, y1);
	int diag1 = dist2(x1, y1, x3, y3);
	int diag2 = dist2(x2, y2, x4, y4);

	if (d1 > 0 && d2 > 0 && d1 == d3 && d2 == d4 && diag1 == diag2)

		return 1;
	return 0;
}