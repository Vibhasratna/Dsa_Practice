#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = {10, 20, 30, 40, 50}; //Best for dynamic arrays, as .size() updates when elements are added/removed.
    cout << "Length of vector: " << vec.size() << endl; 
    return 0;
}

