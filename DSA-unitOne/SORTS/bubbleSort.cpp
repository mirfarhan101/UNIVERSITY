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


void bubbleSort(){
cout << "UNSORTED ARRAY: ";
print();

for(int i = 0; i < len-1; i++){
    for(int j = 0; j < len-i-1; j++){
        if(arr[j+1] < arr[j]){
            swap(arr[j],arr[j+1]);
        }
    }
}
print();

}

int main(){

bubbleSort();

return 0;
}