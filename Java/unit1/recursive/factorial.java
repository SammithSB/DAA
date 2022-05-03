package Java.unit1.recursive;

import java.util.Scanner;

public class factorial {
    static int fact(int n) {
        if (n == 0) {
            return 1;
        } else {
            return fact(n - 1) * n;
        }
    }

    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter non negative integer n: ");
        int n = ob.nextInt();
        ob.close();
        int f = fact(n);
        System.out.println(f);
    }

}
