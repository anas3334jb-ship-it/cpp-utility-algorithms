#include<iostream>
using namespace std;

int bin_to_dec(int n){
    int rem=1, pow = 1, decimal = 0;
    while (n>0){
      rem = n%10;
      n = n/10;
      decimal +=  rem*pow;
      pow *= 2;

        }
return decimal;}

int main(){
     int n;
     cin>>n;
     cout<<"the decimal no is = "<<bin_to_dec(n)<<endl;
    return 0;
}