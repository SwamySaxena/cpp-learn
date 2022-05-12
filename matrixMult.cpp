#include <iostream>
using namespace std;

void mult(int arr1[][2], int row1,int col1, int arr2[][2], int row2, int col2, int result[][2]){
    for(int i = 0; i<row1; i++){
        for(int j = 0; j<col1; j++){
            result[i][j] = 0;
            for(int k = 0; k<row2;k++){
                result[i][j] = result[i][j] + arr1[i][k]*arr2[k][j];
            }
        }
    }
}


int main(){
    int arr1[][2] = {{1,2}, {5,7}};
    int arr2[][2] = {{10,20}, {-30,70}};
    int result[][2] = {{0,0}, {0,0}};
    mult(arr1,2,2,arr2,2,2,result);
    for(int i = 0;i<2; i++){
        for(int j =0; j<2; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}