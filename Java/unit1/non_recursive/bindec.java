package Java.unit1.non_recursive;

import java.util.Scanner;

public class bindec {
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        int n = ob.nextInt();
        ob.close();
        int c = 1;
        while (n > 1) {
            c += 1;
            n /= 2;
        }
        System.out.println(c);
    }

}
