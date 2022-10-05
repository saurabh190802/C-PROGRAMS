#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int mi(int n, int d){
    int ne=n,rem,mor=0,c=0;
    while(ne>0){
        rem = ne%10;
        ne = ne/10;
        c++;
        if(rem==d){
	        ne = ne*pow(10,c)+(rem+1)*pow(10,c-1);
	        mor = ne-n;
	        c=0;
        }
    }
    return mor;
}
int main(){
    int t,n,d;
    cout<<"Enter number of testcase : ";
    cin>>t;
    while(t--){
        cout<<"\n Enter the 'Number' then 'Digit' to be removed from it respectively : "<<endl;
        cin>>n>>d;
        cout<<"Minimum number to be added is = "<<mi(n,d)<<endl;
    }
    return 0;
}