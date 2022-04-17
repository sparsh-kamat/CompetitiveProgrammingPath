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

import java.lang.reflect.Array;
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
        String s= in.nextLine();
        ArrayList<Character> a = new ArrayList<Character>();
        ArrayList<Character> b = new ArrayList<Character>();
        ArrayList<Character> c = new ArrayList<Character>();
        for (int i = 0; i <s.length(); i++) {
            if(Character.compare(s.charAt(i), '1')==0){
                a.add(s.charAt(i));
            }
            if(Character.compare(s.charAt(i), '2')==0){
                b.add(s.charAt(i));
            }
            if(Character.compare(s.charAt(i), '3')==0){
                c.add(s.charAt(i));
            }
        }
        a.addAll(b);
        a.addAll(c);
        for (int i = 0, aSize = a.size(); i < aSize; i++) {
            Character character = a.get(i);
            if (i != aSize - 1) {
                out.print(character + "+");
            }else out.print(character);
        }
    }

    static FastReader in = new FastReader();
    static FastWriter out = new FastWriter();
    static void sort(int[] a) {
            ArrayList<Integer> l = new ArrayList<>();
            for (int i : a) l.add(i);
            Collections.sort(l);
            for (int i = 0; i < a.length; i++) a[i] = l.get(i);
        }
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