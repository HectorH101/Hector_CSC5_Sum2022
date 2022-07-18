/* 
 * File:   main.cpp
 * Author: Hector Hurtado
 * Created on July 11
 * Purpose:  Gaddis_9thEd_Chap4_Prob8_SortNames
 */
 
//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int Book; //Number of books purchased
    int Point; //Amount of points earned
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Book Worm Points"<<endl;
   cout<<"Input the number of books purchased this month."<<endl;
   cin>>Book;
    if (Book==0) Point=0;
    if (Book==1) Point=5;
    if (Book==2) Point=15;
    if (Book==3) Point=30;
    if(Book>=4) Point=60;
   
    //Display the outputs
cout<<"Books purchased =  "<<Book<<endl;
cout<<"Points earned   = "<<Point;

    //Exit stage right or left!
    return 0;
}