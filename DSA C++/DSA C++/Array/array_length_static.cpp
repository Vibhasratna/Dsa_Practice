#include <iostream>
using namespace std;

int main(){

int ar[]={10,20,30,50,60};
int len = sizeof(ar)/sizeof(ar[0]); // Calculating length of the array

cout<<"length:"<<len;

    return 0;
}