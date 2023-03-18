#include<iostream>
using namespace std;

//printing set bits of an integer

int main(){
    int x=15;
    int count=0;
    int i=0;
    while(i<32){
        int mask=1<<i;
        if(x&mask){
            count++;
        }
        i++;
    }
  cout<<count;

}