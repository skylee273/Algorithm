package BackJoon;

import java.util.Scanner;


public class BackJoon_11046 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int[] arr = new int[num+1];
		boolean [][] DP = new boolean[num+1][num+1];
		
		for(int i = 1; i <= num; ++i) {
			arr[i] = sc.nextInt();
		}
		
		for(int i = 1; i <= num; ++i) {
			DP[i][i] = true;
		}
		
		// �ٷ� �پ��ִ� ��� ó�� aa, bb
		for(int i = 1; i <= num-1; ++i) {
			if(arr[i] == arr[i+1]) {
				DP[i][i+1] = true;
			}
		}
		
		for (int k = 2; k <= num; k++)
	    {
	        // 1���� ~ n - k ��° ����
	        for (int i = 1; i <= num - k; i++)
	        {
	            // i + k��° ĭ
	            int j = i + k;
	            if (arr[i] == arr[j] && DP[i + 1][j - 1])
	                DP[i][j] = true;
	        }
	    }
		
		int count;
		
		count = sc.nextInt();
		
		for(int i = 0; i < count; ++i) {
			int start = sc.nextInt();
			int end = sc.nextInt();
			
			if(DP[start][end]) {
				System.out.println("1");
			}else {
				System.out.println("0");
			}
		}
	}

}
