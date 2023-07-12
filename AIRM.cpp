#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],dep[n];
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>dep[i];
	    }
	    unordered_map<int,int> res;
	    for(int i=0;i<n;i++){
	        res[arr[i]]++;
	        res[dep[i]]++;
	    }
	    int x=1;
	    for(auto i:res){
	        x=max(x,i.second);
	    }
	    
	    cout<<x<<endl;
	}
	return 0;
}
