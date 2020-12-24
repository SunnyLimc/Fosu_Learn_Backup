
public class model {
    private static int[] id, sz;
    private static boolean[] stat;
    private static int N = 15000;

    public void init() {
        // init array
        id = new int[N * N + 1];
        sz = new int[N * N + 1];
        stat = new boolean[N * N + 1];
        for (int i = 1; i <= N * N; i++) {
            if (i <= N && i >= 1)
                id[i] = 1;
            else if (i >= N * N - (N - 1) && i <= N * N)
                id[i] = N * N;
            else
                id[i] = i;
            sz[i] = 1;
            stat[i] = false;
        }

    }

    private int root(int i) {
        while (id[i] != i) {
            id[i] = id[id[i]];
            i = id[i];
        }
        return i;
    }

    public boolean connected(int p, int q) {
        return root(p) == root(q);
    }

    public void union(int p, int q) {
        // System.out.print(p + " " + q + "\n"); //show point
        int i = root(p);
        int j = root(q);
        if (sz[i] >= sz[j]) {
            id[j] = i;
            sz[i] += sz[j];
        } else {
            id[i] = j;
            sz[j] += sz[i];
        } // or try to improve the tree
    }

    public void combine(int p) {
        if (p != N * N && p % N != 0)
            if (stat[p + 1])
                union(p, p + 1);
        if (p != 1 && p % N != 1)
            if (stat[p - 1])
                union(p, p - 1);
        if (p + N <= (N * N))
            if (stat[p + N])
                union(p, p + N);
        if (p - N >= 1)
            if (stat[p - N])
                union(p, p - N);
    }

    public boolean check() {
        if (connected(1, N * N))
            return true;
        return false;
    }

    public static void main(String[] arg) {
        long startTime = System.currentTimeMillis();
        model un = new model(); // init the function
        int times = 0;
        un.init();

        while (true) {
            if (un.check())
                break;
            int num = 1 + (int) (Math.random() * ((N * N) - 1 + 1));// random a number (N*N is max, 1 is min)
            if (!stat[num]) {
                stat[num] = true;
                un.combine(num);
                times++;
            } else
                continue;
        }

        {
            for (int i = 1; i <= N * N; i++) {
                if (stat[i]) {
                    System.out.printf("\033[32;1m%-7c\033[0m", 'o');
                } else
                    System.out.printf("%-7c", 'x');
                if (i % N == 0)
                    System.out.print("\n");
            }
            System.out.print("\n");
            for (int i = 1; i <= N * N; i++) {
                System.out.printf("%-2d", i);
                System.out.printf("\033[32;1m %-3d\033[0m ", id[i]);
                if (i % N == 0)
                    System.out.print("\n");
            }
            System.out.print("\n");
            for (int i = 1; i <= N * N; i++) {
                System.out.printf("%-2d", i);
                System.out.printf("\033[32;1m %-3d\033[0m ", un.root(i));
                if (i % N == 0)
                    System.out.print("\n");
            }
            System.out.print("\n");
            System.out.println(id[1] + " " + id[N * N] + "\n");
        } // SHOW ROUTE
        System.out.println((double) times / (N * N));
        long endTime = System.currentTimeMillis();
        System.out.println("Time used: " + ((endTime - startTime) / 1000) + "s");
    }
}
