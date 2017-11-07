/********************************************************************
** Author: Michael McCabe
** Date: October 9, 2017
** Description: This program opens a userdefined File, tabulates a sum,
** and then saves that sum to an output file.
** 
*********************************************************************/

#include <iostream>
#include <fstream>   //This library enables file manipulation
#include <string>

using namespace std;


int main()
{
   //Declarations of variables
   string fileName;

   int sum = 0;
   int numbers;
   ifstream inputFile;
   ofstream outputFile;

   //Prompt the user to enter in the filename
   cout << "Please enter your filename. "; 
   cin >> fileName;

   //Attempt to open the filename

   inputFile.open(fileName.c_str()); //For compatibility purposes, let's include older standards

   //If the attempt to open the filename failed, the program will skip this block.
   if (inputFile)
   {
      while (inputFile >> numbers)
      {
         sum = sum + numbers;
      }
      
      //Close the input file
      inputFile.close();
   
      //Open, write, and close the output file
      outputFile.open("sum.txt");
      outputFile << sum;
      outputFile.close();


      cout << "result written to sum.txt";
   }

   //In the event of the program skipping the If TRUE block, this will display to the user
   else
   {
      cout << "could not access file";
   }


   return 0;
}

