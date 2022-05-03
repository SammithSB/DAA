package Java.unit2.brute_force;

public class string_match {
    public static void search(String txt, String pat) {
        int M = pat.length();
        int N = txt.length();

        for (int i = 0; i <= N - M; i++) {

            int j;

            for (j = 0; j < M; j++)
                if (txt.charAt(i + j) != pat.charAt(j))
                    break;

            if (j == M)
                System.out.println("Pattern found at index " + i);

        }
    }

    public static void main(String[] args) {
        String txt = "AABAACAADAABAAABAA";
        String pat = "AABA";
        search(txt, pat);
    }
}
