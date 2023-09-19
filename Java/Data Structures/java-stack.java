import java.util.*;
class Solution{
	
	public static void main(String []argh)
	{
		Scanner sc = new Scanner(System.in);
		
		while (sc.hasNext()) {
			String input=sc.next();
            Stack<Character> s = new Stack<Character>();
            for(int i=0;i<input.length();i++) {
                char x = input.charAt(i);
                if(x=='[' || x=='{' || x=='(') {
                    s.push(x);
                }else {
                    if(s.empty()) {
                        s.push('{');
                        break;
                    }
                    if(x==']' && !s.empty() && s.peek()=='[') {
                        s.pop();
                    }else if(x=='}' && !s.empty() && s.peek()=='{') {
                        s.pop();
                    }else if(x==')' && !s.empty() && s.peek()=='(') {
                        s.pop();
                    }
                }
            }
            if(s.empty()) {
                System.out.println("true");
            }else {
                System.out.println("false");
            }
		}
        sc.close();
		
	}
}



