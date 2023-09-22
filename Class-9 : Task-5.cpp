#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    float A,B,C;
    cin>>A;
    cin>>B;
    C=(A * 3.5 + B * 7.5) / (3.5 + 7.5);
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<C<<endl;
 
    return 0;
}
