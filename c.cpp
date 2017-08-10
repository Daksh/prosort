#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,k;
	scanf("%lld %lld", &n,&k);
	
	long long int have[n],need[n];
	
	for(int i=0; i<n; i++){
		scanf("%lld", &need[i]);
	}
	for(int i=0; i<n; i++){
		scanf("%lld", &have[i]);
	}

	long long int maxi=0, flag=1;
	while(k>0 && flag){
		for(int i=0; i<n; i++){
			if(need[i]<have[i]){
				have[i]-=need[i];
			}
			else if(need[i]-have[i]<=k){
				k-=(need[i]-have[i]);
			}
			else{
				flag=0;
				break;
			}
		}
		if(flag)
			maxi++;
	}
	printf("%lld", maxi);
	return 0;
}