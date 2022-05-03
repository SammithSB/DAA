package Java.unit1;

import java.util.Scanner;

public class sieve {
    public static void main(String args[]) {
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter number of terms: ");
        int n = ob.nextInt();
        ob.close();
        int[] arr = new int[n + 1];
        for (int i = 2; i <= n; i++) {
            arr[i] = i;
        }
        for (int i = 2; i * i <= n; i++) {
            if (arr[i] != 0) {
                int j = i * i;
                while (j <= n) {
                    arr[j] = 0;
                    j = j + i;
                }
            }
        }
        for (int i = 0; i <= n; i++) {
            if (arr[i] != 0) {
                System.out.print(arr[i] + " ");
            }
        }

    }
}
