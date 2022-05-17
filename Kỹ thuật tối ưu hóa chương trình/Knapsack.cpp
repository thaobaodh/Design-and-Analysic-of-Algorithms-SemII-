#include<iostream>
int maxs(int a,int b)
{
        if(a>b)
            return a;
        else
            return b;
}
int knaprec(int max,int w[],int val[],int n)
{ 
        if(n==0 || max==0) 
            return 0; 
        else if(w[n-1]>=max) 
            return knaprec(max,w,val,n-1); 
        else 
            return(maxs(w[n-1]+knaprec(max-w[n-1],w,val,n-1),knaprec(max,w,val,n-1))); 
} 
int main() 
{ 
        int n=11; 
        int max=10; 
        int w[]={2,1,2,3,4,3}; 
        int val[]={12,10,20,15, 40,18}; 
        int ans=knaprec(max,w,val,n); 
        std::cout<<ans;
};