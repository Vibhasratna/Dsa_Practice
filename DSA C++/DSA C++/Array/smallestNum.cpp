#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the length of an array:"<<" ";
    cin>>n;
    
    int ar[n];
    int index= -1;//Initializing index = -1 is a best practice in cases where we need to track whether an element was actually found in the array.
    cout<<"Enter the elements:- "<<" ";
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int smallest = INT_MAX; // ∞ (infinity) is represented by INT_MAX;
    for(int i=0; i<n;i++){
        
        if(ar[i]<smallest){
            smallest=ar[i];
        }
        
    /* Alternate way:- smallest = min(ar[i],smallest); // min() function is used to find smallest b/w two inputs
        
        */
    }
    for(int i=0; i<n;i++){
        if(smallest == ar[i]){
            index= i;
            break;
        }
    }
cout<<"Smallest element is:- "<<smallest<<"\nIndex: "<<index;

    return 0;
}