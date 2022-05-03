package Java.unit3;

public class insertionSort {
    static void insertion(int a[]) {
        int n = a.length;
        int i, j, insert;
        for (i = 1; i < n; i++) {
            insert = a[i];
            j = i - 1;
            while (j >= 0 && a[j] > insert) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = insert;
        }
    }

    public static void main(String[] args) {
        int arr[] = { 12, 11, 13, 5, 6 };
        insertionSort.insertion(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
