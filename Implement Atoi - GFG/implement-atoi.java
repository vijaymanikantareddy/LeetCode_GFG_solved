//{ Driver Code Starts
//Initial template for JAVA

import java.util.Scanner;

class aToi
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0)
		{
			String str = sc.nextLine();
			
			Solution obj = new Solution();
			System.out.println(obj.atoi(str));
		t--;
		}
	}
}
// } Driver Code Ends


//User function template for JAVA

/*You are required to complete this method */
class Solution
{
    int atoi(String s) {
	// Your code here
	    int res=0;
	    char str[] = s.toCharArray();
        if(str[0]-'0'>=0 && str[0]-'0'<=9){
            res = res*10 + (str[0]-'0');
        }
        else if(str[0]=='-')
        {
            
        }
        else{
            return -1;
        }
        for(int i=1 ; i<str.length ; i++)
        {
            if(str[i]-'0'>=0 && str[i]-'0'<=9){
                res = res*10 + (str[i]-'0');
            }
            else{
                return -1;
            }
        }
        if(str[0]=='-'){
            return -res;
        }
        else{
            return res;
        }
    }
}
