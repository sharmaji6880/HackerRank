import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        char arr1[] = a.toUpperCase().toCharArray();
        char arr2[] = b.toUpperCase().toCharArray();
        java.util.Arrays.sort(arr1);
        java.util.Arrays.sort(arr2);
        
        if(java.util.Arrays.equals(arr1,arr2)) {
            return true;
        }
        return false;
    }
    

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
