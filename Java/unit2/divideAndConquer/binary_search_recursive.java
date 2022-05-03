package Java.unit2.divideAndConquer;

public class binary_search_recursive {
    static int binsearch(int a[], int key, int low, int high) {
        if (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == key) {
                return mid;
            } else if (a[mid] > key) {
                return binsearch(a, key, low, mid - 1);

            } else {
                return binsearch(a, key, mid + 1, high);
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int a[] = { 11, 25, 39, 44, 59, 67, 79, 98 };
        int ans = binsearch(a, 79, 0, 7);
        System.out.println("key is present at index " + ans);
    }
}
