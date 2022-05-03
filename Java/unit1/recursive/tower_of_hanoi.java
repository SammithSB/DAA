package Java.unit1.recursive;

public class tower_of_hanoi {
    static void hanoi(int n, char form, char to, char aux) {
        if (n == 1) {
            System.out.println("move disk 1 from " + form + " to " + to);
            return;
        } else {
            hanoi(n - 1, form, aux, to);
            System.out.println("move disk " + n + " from " + form + " to " + to);
            hanoi(n - 1, aux, to, form);
        }
    }

    public static void main(String[] args) {
        int n = 4;
        hanoi(n, 'A', 'C', 'B');
    }
}
