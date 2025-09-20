#include<iostream>
using namespace std;
int main(){
int diff=0;
int max=0;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        diff=arr[j]-arr[i];
        if(diff>max){
            max=diff;
        }
    }
}
cout<<max;
}
