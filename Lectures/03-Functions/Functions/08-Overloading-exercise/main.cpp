#include <iostream>
#include <cmath>
using namespace std;

int find_area(int side_length);
double find_area(double length,double width);

void area_calc();

int main()
{
    area_calc();

	return 0;
}

void area_calc() {
    int square_area= find_area(2);
    double rectangle_area= find_area(4.5,2.3);


    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

int find_area(int side_length){
    return side_length*side_length;
}

double find_area(double length,double width){
    return length*width;
}


