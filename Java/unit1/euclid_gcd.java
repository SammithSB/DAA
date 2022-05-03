package Java.unit1;

public class euclid_gcd {

    public static void main(String args[]) {
        int a = 24, b = 12;
        if (a < b) {
            a = a + b;
            b = a - b;
            a = a - b;
        }
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;

        }
        System.out.println(a);
    }

}
