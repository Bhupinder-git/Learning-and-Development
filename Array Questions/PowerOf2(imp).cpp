#include <iostream>
using namespace std;

int no_of_set_bits(int n){
    int count = 0; // used to store the count of set bits
    while(n!=0){
        int bit = n&1; // gives the last bit 
        if(bit == 1) count++;
        n = n>>1;
    }
    return count;
}
int main() {
    
    int n;
    cout<<"Enter any integer : ";
    cin>>n;
    
    int  res = no_of_set_bits(n);
    
    if(res==1) cout<<"Power of 2";
    else cout<<"Not a power of 2";

    return 0;
}