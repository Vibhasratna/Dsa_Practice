#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;

cout<<"enter the length of the arr:";
cin>>n;

vector<int> mark(n);

cout<<"Enter"<<n<<" elemnts:- "<<endl;
for(int i=0;i<mark.size();i++){
    cin>>mark[i];
}

cout<<"elements:-"<<endl;
for(int i=0; i<n;i++){
    cout<<mark[i]<<endl;
}
    return 0;
}