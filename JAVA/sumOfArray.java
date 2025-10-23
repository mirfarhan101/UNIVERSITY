public class sumOfArray{
    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};
        int sum = 0;
        for(int x : arr){
            sum += x;
        }
        System.out.println("The sum of the elements of the Array is: " + sum);
    }
}