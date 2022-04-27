
import java.util.*;
import java.io.*;

public class Main {
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

    static void sort(int[] a) {
        ArrayList<Integer> l = new ArrayList<>();
        for (int i : a) l.add(i);
        Collections.sort(l);
        for (int i = 0; i < a.length; i++) a[i] = l.get(i);
    }


    public static void main(String[] args) {
        try {
            FastReader in = new FastReader();
            FastWriter out = new FastWriter();
            //int t=1;
            int t = in.nextInt();
            while (t-- > 0) {
                int n= in.nextInt();
                int temp=0;
                long ans=0;
                int[] a1=new int[2*n];
                for (int  i=0; i<2*n;i++) {a1[i]= in.nextInt();}
                for (int  i=0; i<n;i++){
                    if(a1[i]>a1[i+n]){
                        temp = a1[i];
                        a1[i] = a1[i+n];
                        a1[i+n] = temp;
                    }
                }
                for(int j = 0; j < n-1; j++){
                    ans+=Math.abs(a1[j]-a1[j+1])+Math.abs(a1[j+n]-a1[j+n+1]);
                }
                System.out.println(ans);;
            }
            out.close();
        } catch (Exception e) {
            return;
        }
    }
}