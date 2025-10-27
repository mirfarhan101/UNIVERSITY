#include <iostream>
using namespace std;

int arr[10] = {5,1,2,7,3,6,9,10,8,4};
int len = 10;
int low = 0;
int high = 9;

int pivot(int arr[], int low, int high){
    int i =low -1;
    int pivot = arr[high];

    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){

    int pi = pivot(arr, low, high);

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);

    }
}

void print(){
    cout << "************************" << endl;
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << "\n************************" << endl;
        return;
}


int main(){
cout << "UNSORTED ARRAY: "<< endl;
print();
quickSort(arr, low, high);
cout << "SORTED ARRAY: "<< endl;
print();

return 0;
}