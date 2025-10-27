#include <iostream>
using namespace std;
 
int arr[3][3] = {{0,1,0},
                 {1,0,0},
                 {0,0,1}};

void print(){
    cout << "ROW    COLUMN  VALUE\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] != 0){
                cout << " "<< i+1 <<"        " << j+1 <<"      " << arr[i][j] << endl;
            }
           
        }
    }
}

int main(){
print();
return 0;
}