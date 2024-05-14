package week1;

import java.util.*;;

public class pE {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Long ac = sc.nextLong();// 5
        Long tc = sc.nextLong();// 7
        Long nu = sc.nextLong();// 13
        Long ret;
        ret = (ac * 5) + (tc * 7) + (nu * 13);
        if (nu != 0) {
            ret = ret - 13;
        } else if (tc != 0) {
            ret = ret - 7;
        } else if (ac != 0) {
            ret = ret - 5; 
        } else {
            System.out.println("0");
        }
        System.out.println(ret);
        sc.close();
    }
}
