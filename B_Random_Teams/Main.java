/*
 _______  _______  _______  _______           _______  _______          
(       )(  ____ \(  ____ )(  ____ \|\     /|(  ____ )(  ___  )|\     /|
| () () || (    \/| (    )|| (    \/| )   ( || (    )|| (   ) |( \   / )
| || || || (__    | (____)|| |      | |   | || (____)|| (___) | \ (_) / 
| |(_)| ||  __)   |     __)| |      | |   | ||     __)|  ___  |  \   /  
| |   | || (      | (\ (   | |      | |   | || (\ (   | (   ) |   ) (   
| )   ( || (____/\| ) \ \__| (____/\| (___) || ) \ \__| )   ( |   | |   
|/     \|(_______/|/   \__/(_______/(_______)|/   \__/|/     \|   \_/   
                                                                        
 */
//16/04/22 - Saturday

import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        try {
            int t=1;
            //int t = in.nextInt();
            while (t-- > 0) {
                solve();
            }
            out.close();
        } catch (Exception ignored) {
        }
    }

    static void solve() throws IOException {
        long n =in.nextLong();long teams  = in.nextLong();long min=0;long s=0;
        if(n%teams!=1 && n%teams!=2 && n%teams!=0 ) s= nCr((n % teams), 2);

        //calculate minimum
        if(teams==1) min=nCr(n,2);
        if(2*teams< n && teams!=1 && n%teams!=0) {
            min=(teams-1) + nCr(n-(2*(teams-1)),2);
        }
        else if(2*teams< n && teams!=1 && n%teams==0) {
            min=2* nCr(n/2,2);
        }
        else if(2*teams>n && teams!=1){
            min=(teams-1) + s;
        }else if(2*teams==n && teams!=1){
            min=teams;
        }
        //calculate maxima
        long max= nCr(n-teams+1,2);
        out.println(min + " " + max);
    }

    //nCr calculator
    static long nCr(long n, long r)
    {
        return fact(n) / (fact(r) *
                fact(n - r));
    }

    // Returns factorial of n
    static long fact(long n)
    {
        long res = 1;
        for (long i = 2; i <= n; i++)
            res = res * i;
        return res;
    }

    static FastReader in = new FastReader();
    static FastWriter out = new FastWriter();

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine().trim();
            } catch (Exception e) {
                e.printStackTrace();
            }
            return str;
        }

        public long[] nextlongArray(int n) throws IOException {
            long[] a = new long[n];
            for (int i = 0; i < n; i++)
                a[i] = nextLong();
            return a;
        }

        public Long[] nextLongArray(int n) throws IOException {
            Long[] a = new Long[n];
            for (int i = 0; i < n; i++)
                a[i] = nextLong();
            return a;
        }

        public int[] nextIntArray(int n) throws IOException {
            int[] a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = nextInt();
            return a;
        }

        public Integer[] nextIntegerArray(int n) throws IOException {
            Integer[] a = new Integer[n];
            for (int i = 0; i < n; i++)
                a[i] = nextInt();
            return a;
        }
    }

    static class FastWriter {
        private final BufferedWriter bw;

        public FastWriter() {
            this.bw = new BufferedWriter(new OutputStreamWriter(System.out));
        }

        public void print(Object object) throws IOException {
            bw.append("" + object);
        }

        public void println(Object object) throws IOException {
            print(object);
            bw.append("\n");
        }

        public void close() throws IOException {
            bw.close();
        }
    }

    static long mod = 1000000007;
    static Random rn = new Random();
}