code :
unsigned int Solution::reverse(unsigned int A) {
  unsigned int ans=0,i,j;
  for(i=1<<31,j=1;i>=1;i/=2,j*=2)
      if(A&j){ans|=i;}
  return ans;
}
