#include<bits/stdc++.h>
using namespace std;
void insertionSort(int *arr , int num){
    for(int i=0 ;i<num ;i++){
        int pos = i ;
        while(pos>0  &&  arr+pos < arr+(pos-1)){
            
            swap(arr[pos] , arr[pos-1]);
            pos--;
        }
    }
}
int main(){
    // INSERTION SORT
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    insertionSort(arr,10) ;
    cout<<"sorted array : ";
    for(int i=0 ;i<10 ;i++){
        cout<<arr[i]<<" ";
    }
}