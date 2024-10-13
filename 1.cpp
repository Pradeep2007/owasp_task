#include<bits/stdc++.h>
using namespace std;

vector<int> Fibonacci(int n) {
    vector<int> fib(n);
    fib[0]=0;
    fib[1]=1;
    for (int i=2;i<n;i++) {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib;
}

string xorr(string &data,vector<int>&fib) {
    string result=data;
    for (int i=0;i<data.size();i++) {
        result[i]=data[i]^(fib[i]); 
    }
    return result;
}

int main() {
    string data;
    cout <<"Enter Data to be encrypted:";
    getline(cin,data);
    vector<int> fib=Fibonacci(data.size());
    string encrypted=xorr(data,fib);
    cout <<"Encrypted Data:"<< encrypted <<endl;
    string decrypted=xorr(encrypted,fib);
    cout <<"Decrypted Data:"<<decrypted<<endl;
    return 0;
}
