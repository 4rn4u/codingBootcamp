package week1;

import java.util.Scanner;
import java.lang.*;

public class pC {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int length1 = sc.nextInt();
        String[] numarr = new String[length1 - 1];
        numarr = sc.nextLine().split(" ");
        int[] num = new int[numarr.length];
        for (int i = 0; i < length1 - 1; ++i) {
            num[i] = Integer.parseInt(numarr[i]);
            num[i] = num[i] * 2;
        }
        System.out.println(num);
        sc.nextLine();

        int length2 = sc.nextInt();
        String[] arr = new String[length2 - 1];
        arr = sc.nextLine().split(" ");
        for (int i = 0; i < (length2 - 1); ++i) {
            if (arr[i] == arr[i].toLowerCase()) {
                arr[i].toUpperCase();
            }
        }
        System.out.println(arr);
        sc.close();

        String VOWELS = "aeiouAEIOU";

    }
}
