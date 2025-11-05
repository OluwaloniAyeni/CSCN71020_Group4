#include <stdio.h>
#include <math.h>
#include<string.h> //for strcpy

#define PI 3.14159265358979323846



#include "triangleSolver.h"


//Function to calculate angles of the triangle
void calculateAngles(int a, int b, int c, int* A, int* B, int* C)
{
	double angleA = acos((double)(b * b + c * c - a * a) / (2.0 * b * c)) * (180.0 / PI);
	double angleB = acos((double)(a * a + c * c - b * b) / (2.0 * a * c)) * (180.0 / PI);
	double angleC = 180.0 - (angleA + angleB);

	//Round angles to nearest integer
	*A = (int)(angleA + 0.5);
	*B = (int)(angleB + 0.5);
	*C = (int)(angleC + 0.5);

}

//Classify by angles
const char* classifyByAngles(int A, int B, int C) {
	if (A == 90 || B == 90 || C == 90)
		return "Right-angled triangle";
	else if (A < 90 && B < 90 && C < 90)
		return "Acute triangle";
	else
		return "Obtuse triangle";
}

// Main analyzeTriangle function
char* analyzeTriangle(int side1, int side2, int side3) {
	static char result[100];
	int A, B, C;

	//Validate triangle
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		strcpy_s(result, sizeof(result), "Not a triangle");
		return result;
	}

	if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
		strcpy_s(result, sizeof(result), "Not a triangle");
		return result;
	}

	//Classify by sides
	const char* sideType;
	if (side1 == side2 && side1 == side3)
		sideType = "Equilateral triangle";

	else if (side1 == side2 || side1 == side3 || side2 == side3)
		sideType = "Isosceles triangle";

	else
		sideType = "Scalene triangle";

	//Classify by angles
	calculateAngles(side1, side2, side3, &A, &B, &C);
	const char* angleType = classifyByAngles(A, B, C);

	//Combine side and angle types into expected string format
	sprintf_s(result, sizeof(result), "%s with angles %d,%d,%d", angleType, A, B, C);

	//Special case: Equilateral triangle is always acute
	if (side1 == side2 && side1 == side3)
		strcpy_s(result, sizeof(result), "Equilateral Triangle");


	return result;
}