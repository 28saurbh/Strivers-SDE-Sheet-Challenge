int solve( vector<int> & arr, int n,vector<int> &dp ) 
{   if(n==0)
    {  
       return 0; 
    }
    if( dp[n]==-1) 
    { 
    int ans=0;  
    for( int j=1; j<=n;j++)
    {   
      ans=max( ans, arr[j-1]+ solve( arr, n-j, dp)); 
    } 
        dp[n] = ans; 
        return ans;   
 }    
else  
{        
  return dp[n];
 }
       
}
int cutRod(vector<int> &price, int n)
{

    vector<int> dp( n+1, -1);   
    return solve( price, n,dp);
}
