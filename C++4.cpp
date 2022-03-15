#include<iostream>
using namespace std;

int main()
{
    bool True_Bool {true}; // also represent 1
    bool false_bool {false}; // also represent 0

    if (True_Bool == true)
    {
        cout<<sizeof(True_Bool)<<endl;
        cout<<sizeof(false_bool)<<endl;
        cout<<"**Upper Side is the size of Booleans**"<<endl;
        cout<<True_Bool<<endl;
        cout<<false_bool<<endl;
        cout<<boolalpha; // Changes the setting insted of printing 1/0 it print True and False
        cout<<True_Bool<<endl;
        cout<<false_bool<<endl;
    }
    


return 0;
}

