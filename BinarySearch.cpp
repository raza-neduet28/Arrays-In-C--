#include<iostream>
using namespace std;
int main(){
int target;
cout<<"Enter Target :";
cin>>target;
int n;
cin>>n;
int arr[n];
int low=0;
int high=n-1;
bool ans=false;
int mids=-1;
for(int i=0 ;i<n;i++){
    cin>>arr[i];
}
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==target){
        ans=true;
        mids=mid;
        break;
    }
    else if(arr[mid]>target){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
if(ans){
    cout<<mids;

}
else{
cout<<-1;
}

}