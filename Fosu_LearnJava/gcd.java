//最大公约数
//欧几里得
public class gcd {
    public static int gcdf(int p, int q) {
        if (q == 0)
            return p;
        int r = p % q;
        return gcdf(q, r);
    }

    public static void main() {
        int a;
        a.getClass().getName();
    }
}
