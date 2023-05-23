package TCS;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
public class commission {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String par = scanner.next();
        String x = scanner.next();

        if (x.equals("N")) {
            System.out.println("TOTAL MEMBERS: 1");
            System.out.println("COMMISSION DETAILS");
            System.out.println(par + ": 250 INR");
        } else {
            String child = scanner.next();
            List<String> v = new ArrayList<>();
            StringBuilder temp = new StringBuilder();

            for (int i = 0; i < child.length(); i++) {
                if (child.charAt(i) == ',') {
                    v.add(temp.toString());
                    temp.setLength(0);
                } else if (child.charAt(i) != ' ') {
                    temp.append(child.charAt(i));
                }
            }
            v.add(temp.toString());

            System.out.println("TOTAL MEMBERS: " + (v.size() + 1));
            System.out.println("COMMISSION DETAILS");
            System.out.println(par + ": " + v.size() * 500 + " INR");

            for (String a : v) {
                System.out.println(a + ": 250 INR");
            }
        }
    }
}
