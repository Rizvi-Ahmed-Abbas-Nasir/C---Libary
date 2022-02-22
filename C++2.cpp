#include<iostream>
using namespace std;

int main()
{
    int First {5}; // Curle Brace initialization 
    int Second = 5; // Assignment initialization
    int Third (5); // Parenthesis initialization
    auto automatic = 100; // It's Variable Declare according to the value  
    short int Short_int  (5); //Shorten the based store value of integer like 4 to 2
    long int Long_int (7); // increase the based store value of integer like 4 to 8
    signed int Singed_int {-5}; // Only for negative integer
    unsigned int Unsigend_int {7};  // only for positive integer


    cout<<"First: "<<First<<endl;
    cout<<"Second: "<<Second<<endl;
    cout<<"Third: "<<Short_int<<endl;
    cout<<"Auto: " <<Singed_int<<endl;

    cout<<"The Size Of INTEGERS: "<<sizeof(Third)<<endl;

return 0;
}