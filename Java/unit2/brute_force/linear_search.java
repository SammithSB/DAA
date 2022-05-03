package Java.unit2.brute_force;

public class linear_search {
    static void linear(int a[], int n, int key) {
        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                System.out.println(key + " is found at index " + i);
                return;
            }
        }
        System.out.println("%d is not found");
    }

    public static void main(String[] args) {
        int a[] = { 1, 2, 3, 5, 9, 10, 14, 18 };
        int n = a.length;
        linear(a, n, 14);
    }
}
