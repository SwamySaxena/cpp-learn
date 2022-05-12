#include <iostream>
using namespace std;

double avgr(double arr[] , int size){
    double sum = 0;
    for(int i = 0; i<size; i++){
        sum+=arr[i];
    }
    return sum/size;
}

int main(){
    double arr[] = {10.5,11,20.5,30};
    cout << avgr(arr,4);
}