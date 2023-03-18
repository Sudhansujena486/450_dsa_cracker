#include<iostream>
using namespace std;

void sort(int arr[],int s){
    int start=0;
    int end= s-1;

   while(start<end){
    while(arr[start]<0&&start<end){
        start++;
    }
    while(arr[end]>=0&& start<end){
        end--;

    }
    if(start<end){
        swap(arr[start],arr[end]);
    }
   }
   
}

int main(){

    int arr[]={-2,-3,0,9,2,-3,-4,-3};
    int size =sizeof(arr)/sizeof(int);
    sort(arr,size);
   for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}