import java.util.*;
public class PascalTriangle{

	static ArrayList<ArrayList<Integer>> createPascalTriangle(int n) {
		ArrayList<ArrayList<Integer>> arr = new ArrayList<ArrayList<Integer>> ();
		for(int i = 0; i<= n; i++) {
			ArrayList<Integer> temp = new ArrayList<Integer>();
			for (int j =0; j<= i; j++) {
				if ( j == 0 || j == i) {
					temp.add(1);
				} else {
					temp.add(arr.get(i-1).get(j-1) + arr.get(i-1).get(j));
				}
			}
			arr.add(new ArrayList<Integer>(temp));
		}
		return arr;
	}

	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the length of the triangle");
		n = sc.nextInt();
		List<ArrayList<Integer>> arr = new ArrayList<ArrayList<Integer>>();
		arr = createPascalTriangle(n);

		for(int i=0 ; i<= n; i++) {
			for(int j =0 ; j <= i; j++) {
				System.out.print(arr.get(i).get(j)+" ");
			}
			System.out.println();			
		}
	}
}
