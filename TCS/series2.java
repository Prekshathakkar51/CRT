// Series - 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187....
// odd terms = geometric series - 3^n ; n-0 to n
// even terms = geometric series - 2^n ; n- 0 to n

package TCS;
import java.util.Scanner;
public class series2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        int[] arr = new int[n];

        for(int i = 0; i<n; i++){
            if(i%2 ==0){
                arr[i] = (int)Math.pow(2,i/2);
            }
            else{
                arr[i] = (int)Math.pow(3,i/2);
            }
        }

        System.out.println(arr[n-1]);




    }
}
