#include <bits/stdc++.h>
using namespace std;
string EncryptedCipher(string plainText,string Key){
  string ans="";
  
  for(int ind=0;ind<plainText.size();ind++){
    ans+=(char)(((plainText[ind]-'A')+(Key[ind]-'A'))+'A');
  }
  return ans;
}


string DecryptedMessage(string EncryptedCipher,string Key){
  string plainText="";
  for(int ind=0;ind<Key.size();ind++){
    plainText+=(char)(((EncryptedCipher[ind]-'A')-(Key[ind]-'A'))+'A');
  }
  return plainText;
}
int main(){
  string plainText;
  cout<<"Enter the Plain Text:\n";
  cin>>plainText;
  
  char autoKey;
  cin>>autoKey;
  string Key="";
  Key+=autoKey;
  for(int ind=0;ind<plainText.size()-1;ind++){
    Key+=plainText[ind];
  }
  cout<<"The Encrypted String:\n";
  string Cipher=EncryptedCipher(plainText,Key);
  cout<<Cipher<<endl;
  cout<<"Decrypted Msg:\n";
  cout<<DecryptedMessage(Cipher,Key)<<endl;
  
  return 0;
}
