import java.util.Scanner;

public class HelloWorld {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        String name;
        System.out.println("Enter your name: ");
        name = scan.next();
        System.out.println("Hello " + name + "!!");
        scan.close();
    }
}
