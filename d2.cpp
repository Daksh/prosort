#include<bits/stdc++.h>
using namespace std;

int checkmagic(long long int x){
	int a=0;
	while(x){
		a+=x%10;
		x=x/10;
	}
	for(int i=2; i<a; i++)
		if(a%i==0)
			return 0;
	return 1;
}

int main(){
	int n,q;
	scanf("%d %d", &n,&q);
	long long int a[n][2];
	int l,r;
	for(int i=0; i<n; i++){
		scanf("%lld", &a[i][0]);
		a[i][1]=checkmagic(a[i][0]);
	}
	
	for(int i=0; i<q; i++){
		scanf("%d %d",&l,&r);
		long long int ans=1;

		for(;l<=r; l++){
			if(a[l-1][1])
				ans*=a[l-1][0];
			ans=ans%1000000007;
			
		}

		printf("%lld\n", ans);

	}
	
	return 0;
}