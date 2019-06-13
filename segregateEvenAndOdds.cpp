//this is not the solution

#include<bits/stdc++.h>
using namespace std;

int* modify(int *a,int n){
    int *p=new int[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            p[j++]=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            p[j++]=a[i];
        }
    }
    return p;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int *p=modify(a,n);
	    for(int i=0;i<n;i++)
	        cout<<p[i]<<" ";
	    cout<<endl;     
	}
	return 0;
}
