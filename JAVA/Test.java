import java.util.Scanner;
public class Test {
    public static class Stack{
        int[] arr;
        int top;
        int MAX = 4;

        Stack(){
            top = -1;
            arr = new int[5];
        }

        public void push(){
            if(top == MAX){
                System.out.println("Stack Overflow\n");
            }else{
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter Value: ");
                int num = sc.nextInt();
                arr[++top] = num;
                System.out.println(num + " was pushed to the stack.\n");
                sc.close();
            }
        }

    }
    public static void main(String[] args){
    Stack s1 = new Stack();
    s1.push();
    }
    }
