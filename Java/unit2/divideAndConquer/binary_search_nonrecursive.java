package Java.unit2.divideAndConquer;

public class binary_search_nonrecursive {
    static int binsearch(int a[], int key, int low, int high) {
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == key) {
                return mid;
            } else if (a[mid] > key) {
                high = mid - 1;

            } else {
                low = mid + 1;
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
