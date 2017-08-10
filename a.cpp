#include<bits/stdc++.h>
using namespace std;

long long int moda(long long int x){
	if(x<0)
		return -x;
	return x;
}

int main(){
	int n;
	scanf("%d", &n);
	long long int h[n];
	
	for(int i=0; i<n; i++){
		scanf("%lld", &h[i]);
	}
	long long int mini=h[0], maxi=h[0];
	for(int i=0; i<n; i++){
		if(h[i]>maxi)
			maxi=h[i];
		if(h[i]<mini)
			mini=h[i];
	}
	/*sort(h,h+n);
	long long int suma=0;
	for(int i=0; i<n; i++){
		if(i==n-1)
			suma+=moda(h[n-1]-h[0]);
		else 
			suma+=moda(h[i+i]-h[i]);
	}*/
	printf("%lld", (maxi-mini)*2);
	return 0;
}