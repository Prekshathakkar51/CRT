// Enter the no. of elements: 
// 7
// Enter the  elements: 
// 4 3 7 8 6 2 1 
// o/p :4 7 8 6 2 3 1 
// expected o/p : 3 7 4 8 2 6 1

// not working for thr above one!

// Enter the no. of elements:
// 4
// Enter the  elements:
// 1 4 3 2
// 1 4 2 3

package TCS;
import java.util.Scanner;
// import java.util.Arrays;

public class zigzag {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the no. of elements: ");
        int n = in.nextInt();

        int arr[] = new int[n];
        System.out.println("Enter the  elements: ");
        for(int i = 0; i<n; i++){
            arr[i] = in.nextInt();
        }

        // if(arr[0]> arr[1]){
        //     int temp = arr[0];
        //     arr[0] =  arr[1];
        //     arr[1] = temp;
        // }
        for(int i = 1; i<n-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                arr[i] = arr[i];
                
            }
            else{
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }

        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
