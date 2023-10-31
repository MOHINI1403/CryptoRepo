/*
RSA Algorithm
  Foe encryption :We are taking two prime numbers p and q such that n=p*q such that phi(n)=(p-1)*(q-1)
  Select the value e from the range from 1 to phin but not n e such that gcd(e,n)=q-1
  To Encrypt the message C=(m)^dmod(n)
  
  
*/
#include <bits/stdc++.h>
using namespace std;
int gcdExtended(int a, int b, int* x, int* y);
 
// Function to find modulo inverse of a
int modInverse(int A, int M)
{
    int x, y;
    int g = gcdExtended(A, M, &x, &y);
    int res=1;
    if (g != 1)
        cout << "Inverse doesn't exist";
    else {
 
        // m is added to handle negative x
        res = (x % M + M) % M;
        
    }
    return res;
}
 
// Function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int* x, int* y)
{
 
    // Base Case
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
 
    // To store results of recursive call
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}

int gcd(int a, int h)
{
    int temp;
    while (1) {
        temp = a % h;
        if (temp == 0)
            return h;
        a = h;
        h = temp;
    }
}


double p=401;
double q=509;
int main(){
  string plainText;
  cin>>plainText;
  
  //encryption
  double n=p*q;
  double phin=(p-1)*(q-1);
  //Selecting the value in the range 2 to phin
  double e=2;
  
  while(e<phin){
    if(gcd(e,phin)==1){
      break;
    }
    else{
      e++;
    }
  }
  //Encryption Text:
  string cipherText="";
  for(int ind=0;ind<plainText.size();ind++){
    int pos=plainText[ind]-'A';
    double c=(double)pow(pos,e);
    c=fmod(c,n);
    cout<<c<<" ";
    c=fmod(c,26.00);
    
    cipherText+=(char)(c+65);
    
    
  }
  //Emncrypted message
  cout<<cipherText<<endl;
  
  
  //Decryption message
  
  
  //Computing d
  //d*e=1mod(phi(n))
  string decryptedText="";
  double d=modInverse(e,phin);
  cout<<d<<" ";
  for(int ind=0;ind<cipherText.size();ind++){
    int pos=cipherText[ind]-'A';
    double c=(double)pow(pos,d);
    cout<<c<<" ";
    c=fmod(c,n);
    c=fmod(c,26.00);
    decryptedText+=(char)(c+65);
    
    
  }
  cout<<decryptedText<<endl;
  
  
  return 0;
  
}
