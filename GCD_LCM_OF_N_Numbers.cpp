#include <bits/stdc++.h>
using namespace std;
/*
    GCD & LCM of Array 
*/
int gcd(int a, int b){
    //GCD of 2 numbers
    int x=a,y=b;
    if(y==0) return x;
    else return gcd(b,a%b);
}
int lcm(int a, int b){
    //LCM of 2 Numbers
    int lcm = (a*b)/gcd(a,b);
    return lcm;
}
int agcd(int *arr,int n){
    //GCD of Array
    int i, agcd=arr[0];
    for(i=1;i<n;i++){
        agcd=gcd(agcd,arr[i]);
    }
    return agcd;
}
int alcm(int *arr,int n){
    //LCM of Array
    int i,alcm=arr[0];
    for(i=1;i<n;i++){
        alcm=lcm(alcm,arr[i]);
    }
    return alcm;
}

int main(){
    int n;
    cout<<"\n Enter Number of Elements in array : ";
    cin>>n; // say 5
    int arr[n],i;
    cout<<"\n Enter "<<n<<" elements for array : \n";
    for(i=0;i<n;i++) cin>>arr[i]; //say 8 12 16 36 40 
    cout<<"\n GCD of Array Elements is = "<<agcd(arr,n); // 4
    cout<<"\n LCM of Array Elements is = "<<alcm(arr,n); // 720
    return 0;
}
