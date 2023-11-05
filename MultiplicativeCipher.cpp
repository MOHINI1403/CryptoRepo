//Multiplicative Cipher

#include <bits/stdc++.h>
using namespace std;

int key=11; //Large prime number to be chosen as a key

string Encryption(string plainText){
  
  string cipherText;
  for(int ind=0;ind<plainText.size();ind++){
    int pos=((plainText[ind]-'A')*key)%26;
    
    cipherText+=(char)(pos+'A');
    
  }
  return cipherText;
}
int ExtendedEuclidianAlgorithm(int A,int B,int T1,int T2){
  if(B==0){
    //We reached the base case here we are supposed to return T1
    return T1;
  }
  int Q=A/B;
  int R=A%B;
  int T=T1-(Q*T2);
  return ExtendedEuclidianAlgorithm(B,R,T2,T);
}
string Decryption(string cipherText){
  
  string plainText;
  
  int key_inv=ExtendedEuclidianAlgorithm(26,key,0,1);
  if(key_inv<0){
    key_inv=26+key_inv;
  }
  for(int ind=0;ind<cipherText.size();ind++){
    int pos=((cipherText[ind]-'A')*key_inv)%26;
    plainText+=(char)(pos+'A');
  }
  return plainText;
}
int main(){
  
  string plainText;
  cout<<"Enter The PlainText: ";
  cin>>plainText;
  string cipherText=Encryption(plainText);
  cout<<"Encrypted Text :"<<cipherText<<endl;
  cout<<"Decrypted Text :"<<Decryption(cipherText)<<endl;
  return 0;
  
    
    
    return 0;
}
