package Java.unit1.non_recursive;

public class max_element {
    public static void main(String[] args) {
        int arr[] = { 12, 1, 45, 90, 14, 35, 89, 16, 20, 29 };
        int maxval = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > maxval) {
                maxval = arr[i];
            }
        }
        System.out.println(maxval);
    }

}
