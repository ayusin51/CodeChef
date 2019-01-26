import java.util.*;

public class truedare {

    public static void main(String[] args) {

        int tc;
        Scanner sc = new Scanner(System.in);
        tc = sc.nextInt();
        while(tc > 0) {

            tc--;
            int t1, t2, d1, d2;
            t1 = sc.nextInt();
            Set<Integer> s = new HashSet<>();
            for(int i = 0; i < t1; i++) {

                int t = sc.nextInt();
                s.add(t);
            }

            int ans = 1;

            d1 = sc.nextInt();
            for(int i = 0; i < d1; i++) {

                int t = sc.nextInt();
                s.add(t);
//                if(s.contains(t) == false) ans = 0;
            }

            t2 = sc.nextInt();
            for(int i = 0; i < t2; i++) {

                int t = sc.nextInt();
                if(s.contains(t) == false) ans = 0;
//                s.add(t);
            }

            d2 = sc.nextInt();
            for(int i = 0; i < d2; i++) {

                int t = sc.nextInt();
                if(s.contains(t) == false) ans = 0;
            }

            if(ans == 0) System.out.println("no");
            else System.out.println("yes");
        }
    }
}
