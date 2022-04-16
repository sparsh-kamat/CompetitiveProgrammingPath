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
        int n= in.nextInt();
        int sindex = 0,nindex=0;
        int[] arr= in.nextIntArray(n);
        int[] arrcpy1= Arrays.copyOf(arr,n);
        sort(arrcpy1);
        int[] arrcpy= Arrays.copyOf(arr,n);
        for (int i = 0; i <n-1; i++) {
            if (arr[i] > arr[i + 1])
            {
                sindex = i;
                break;
            }
        }
        for (int j = sindex; j < n-1; j++) {
            if (arr[j] < arr[j + 1])
            {
                nindex = j;
                break;
            }
            if(j==n-2) nindex = n-1;
        }
        sw(arr,sindex,nindex);
        if (Arrays.equals(arr, arrcpy1)){
            out.println("yes");
            String s= String.format("%d %d",sindex+1,nindex+1);
            out.println(s);
        }else{
            out.println("no");
        }
    }

    static void sw(int[] l,int i,int j)
    {
        for(; i<=j;i++, j--)
        {
            int temp = l[i];
            l[i] = l[j];
            l[j] = temp;
        }
    }
    static void sort(int[] a) {
        ArrayList<Integer> l = new ArrayList<>();
        for (int i : a) l.add(i);
        Collections.sort(l);
        for (int i = 0; i < a.length; i++) a[i] = l.get(i);
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