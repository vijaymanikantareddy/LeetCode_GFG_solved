//{ Driver Code Starts
import java.util.*;

class Find_Given_Element_Of_Spiral_Matrix 
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t > 0)
		{
			int n = sc.nextInt();
			int m = sc.nextInt();
			int k = sc.nextInt();
			int arr[][] = new int[1000][1000];
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++ )
				{
					arr[i][j] = sc.nextInt();
				}
			}
			System.out.println(new GfG().findK(arr, n, m, k));
		t--;
		}
	}
}
// } Driver Code Ends


class GfG
{
    /*You are required to complete this method*/
    int findK(int matrix[][], int r, int c, int k)
    {
	// Your code here	
	    ArrayList<Integer> li = new ArrayList<Integer>();
        int top=0, down=r-1, left=0, right=c-1, dir=0;
        while(top<=down && left<=right)
        {
            if(dir==0){
                for(int i=left ; i<=right ; i++){
                    li.add(matrix[top][i]);
                }
                top+=1;
            }
            else if(dir==1){
                for(int i=top ; i<=down ; i++){
                    li.add(matrix[i][right]);
                }
                right-=1;
            }
            else if(dir==2){
                for(int i=right ; i>=left ; i--){
                    li.add(matrix[down][i]);
                }
                down-=1;
            }
            else if(dir==3){
                for(int i=down ; i>=top ; i--){
                    li.add(matrix[i][left]);
                }
                left+=1;
            }
            dir = (dir+1)%4;
        }
        return li.get(k-1);
    }
}