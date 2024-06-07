#include<iostream>
using namespace std;

//Pass-by-Value
int square1(int n)
{
    //Address of n in square1() is not the same as n1 in main()
    cout << "address of n1 in square1(): " << &n << "\n";
    // clone modified inside the function
    n *= n;
    return n;
}

int main(){
      int var = 20;
        //declare pointer variable]
    int *ptr;
    //note that data type of ptr and var must be same
    ptr = &var;
    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr <<"\n";

//Call by Value
    int n1=8; 
    cout << "address of n1 in main(): " << &n1 << "\n"; 
    cout << "Square of n1: " << square1(n1) << "\n"; 
    cout << "No change in n1: " << n1 << "\n";

  return 0;
}
