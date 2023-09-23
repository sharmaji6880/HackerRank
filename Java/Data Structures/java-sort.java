import java.util.*;

class Student{
	private int id;
	private String fname;
	private double cgpa;
	public Student(int id, String fname, double cgpa) {
		super();
		this.id = id;
		this.fname = fname;
		this.cgpa = cgpa;
	}
	public int getId() {
		return id;
	}
	public String getFname() {
		return fname;
	}
	public double getCgpa() {
		return cgpa;
	}
}

//Complete the code
public class Solution
{
    public  static boolean cmp(Student s1,Student s2) {
        if(s1.getCgpa() < s2.getCgpa()) {
            return false;
        }else if(s1.getCgpa() > s2.getCgpa()) {
            return true;
        }else {
           if( s1.getFname().compareTo(s2.getFname()) < 0 ) {
               return true;
           }else if( s1.getFname().compareTo(s2.getFname()) > 0) {
               return false;
           }else {
               if(s1.getId() > s2.getId()) {
                   return false;
               }
           }
        }
        return true;
    }
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		
		List<Student> studentList = new ArrayList<Student>();
		while(testCases>0){
			int id = in.nextInt();
			String fname = in.next();
			double cgpa = in.nextDouble();
			
			Student st = new Student(id, fname, cgpa);
			studentList.add(st);
			
			testCases--;
		}
        in.close();
        int n=studentList.size();
        for(int i=1;i<n;i++) {
            for(int j=0;j<=n-1-i;j++) {
                if(cmp(studentList.get(j),studentList.get(j+1)) == true) {
                    continue;
                }else {
                    Student temp = studentList.get(j);
                    studentList.set(j,studentList.get(j+1));
                    studentList.set(j+1,temp);
                }
            }
        }
      	for(Student st: studentList){
			System.out.println(st.getFname());
		}
	}
}



