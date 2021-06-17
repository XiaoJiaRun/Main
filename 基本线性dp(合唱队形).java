/*
https://www.luogu.com.cn/problem/P1091
*/
package one;
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int [100000];
        for(int i=1;i<=n;i++){
            a[i]=sc.nextInt();
        }
        int [][] f=new int [2][1000];
        a[0]=0;
        for(int i=1;i<= n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j]){
                    f[0][i]=Math.max(f[0][i],f[0][j]+1);
                }
            }
        }
        a[n+1]=0;
        for(int i=n;i>0;i--){
            for(int j=n+1;j>i;j--) {
                if(a[i]>a[j]) {
                    f[1][i]=Math.max(f[1][i],f[1][j]+1);
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++) {
            //System.out.println(f[0][i]+" "+f[1][i]);
            ans=Math.max(f[0][i]+f[1][i]-1,ans);
        }
        System.out.println(n-ans);
    }
}