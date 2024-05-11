package week1;

import java.util.*;

public class pF {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int min = sc.nextInt();
        int hours = 00;
        int mins = 00;
        mins = min % 60;
        hours = 12 + min / 60;
        if (hours > 24)
            hours = hours % 24;
        System.out.printf(hours + ":" + "%02d%n", mins);
        sc.close();
    }
}
