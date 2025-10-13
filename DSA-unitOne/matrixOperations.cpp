#include <iostream>
using namespace std;

int matA[3][3] = {{1,2,3},
                  {4,5,6},
                  {7,8,9}};

int matB[3][3] = {{1,2,3},
                  {4,5,6},
                  {7,8,9}};

int matR[3][3];

int size = 3;

void addition(){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matR[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void substraction(){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matR[i][j] = matA[i][j] - matB[i][j];
        }
    }
}

void print(int arr[3][3]){
    cout << "************************" << endl;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "************************" << endl;
}

int main(){

cout << "MATRIX A: "<< endl;
print(matA);
cout << "MATRIX B: " << endl;
print(matB);
addition();
cout << "RESULT MATRIX: " << endl;
print(matR);
substraction();
cout << "RESULT MATRIX: " << endl;
print(matR);

return 0;
}