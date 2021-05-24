import java.util.Scanner;
public class PrimeNumber {
    public static void main(String[] args) {
        int n, i, f=0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Please Enter a number:");
        n = sc.nextInt();

        for(i=1; i<=n; i++) {
            if(n%i==0) {
                f++;
            }
        }
        if(f==2) {
            System.out.println(n + " is a prime number.");
        }
        else {
            System.out.println(n + " is a composite number .");
        }
        sc.close();
    }
}