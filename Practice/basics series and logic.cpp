/**#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    
    long long n;
    cin>>n;
    long long k,res;
    n--;
    k=n/2;
    if(n%2==0){
        res= pow(2,k);
    }
    else{
        res= pow(3,k);
    }
    cout<<res;
    return 0;
}**/

/**#include<iostream>
#include<cmath>
using namespace std;

int main(){

    long long k,res,n;
    cout<<"enter the position";
    cin>>n;
    n--;
    if(n%2==0)
    res=n;
    else
    res=n/2;
cout<<res;
    return 0;

}**/
/**#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int y;
    cin>>y;
    if(y%100==0){
        if(y%400==0)
        cout<<"leap year";
        else
        cout<<"not a leap year";
    }
    else if(y%4==0)
    cout<<"leap year";
    
    else cout<<"not a leap year";
    return 0;
}**/
/**#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    cout<<a;
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int f=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        f++;
    }
    if(f!=0 || n==1){
        cout<<"not a prime no."<<f;
    }
    else
    cout<<"prime yes";
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int fact(int r){
    int f=1;
    for(int i=1;i<=r;i++){
        f=f*i;
    }
    return f;
}
int main(){
    
    int f,n,sum=0,c;
    cin>>n;
    int a=n;
    while(n>0){
        int r=n%10;
        sum=sum+fact(r);
        n=n/10;
    }
    if(sum==a){
        cout<<"strong";
    }
    else cout<<"weak";

    return 0;
}**/

#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<bitset<4>(n);
    return 0;
}
