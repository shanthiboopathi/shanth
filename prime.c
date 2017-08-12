#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int num; 
	bool singleArray[100000]; 
	static unsigned long allArray[1000000]; 
unsigned long nums[10][2]; 
unsigned long s; 	   
	long n1, n2; 
  int count = 0;  
 long intermediate; 
scanf("%d", &num);
for(int i = 0; i < num; ++i) 
{
scanf("%lu", &n1);  
scanf("%lu", &n2);  
nums[i][0] = n1;   
nums[i][1] = n2;   
}
for(int i = 0; i < 100000; ++i)  
{
singleArray[i] = true;
}
for(int i = 0; i < num; ++i) 
{
s = sqrt(nums[i][1]);
for(unsigned long k = 2; k <= s; ++k)  
{
for (unsigned long j = nums[i][0]; j <= nums[i][1]; ++j) 
{
intermediate = j - nums[i][0];
if(!singleArray[intermediate])  
{
continue;
}
if((j % k == 0 && k != j) || (j == 1))		 
{
singleArray[intermediate] = false;
}
}
}
for(unsigned long m = nums[i][0]; m <= nums[i][1]; ++m) 
{
intermediate = m - nums[i][0];
if(singleArray[intermediate])  
{
allArray[count++] = m;
}
}
for(int p = 0; p < (nums[i][1] - nums[i][0]); ++p)
{
singleArray[p] = true;
}
}
for(int n = 0; n < count; ++n)
{
printf("%lu\n", allArray[n]);
}
}
