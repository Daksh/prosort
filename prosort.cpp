#include<bits/stdc++.h>
using namespace std;

int checkcp(long long int a, long long int b){
	for(long long int i=2; i<=a&&i<=b; i++){
		if(a%i==0&&b%i==0)
			return 0;
	}
	return 1;
}

int main(){
	long long int l,r,a,b,c;
	scanf("%lld %lld", &l,&r);
	a=l;
	b=l+1;
	c=l+2;
	long long int sum, minsum, ma, mb, mc;
	minsum=r*3;
	
	while(a<r-1&&b<r&&c<=r){
		//cout<<"umm1 "<<a<<" "<<b<<" "<<c<<endl;
		b=a+1;c=b+1;
		while(b<r){
			c=b+1;
			while((!checkcp(a,b))&&(a<r-1&&b<r&&c<=r)){
				b++;
				c++;
			}
			//cout<<"umm2 "<<a<<" "<<b<<" "<<c<<endl;
			while((!checkcp(b,c)||checkcp(a,c))&&(a<r-1&&b<r&&c<=r)){
				c++;
			}
			if((checkcp(a,b)&&checkcp(b,c)&&!checkcp(a,c))&&(a<r-1&&b<r&&c<=r))
			{
				//cout<<"see "<<a<<" "<<b<<" "<<c<<endl;
				sum=a+b+c;
				if(sum<minsum){
					minsum=sum;
					ma=a;
					mb=b;
					mc=c;
				}
			}
			b++;
		}

		//cout<<"umm3 "<<a<<" "<<b<<" "<<c<<endl;
		
		a++;
	}
	
	if(minsum==r*3)
		printf("-1");
	else
		printf("%lld %lld %lld", ma,mb,mc);
	return 0;
		
}