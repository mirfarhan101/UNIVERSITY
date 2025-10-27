#include <iostream>
using namespace std;
int arr[10] = {5,1,2,7,3,6,9,10,8,4};
int len = 10;

void print(){
    cout << "************************" << endl;
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << "\n************************" << endl;
        return;
}


void selectionSort(){
int min = 0;
cout << "UNSORTED ARRAY: ";
print();

for(int i = 0; i < len-1; i++){
    min = i;
    for(int j = i + 1; j < len; j++){
        if(arr[min] > arr[j]){
            min = j;
        }
    }
    swap(arr[min],arr[i]);
}
print();

}

int main(){

selectionSort();

return 0;
}
