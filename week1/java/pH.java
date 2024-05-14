package week1;

import java.util.*;

public class pH {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        double[] arr = sc.nextLine().split(" ").parseDouble();
        double sum = 0.0;
        double ret = sum / num;
        System.out.println(ret);
        sc.close();
    }
}
