import java.util.*;

class BestTimeToBuyAndSellStock {

	static int maxProfit(int[] arr) {
		int low = arr[0], high = -1, maxProf = 0;
		for (int i=1; i<arr.length; i++) {
			if (arr[i] < low) {
				low = arr[i];
				high = -1;
			} else if(arr[i] > high) {
				high = arr[i];
				int temp = high - low;
				if (temp > maxProf) {
					maxProf = temp;
				}
			}
		}
		return maxProf;
	}
	public static void main(String[] args) {
		int n, num;
		int[] arr;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of days\n");
		n=sc.nextInt();
		System.out.println();
		arr = new int[n];
		for(int i=0; i<n; i++) {
			num=sc.nextInt();
			//System.out.println();
			arr[i]=num;
		}
		System.out.println(maxProfit(arr));
/*		for(int i=0; i<n; i++) {
			System.out.print(arr[i]+" ");
		}*/
	}
}
