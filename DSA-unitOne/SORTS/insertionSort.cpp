#include <iostream>
using namespace std;

void insertionSort(int arr[], int len){

cout << "\n************************************************\n";
cout << "ORGINAL ARRAY : ";

for(int i = 0; i < len; i++){
    cout << arr[i] << " ";
}

int current;
int previous;

for(int i = 1; i < len; i++){
   current = arr[i];
   previous = i -1;

   while(previous >= 0 && arr[previous] > current ){
        arr[previous + 1] = arr[previous];
        previous--;
   }

   arr[previous + 1] = current;
   
}   

cout << "\nSORTED ARRAY : ";

for(int i = 0; i < len; i++){
    cout << arr[i] << " ";
}

cout << "\n************************************************\n" << endl;

}

int main(){

int arr[10] = {1,9,2,8,3,7,4,6,5,10};
int len = sizeof(arr)/sizeof(arr[0]);

insertionSort(arr, len);


return 0;
}