/******************************************************************************
//Name: Pham Ly
//UCFID: 5651490
//Class: COP3223C
//Purpose: The purpose of this assignment is to find the distance, perimeter,
area, width, and height of the circle 
//Professor: Juan Parra
//Date: 09/08/2024
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.1415927
//functions declarations
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv)
{
    //Call multiple calculation functions 
     calculateDistance();
     calculatePerimeter();
     calculateArea();
     calculateWidth();
     calculateHeight();
    
    return 0;
}
   double Distancesupport()
   {
            //declaring the variables 
            double x1, x2, y1, y2, distance;
         //Asks user for the input for the coordinates of x1 and x2
         printf("Enter your points for x1 and x2 for Point#1: ");
         scanf("%lf %lf", &x1, &x2);
      
         //Asks user for the input for the coordinates of y1 and y2
         printf("Enter your points for y1 and y2 for Point#2: ");
         scanf("%lf %lf", &y1, &y2);
     
         //Show the user the entered points
         printf("Point#1 entered: x1 = %.2f; x2 = %.2f\n", x1, x2);
         printf("Point#2 entered: y1 = %.2f; y2 = %.2f\n", y1, y2);
      
         //Using the distance formula to calculate the distance between two points
         distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
         
         return distance;
   }
    //******************************************
    //double calculateDistancesupport
    //Purpose: Help to take the value and then return it
    //Input: N/A
    //Output: N/A
    //Return: a "double" of what is entered
    //******************************************
    
    //This function helps calculate distance between the two points
    double calculateDistance() 
    {
        //Declare distance
        double distance = Distancesupport();
         
         //Show the calculated distance
         printf("The distance between the two points is %.2f\n", distance);
     
         return distance; 
    //******************************************
    //double calculateDistance
    //Purpose: The purpose is to calculate and print the distance between the two points entered
    //Input: The values for x1 and x2 and y1 and y2 
    //Output: Prints the distance between two points
    //Return: distance
    //******************************************
        
    }
      //This function helps to find the perimeter of the cirlce
      double calculatePerimeter()
     {
      
      double perimeter;
      
      //calculate the perimeter by using the distance as diameter
      perimeter = Distancesupport() * PI;
     
      //Shows the user the calculated perimeter
      printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
     
      return 1.0;
    //******************************************
    //double calculatePerimeter
    //Purpose: To calculates and prints the perimeter 
    //Input: N/A
    //Output: Prints out the calculated perimeter 
    //Return: How challenging it is to make this function
    //******************************************
     }
      //This function calculates the area of the circle
      double calculateArea()
     {
      
      double radius, area; 
      //Calculate the radius by dividing by 2 since radius is half of diameter
      radius = Distancesupport() / 2;
      
      //Calculate the area by using the radius
       area = PI * pow(radius, 2);
      //Show the calculated area 
      printf("The area of the city encompassed by your request is %.2f\n", area);
     
      // 2/5 on the challenging scale
      
      return 2.0;
     }
    //******************************************
    //double calculateArea
    //Purpose: To calculates and prints the area 
    //Input: N/A
    //Output: Prints out the calculated perimeter 
    //Return: How challenging it is to make this function
    //******************************************
     
     //This function calculates the width of the cirlce
     double calculateWidth()
     {
        //declaring width
        double width;
        
        //Width is the distance between two points in a cirlce so it equals to distance
        width = Distancesupport();
        
        //Shows the calculated width 
        printf("The width of the city encompassed by your request is %.2f\n", width);
         
         return 1.0;
     }
    //******************************************
    //double calculateWidth
    //Purpose: To calculates and prints the width 
    //Input: N/A
    //Output: Prints out the calculated width 
    //Return: How challenging it is to make this function
    //******************************************
     //This function calculates the height of the circle
     double calculateHeight()
     {
         //declaring height 
         double height;
         
         //Height is also the distance between two points in a cirle so it's also equals to distance
         height = Distancesupport();
         
         //Shows the calculated height
         printf("The height of the city encompassed by your request is %.2f\n", height);
         
         return 1.0;
     }
    //******************************************
    //double calculateHeight
    //Purpose: To calculates and prints the height
    //Input: N/A
    //Output: Prints out the calculated height
    //Return: How challenging it is to make this function
    //******************************************
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
