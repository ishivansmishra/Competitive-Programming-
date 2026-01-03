#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int totalsum = 0,mysum = 0,count = 0;


    for(int i = 0;i<n;i++){
        cin>>arr[i];
        totalsum += arr[i];
    }

    sort(arr,arr+n,greater<int>());

    for(int i = 0;i<n;i++){
        mysum += arr[i];
        count++;
        if(mysum > totalsum - mysum){
            break;
        }
    }

    cout<<count<<endl;


    return 0;
}