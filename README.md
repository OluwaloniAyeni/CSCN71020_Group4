**WEEK 1* 
# Polygon Checker

## Project Overview
This project is part of the CSCN71020 Software Implementation and Unit Testing course. 
It focuses on enhancing a base polygon checker program by adding new shape analysis 
features and implementing a unit testing suite using the Microsoft C++ Native Test Framework.

The current version allows user to input triangle side lengths to determine if they forms a valid 
triangle and identify its type.

## Features (Week 1)

### Triangle Analysis
- Accepts three sides as input.
- Determines if the sides form a valid triangle.
- Identifies the type of triangle.
- Displays the result to the user.

## Menu System
A simple text-based interface that allows the user to:
- Analyze a triangle, or
- Exit the program.

## How to Run
1. Clone or download the repository:
   '''bash
   git clone https://github.com/OluwaloniAyeni/CSCN71020_Group4.git
2. Open the solution in Visual Studio 2022.
3. Build the project using the C99 standard.
4. Run the program with Ctrl + F5.
5. Follow the on-screen prompts to enter triangle side lengths.

# Unit Testing (Week 1)
The team has started implementing Microsoft C++ Unit Tests to verify the accuracy of the triangle analysis program.
The tests were created following the Test-Driven Development (TDD) approach, starting with failing gtests before writing the implementation code
# Current Test Coverage:
- Triangle validity check (verifies if sides form a valid triangle)
- Triangle type identification by sides
- Triangle type identification by angles:
      - Right-angled triangles
      - Acute-angled triangles
      - Obtuse-angled triangles
- Invalid triangle detection
- Basic TDD structure setup (failinng -> passing tests)
- Rectangle feature - planned for Week 2

-------
# week 1 Progress Summary
During Week 1, the team completed the triangle analysis module and implemented unit tests covering:
- Triangle validity
- Triangle type by sides (Equilateral, Isosceles, Scalene)
- Triangle type by angles
- Basic TDD workflow (failing -> passing tests)

-------
## Next step (Week 2)
- Begin the Rectangle Detection feature and extend unit testing coverage.


**WEEK 2**

As of Week 2, the project includes the triangle analysis module from Week 1 and introduces a new rectangle detection module. 

## Features (Week 2)

### Triangle Analysis (Week 1)
- Accepts three side lengths.
- Validates if the sides form a triangle.
- Classifies triangles by:
  - Side type: Equilateral, Isosceles, Scalene
  - Angle type: Right-angled, Acute, Obtuse
- Computes and returns triangle angles.
- Displays the final classification.

### Rectangle Detection (Week 2)
- Accepts four coordinate points.
- Determines if the points form a rectangle using the following checks:
  - Duplicate point rejection
  - Opposite side length equality
  - Diagonal equality
  - Right-angle verification using dot product
- Returns:
  - 1 if the points make a valid rectangle
  - 0 if not a rectangle

## Menu System
A simple console menu allows the user to:
- Analyze a triangle
- Exit the program

(Rectangle menu integration planned for Week 3.)

## How to Build and Run
1. Clone the repository: git clone https://github.com/OluwaloniAyeni/CSCN71020_Group4.git
2. Open the solution in Visual Studio 2022.
3. Ensure the project uses the C99 standard.
4. Build the solution.
5. Run the program.
6. Follow the on-screen prompts.



## Unit Testing (Week 2)

Unit testing is implemented using the Microsoft C++ Native Test Framework.
The team followed a Test-Driven Development (TDD) workflow, writing failing tests before implementing the corresponding code.

## Current Test Coverage
 Triangle Tests:

- Invalid triangle detection
- Zero and negative side rejection
- Boundary sum rule checks
- Side-type classification:
  - equilateral
  - isosceles
  - scalene)
- Angle-type classification
  - right
  - acute
  - obtuse
- Angle calculation validation
- Combined output verification

Rectangle Tests (New for Week 2):

- Valid rectangle detection
- Invalid quadrilateral detection
- Parallelogram rejection
- Duplicate point rejection
- Diagonal equality checks
- Right-angle validation using dot product

-------
## Week 2 Progress Summary

- During Week 2, the team implemented the rectangle solver module and expanded the test suite.

Completed work:

- Implemented isRectangle with side, diagonal, angle, and duplicate checks
- Added rectangle test cases covering valid and invalid shapes
- Refined triangle test suite for accuracy
- Cleaned warnings and updated solver files
- Multiple commits documenting the development process


-------
**WEEK 3**

The application now supports both Triangle Analysis and Rectangle Detection, with full menu integration and added rectangle calculations (area and perimeter).

## Features (Week 3)

### Triangle Analysis (From Week 1 & Week 2)

- Accepts three side lengths.
- Validates if the sides form a triangle.
- Classifies triangles by:
- Side type: Equilateral, Isosceles, Scalene
- Angle type: Right-angled, Acute, Obtuse
- Computes triangle angles.
- Displays full classification result.

### Rectangle Detection & Calculations (Updated in Week 3)

- Accepts four coordinate points.
- Full rectangle validation using:
  - Duplicate point rejection
  - Opposite side length equality
  - Equal diagonals
  - Right-angle checking using dot product
- Now includes:
  - Area calculation
  - Perimeter calculation
- Returns:
  - 1 → valid rectangle
  - 0 → invalid rectangle
 

## Menu System (Updated in Week 3)

- A text-based menu now allows the user to:
- Analyze a triangle
- Analyze a rectangle
- Exit the program


## How to Build and Run
1. Clone the repository: git clone https://github.com/OluwaloniAyeni/CSCN71020_Group4.git
2. Open the solution in Visual Studio 2022.
3. Ensure the project uses the C99 standard.
4. Build the solution.
5. Run the program.
6. Follow the on-screen prompts.


## Unit Testing (Week 3)

Unit testing continues using the Microsoft C++ Native Test Framework, following a TDD approach (failing test → implementation → passing test).

## Current Test Coverage
 Triangle Tests:

- Triangle validity detection
- Zero/negative value rejection
- Triangle inequality rule checks
- Side-type classification
  - Equilateral
  - Isosceles
  - Scalene
- Angle-type classification
  - Right
  - Acute
  - Obtuse
  
- Angle calculation verification
- Combined output formatting

 Rectangle Tests (Expanded in Week 3):
 - Valid rectangle detection
 - Invalid quadrilateral rejection
 - Parallelogram rejection
 - Duplicate coordinate rejection
 - Diagonal equality testing
 - Right-angle verification (dot product method)
 - New Week 3 tests:
  - Area calculation tests
  - Perimeter calculation tests
  - Invalid-rectangle area/perimeter returning 0
  - Additional coordinate ordering scenarios

  -------
## Week 3 Progress Summary

- During Week 3, the team completed the full rectangle module and integrated it into the main program.

Completed Work: 
- Added rectangle option to the main menu.
- Implemented getRectangleCoords() in main.c for user input.
- Completed area and perimeter functions in rectangleSolver.c.
- Updated the rectangle validation logic (duplicate points, diagonals, dot product angle check).
- Expanded rectangle test suite to include:
  - Area tests
  - Perimeter tests
  - Additional invalid-shape tests
- Refined triangle and rectangle solvers for accuracy.
- Cleaned warnings and improved code structure.
- Multiple commits documenting Week 3 progress.
