package Java.unit1.non_recursive;

public class matrix_multiplication {
    static int n = 2;

    static void mult(int A[][], int B[][], int C[][]) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                C[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }
    }

    public static void main(String[] args) {
        int A[][] = { { 1, 2 }, { 3, 4 } };
        int B[][] = { { 1, 1 }, { 1, 1 } };
        int C[][] = new int[n][n];
        mult(A, B, C);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(C[i][j] + " ");
            }
            System.out.println();
        }
    }
}
