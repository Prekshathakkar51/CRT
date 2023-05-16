// ring route of bus
// n stops,, ,n paths
// path = [800,600,750,900,1400,1200,1100,1500]

// fare = dist from source to desti 
// if d = 1000 m, fare = 5 INR

// fraction value is ceiled 
// if for d = 900 fare = 4.5 , then fare = 5

// n = 8
// BusStops = ["TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"]

// i/p : source , destination is string of 1st 2 chars of the station name

// getFare(String Source, String Destination)

// return travel fare

// i/p : 
// ca
// ca
// o/p : INVALID INPUT

// i/p : 
// NI
// HA
// o/p : 
// 23.0 INR

// input should not be case sensitive

package TCS;
import java.util.Scanner;
public class bus {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the source: ");
        String source = in.nextLine();
        System.out.println("Enter the destination: ");
        String desti = in.nextLine();



        
    }
    
}
