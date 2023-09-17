import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int count=0;
       String str = "";
       while(sc.hasNext()) {
           str = sc.nextLine();
           System.out.println(++count + " " + str);
       }
       sc.close();
    }
}
