
#include<bits/stdc++.h>
using namespace std;
int countBitsFlip(int a, int b){
    int count = 0;
    while(a>0 || b>0){
        if((a&1) != (b&1))
            count++;
        a >>= 1;
        b >>= 1;
    }
    return count;
    // Your logic here
    
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << countBitsFlip(a,b);
}
