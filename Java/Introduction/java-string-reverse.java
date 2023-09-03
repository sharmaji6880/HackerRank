import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int n = s.length();
        int flag=0;
        for(int i=0;i<n/2;i++) {
            if(s.charAt(i)!=s.charAt(n-1-i)) {
                System.out.println("No");
                flag=1;
                break;
            }
        }
        if(flag==0) {
            System.out.println("Yes");
        }
    }
}
