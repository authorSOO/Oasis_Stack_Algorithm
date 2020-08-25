#include <cstdio>
#include <string>
#include <iostream>
#include <stack>
#include <cstring>

using namespace std;
int main(void){
	int n;
	int a[500000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	stack<int> s;
	stack<int> s_cnt;
	long long ans=0;
	for(int i=0;i<n;i++){
		int height = a[i];
		int cnt = 1;
		
		while(!s.empty()){
			
			if(s.top()<=a[i]){
				
				ans += (long long)s_cnt.top();
				if(s.top()==a[i])cnt+=s_cnt.top();
				
				s.pop();
				s_cnt.pop();
			}
			else break;
						
		}
		if(!s.empty())ans++;
		s.push(height);
		s_cnt.push(cnt);	
		
	}
	cout<<ans<<endl;
	
	return 0;
}
