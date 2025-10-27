#include <iostream>
using namespace std;

int matA[3][2] = {{1,2},
                  {3,4},
                  {5,6}};

int matB[2][3] = {{1,2,3},
                  {4,5,6}};

int matR[3][3];

void multiplication(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++){
                matR[i][j] +=  matA[i][k] * matB[k][j];
            }
        }
    }
}

void print(int arr[3][3]){
    cout << "************************" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "************************" << endl;
}

int main(){

multiplication();
cout << "************************" << endl;
cout << "RESULT MATRIX: " << endl;
print(matR);

return 0;
}