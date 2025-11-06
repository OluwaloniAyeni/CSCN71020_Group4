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

Next step (Week 2): Begin the Rectangle Detection feature and extend unit testing coverage.
