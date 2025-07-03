#include <iostream>
using namespace std;

void PrintFibonacciSeries(short Number)
{
    int perv1=1;
    int perv2 =0;
    int Result = 0;
    cout << "1\t";
    for (int i = 0; i < Number; i++)
    {
        


        Result = perv2 + perv1;
        cout << Result << "\t";
         perv2 = perv1;
         perv1 = Result;
    
      
    }

}

int main()
{
   
    PrintFibonacciSeries(10);

}
