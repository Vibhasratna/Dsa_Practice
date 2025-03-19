#include<iostream>
#include<vector>

using namespace std;

int main(){
int index =-1;
vector<int> ar= {75,11,34,86,7};
int largest= INT_MIN; //-∞ (infinity) is represented by INT_MIN;

for(int i=0; i<ar.size(); i++){

    int prevLargest = largest;  
    largest = max(ar[i], largest);  // Update largest using max function
    if (largest != prevLargest) { 
        index = i;
    }
}

cout<<"Largest number:- "<<largest<<"\nindex:"<<index;
    return 0;
}