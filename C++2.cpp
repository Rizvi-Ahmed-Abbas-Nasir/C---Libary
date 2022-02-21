#include<iostream>
using namespace std;

int main()
{
    int First {5}; // Curle Brace initialization 
    int Second = 5; // Assignment initialization
    int Third (5); // Parenthesis initialization
    auto automatic = 100;

    cout<<"First: "<<First<<endl;
    cout<<"Second: "<<Second<<endl;
    cout<<"Third: "<<Third<<endl;
    cout<<"Auto: " <<automatic<<endl;

return 0;
}