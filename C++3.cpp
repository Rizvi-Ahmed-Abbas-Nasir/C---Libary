#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float Float_Number {1.346565f};  //  precision is 7
    double Double_Number {1.3535353}; //  Precision is 15
    long double Long_double {1.545454545455L}; //  Percision is > double

    // Size of Long Double
    cout<<sizeof(Long_double)<<endl;
    // Precision
    cout<<std::setprecision(20); // Control the precision from std::cout
    cout<<Long_double<<endl;

return 0;
}