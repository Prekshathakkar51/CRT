// n = toatal no. of monkey
// k = no. of eatable bananaas by single monkey(monkey that jump down last may get less banana)
// j = num of eatable peanuts by single monkey(monkey that jump down last may get less banana)
// m = total no of bananas
// p = total no of peanuts
// return no.of monkeys left on branch
// 

// i/p = 
// 20
// 2
// 3
// 12
// 12
// o/p: Num of monkeys left on tree: 10
// order of inputs  => n,k,j,m,p
package TCS;
import java.util.Scanner;
public class monkey {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter total no. of monkeys: ");
        int n = in.nextInt();

        System.out.println("Enter no. of eatable bananas by single monkey: ");
        int k = in.nextInt();

        System.out.println("Enter eatable peanuts by single monkey: ");
        int j = in.nextInt();

        System.out.println("Enter total no of bananas: ");
        int m = in.nextInt();

        System.out.println("Enter total no of peanuts: ");
        int p = in.nextInt();

        // System.out.print("Num of monkeys left on tree:" );

        // for(int i = 1; i<=n; i++){
        //     if(m>0 && p>0){
        //         m = m-k;
                
        //     }else if(m == 0 && p>0){
        //         p = p-j;
        //     }
        //     else if(k>m && m != 0 || j>p && p !=0){
        //         System.out.println(i-2);
        //         break;
        //     }
        //     else{
        //         System.out.println(i-1);
        //         break;
        //     }

        int atebanana = 0;
        int atapeanuts = 0;

        if(n<0 && k<0 || j<0 || m<0 || p<0){
            System.out.println("INVALID INPUT");
        }
        else{
            if(k>0){
                atebanana = m/k;
            }
            if(j>0){
                atapeanuts = p/j;
            }
            n = n - atebanana - atapeanuts;
            System.out.println("Num of monkeys left on tree: " + n);
        }
            
        }
    
        // this soln works fine for the given input but when we have no.of bananas < k , for the last monkey, then the last monkey will eat that banana and go. 
        // so that condition can be if eatable item is not divisible by total item then the last monkey will be left less than the threshold of eatable item, now to cosider this case...



    }



    

