// menu

// Coffee

// Espresso Coffee
// Cappuccino Coffee
// Latte Coffee

// Tea

// Plain Tea
// Assam Tea 
// Ginger Tea 
// Cardamom Tea
// Masala Tea
// Lemon Tea
// Green Tea
// Organic Darjeeling Tea

// Soups

// Hot and Sour Soup
// Veg Corn Soup
// Tomato Soup
// Spicy Tomato Soup

// Beverages

// Hot Chocolate Drink
// Badam Drink
// Badam-Pista Drink

// main menu  = coffee, tea, soups, beverages  - enter first letter to select this
// sub menu - enter number
// Enter the first letter to select main menu:
// Welcome to CCD!
// Enjoy your {sub menu}!

package TCS;

import java.util.Scanner;

public class menu {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the first letter for main menu: ");
        char m = in.next().charAt(0);
        System.out.println("Enter the number: ");
        int n = in.nextInt();

        System.out.println("Welcome to CCD!");
        System.out.print("Enjoy your ");

        switch(m){
            case 'c': 
                switch(n){
                case 1: System.out.println("Espresso Coffee");
                break;
                case 2: System.out.println("Cappuccino Coffee");
                break;
                case 3: System.out.println("Latte Coffee");
                break;
                }
            break;

            case 't': 
                switch(n){
                case 1: System.out.println("Plain Tea");
                break;
                case 2: System.out.println("Assam Tea");
                break;
                case 3: System.out.println("Ginger Tea");
                break;
                case 4: System.out.println("Cardamom Tea");
                break;
                case 5: System.out.println("Masala Tea");
                break;
                case 6: System.out.println("Lemon Tea");
                break;
                case 7: System.out.println("Green Tea");
                break;
                case 8: System.out.println("Organic Darjeeling Tea");
                break;
            }
            break; 

            case 's': 
                switch(n){
                case 1: System.out.println("Hot and Sour Soup");
                break;
                case 2: System.out.println("Veg Corn Soup");
                break;
                case 3: System.out.println("Tomato Soup");
                break;
                case 4: System.out.println("Spicy Tomato Soup");
                break;
            }
            break; 

            case 'b': 
                switch(n){
                case 1: System.out.println("Hot Chocolate Drink");
                break;
                case 2: System.out.println("Badam Drink");
                break;
                case 3: System.out.println("Badam-Pista Drink");
                break;
            }
            break; 
        }



    }
}
