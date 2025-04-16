// CSC 134
// M5LAB2
// Abreanna Ramelize
// 4/15/2025


#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.
    
    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area
           
    // Get the rectangle's length.
    length = getLength();
   
    // Get the rectangle's width.
    width = getWidth();
   
    // Get the rectangle's area.
    area = getArea(length, width);
   
    // Display the rectangle's data.
    displayData(length, width, area);
           
    return 0;
}


// getLength function: Asks the user to enter the   
// rectangle's length and returns it as a double.  


double getLength()
{
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}


// getWidth function: Asks the user to enter the    
// rectangle's width and returns it as a double.   

double getWidth()
{
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

// getArea function: Calculates the rectangle's     
// area and returns it as a double.                

double getArea(double length, double width)
{
    return length * width;
}


// displayData function: Displays the rectangle's   
// length, width, and area in a well-formatted way.

void displayData(double length, double width, double area)
{
    cout << "Rectangle Dimensions and Area:" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}

