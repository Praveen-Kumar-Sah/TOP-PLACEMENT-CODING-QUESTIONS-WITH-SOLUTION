// Write a program to replace the elements by its corresponding rank in array
#include<bits/stdc++.h>
using namespace std;

void change(int arr[], int size){

    map<int, int> mp;

    int x;
    for(x=0; x<size; x++){
        mp[arr[x]] = x;
    }

    int rank = 1;
    for(auto x : mp){
        arr[x.second] = rank++;
    }
}

int main(){

    int size;
    cout<<"Enter size of the array : ";
    cin>>size;

    int arr[size], i;
    cout<<"Enter elements in the array : ";
    for(i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The original array is : ";
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    // calling function
    change(arr, size);
    cout<<"\nThe elements in array after replacing : ";
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}