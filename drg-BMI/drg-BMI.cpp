// drg-BMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: David Garza
// Date: 20200309
// Description: To check the BMI on men and women.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   std::cout << "\nI will check your BMI!" << endl;
   char chrChoice = ' ';
   string strF;
   string stfM;
   std::cout << "\nPlease enter F for Female or M for Male: ";
   cin >> chrChoice;
 
   switch (chrChoice) {
   case 'F': case 'f':
      std::cout << "\nPlease enter your Weight: ";
      int intFBodyWeight = 0;
      std::cin >> intFBodyWeight;
      std::cout << "\nPlease enter your Wrist measurements: ";
      int intFWrist = 0;
      std::cin >> intFWrist;
      std::cout << "\nPlease enter your Waist measurements: ";
      int intFWaist = 0;
      std::cin >> intFWaist;
      std::cout << "\nPlease enter your Hip measurements: ";
      int intFHip = 0;
      std::cin >> intFHip;
      std::cout << "\nPlease enter your Forearm measurements: ";
      int intFForearm = 0;
      std::cin >> intFForearm;

      int intFA1 = intFBodyWeight * 0.732 + 8.987;
      int intFA2 = intFWrist / 3.140;
      int intFA3 = intFWaist * 0.157;
      int intFA4 = intFHip * 0.249;
      int intFA5 = intFForearm * 0.434;
      int intFB = intFA1 + intFA2 - intFA3 - intFA4 + intFA5;
      int intFBodyFat = intFBodyWeight - intFB;
      int intFPercentage = intFBodyFat * 100 / intFBodyWeight;
      std::cout << "\nYour total body fat is: " << intFBodyFat << endl;
      std::cout << "\nYour total body fat percentage is: " << intFPercentage << endl;
      break;
   }
   
   switch (chrChoice) {
   case 'M': case 'm':
      std::cout << "\nPlease enter your Weight: ";
      int intMBodyWeight = 0;
      std::cin >> intMBodyWeight;
      std::cout << "\nPlease enter your Wrist measurements: ";
      int intMWrist = 0;
      std::cin >> intMWrist;

      int intMA1 = intMBodyWeight * 1.082 + 94.42;
      int intMA2 = intMWrist * 4.15;
      int intMB = intMA1 - intMA2;
      int intMBodyFat = intMBodyWeight - intMB;
      int intMPercentage = intMBodyFat * 100 / intMBodyWeight;

      std::cout << "\nYour total body fat is: " << intMBodyFat << endl;
      std::cout << "\nYour total body fat percentage is: " << intMPercentage << endl;
      break;
   }
}