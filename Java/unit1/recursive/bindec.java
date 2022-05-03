package Java.unit1.recursive;

import java.util.Scanner;

public class bindec {
    static int binrec(int n) {
        if (n == 1) {
            return 1;
        } else {
            return binrec(n / 2) + 1;
        }
    }

    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        int n = ob.nextInt();
        ob.close();
        int res = binrec(n);
        System.out.println(res);
    }
}
