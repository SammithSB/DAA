package Java.unit1;

public class selection_sort {
    void sort(int arr[]) {
        int size = arr.length;
        for (int i = 0; i < size - 1; i++) {
            int min = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    public static void main(String args[]) {
        selection_sort ob = new selection_sort();
        int arr[] = { 12, 1, 45, 90, 14, 35, 89, 16, 20, 29 };
        ob.sort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

}