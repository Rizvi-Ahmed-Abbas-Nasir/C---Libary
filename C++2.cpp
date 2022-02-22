#include<iostream>
using namespace std;

int main()
{
    int First {5}; // Curle Brace initialization 
    int Second = 5; // Assignment initialization
    int Third (5); // Parenthesis initialization
    auto automatic = 100; // It's Variable Declare according to the value  
    short int Short_int  (5); // Shorten the based store value of integer like 4 to 2
    long int Long_int (7); // increase the based store value of integer like 4 to 8
    signed int Singed_int {-5}; // Only for negative integer
    unsigned int Unsigend_int {7};  // only for positive integer
    long long int Long_long_integer {10}; // 8 bytes


    cout<<"First: "<<First<<endl;
    cout<<"Second: "<<Second<<endl;
    cout<<"Short Intergers and Size: "<<Short_int<<" "<<sizeof(Short_int)<<endl;
    cout<<"Long Intergers and Size: "<<Long_long_integer<<" "<<sizeof(Long_long_integer)<<endl;
    cout<<"Auto: " <<Singed_int<<endl;

    cout<<"The Size Of INTEGERS: "<<sizeof(Third)<<endl;

return 0;
}