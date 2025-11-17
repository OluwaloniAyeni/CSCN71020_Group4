#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "triangleSolver.h"
#include "rectangleSolver.h"


int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSides[0]);
			char* result = analyzeTriangle(triangleSides[0], triangleSides[1], triangleSides[2]);
			printf_s("%s\n", result);
			break;
		case 2:
			printf_s("Rectangle selected.\n");

			int coords[8];
			int* p = coords;

			getRectangleCoords(p);
			if (isRectangle(p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]))
			{
				float area = calculateArea(p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);
				float perimeter = calculatePerimeter(p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);
				printf_s("Valid rectangle.\n");
				printf_s("Area = %.2f\n", area);
				printf_s("Perimeter = %.2f\n", perimeter);
			}
			else {
				printf_s("Invalid rectangle.\n");
			}
			break;
	
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}
	int* getRectangleCoords(int* coords)
	{
		printf_s("Enter the coordinates of the rectangle in the order x1 y1 x1 y2 x3 y3 x4 y4:\n");
		for (int i = 0; i < 8; i++)
		{
			scanf_s("%d", &coords[i]);
		}
		return coords;

}