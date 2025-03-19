#include<iostream>
using namespace std;

int main(){

    int mark[3]= {30,50,70};
    int len= sizeof(mark)/sizeof(mark[0]);//Calculating length of the array

    for(int i=0; i<len; i++){
        cout<<mark[i]<<endl;
    }

    return 0;
}