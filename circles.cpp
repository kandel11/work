#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

//
// This program declares a class for a circle that will have
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles
// (spheres in the program) initialized at definition or set by a function.

// Chad Clark

class Circles{
	public:
		void setCenter(int x, int y);
		double findArea();
		double findCircumference();
		void printCircleStats();	// This outputs the radius and center of the circle. 
		Circles(float R, float centerX, float centerY);			// Constructor
		Circles();		// Default constructor 
		Circles(float R);
	private:
		float radius;
		int center_x;
		int center_y;
};

const double PI = 3.14;

// Client section 
 
int main()
{
	
	char input;
	float radius = -1;
	float cord_x = 99;
	float cord_y = 99;
	
	cout << "do you want to enter a radius? [y/n]" << endl;
	cin >> input;
	
	if(tolower(input) == 'y'){
		
		cout << "input the radius" << endl;
		cin >> radius;
	}
	
	cout << "do you want to enter the cordinates? [y/n]" << endl;
	
	if(tolower(input) == 'n'){
		
		cout << "input the cordinates" << endl;
		cin >> cord_x >> cord_y;
	}
	
	if(radius != -1 && cord_x < 99 && cord_y < 99){
		
		Circles circle(radius, cord_x, cord_y);
		
	}
	
	else if(radius != -1){
		
		Circles circle(radius)
		
	}
	
	else if(cord_x < 99 && cord_y < 99){
		
		Circles circle(cord_x, cord_y);
		
	}
	
	else{
		
		Circles circle;
		
	}
	
	cout << "The area of the circle is " << circle.findArea() << endl;
	cout << "The circumference of the circle is "
		 << circle.findCircumference() << endl;
	

	return 0;
}

// __________________________________________________________________
//
// Implementation section	Member function implementation


Circles::Circles(){
	radius = 1;
	center_x = 0;
	center_y = 0;
}

Circles::Circles(float R, float centerX, float centerY){

	radius = R;
	center_x = centerX;
	center_y = centerY;
}

Circles::Circles(float R){
	
	radius = R;
	center_x = 0;
	center_y = 0;
}
// Fill in the code to implement the non-default constructor

double Circles::findArea(){
	return PI * pow(radius, 2);

}
// Fill in the code to implement the findArea member function

double Circles::findCircumference(){
	return PI * radius * 2;

}
// Fill in the code to implement the findCircumference member function

void Circles::printCircleStats()
// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
{
	cout << "The radius of the circle is " << radius << endl;
	cout << "The center of the circle is (" << center_x
		 << "'" << center_y << ")" << endl;
}

void Circles::setCenter(int x, int y)
// This procedure will take the coordinates of the center of the circle from
// the user and place them in the appropriate member data.
{
	center_x = x;
	center_y = y;
}
