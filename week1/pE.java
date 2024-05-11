package week1;

import java.util.*;;

public class pE {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ac = sc.nextInt();// 5
        int tc = sc.nextInt();// 7
        int nu = sc.nextInt();// 13
        int ret = 0;
        ret = (ac * 5) + (tc * 7) + (nu * 13);
        if (nu != 0) {
            ret = ret - 13;
        } else if (tc != 0) {
            ret = ret - 7;
        } else if (ac != 0) {
            ret = ret - 5;
        }
        System.out.println(ret);
        sc.close();
    }
}
