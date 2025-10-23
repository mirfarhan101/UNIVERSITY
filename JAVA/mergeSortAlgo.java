public class mergeSortAlgo {
    public static void merge(int arr[], int low, int mid, int high){
        int lSize = mid - low + 1;
        int rSize = high -mid;

        int lArr[] = new int[lSize];
        int rArr[] = new int[rSize];

        for(int i = 0; i < lSize; i++){
            lArr[i] = arr[low + i];
        }

        for(int i = 0; i < rSize; i++){
            rArr[i] = arr[mid + 1 + i];
        }
        int i = 0;
        int j = 0;
        int k = low;

        while (i < lSize && j < rSize) {
            if(lArr[i] < rArr[j]){
                arr[k++] = lArr[i++];
            }
            else{
                arr[k++] = rArr[j++];
            }
        }

        while (i < lSize) {
            arr[k++] = lArr[i++];
        }

        while (j < rSize) {
            arr[k++] = rArr[j++];
        }
    }

    public static void mergeSort(int arr[], int low, int high){
        if(low < high){
           int mid = (low + high)/2;

            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);

            merge(arr, low, mid, high);
        }
    }
    public static void main(String[] args) {
        int arr[] = {1,4,3,5,2};
        int low = 0;
        int high = 4;
        mergeSort(arr, low, high);
        for(int i : arr){
            System.out.print(i + " ");
        }
    }
}
