package TCS;
import java.util.Scanner;
import java.util.Arrays;
public class sock_pair {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the number of socks: ");
        int n = in.nextInt();

        System.out.println("Enter the colors in the form of numbers as an array to the socks: ");
        int[] arr = new int[n];

        for(int a: arr){
            a = in.nextInt();
        }

        System.out.println("The number of pairs is : " + sockMerchant(arr, n));

    }


    static int sockMerchant(int[] arr, int n){
        Arrays.sort(arr);
        int pair = 0;
        int left = 0;
        for(int i = 0; i<n-1 ; i++){
            if(arr[i] == arr[i+1]){
                pair++;
                i = i+2;
            }
            else{
                left++;
            }
        }

        return pair;

    }
    
}

// 1 1 1 2 2 2 3 
