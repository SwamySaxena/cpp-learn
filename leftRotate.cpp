#include <iostream>
using namespace std;

void leftR(int arr[], int size){
    int i = 0;
    int temp = arr[0];
    for(i = 0; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}

int main(){
    int arr[] = {1,2,3,4,5};
    leftR(arr,5);
    for(int i =0; i<5; i++){
        cout<<arr[i];
    }
}