#include <bits/stdc++.h>
using namespace std;

int m=26;
//If the key multiplicative inverse for a exists then only encryption possible


string encryptMessage(string str,int a,int b){
    //Step1:Perform multiplication with key a
    //Step 2: Then perform addition

    //Step1:
    string cipher="";
    for(int ind=0;str[ind]!='\0';ind++){
        char ch=str[ind];
        if(ch!=' '){
            cipher+=(char)(((a*(ch-'A'))%26)+'A');
        }
        else{
            cipher+=ch;
        }


    }
    //Step2:
    for(int ind=0;str[ind]!='\0';ind++){
        char ch=cipher[ind];
        if(ch!=' '){
          cipher[ind]=(char)((((ch-'A')+b)%26)+'A');
        }

    }
    return cipher;
}

int gcdExtended(int a, int b, int* x, int* y);

// Function to find modulo inverse of a
int  modInverse(int A, int M)
{
    int x, y;
    int g = gcdExtended(A, M, &x, &y);
    int res = (x % M + M) % M;
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


string Decryption(string cipher,int a,int b){
  //Step1:First do the additive inverse

  for(int ind=0;ind<cipher.size();ind++){
    if(cipher[ind]!=' '){
      cipher[ind]=(char)((((cipher[ind]+'A')-b)%26)+'A');
    }

  }
//Do Multiplicative Inverse
  string decryptMsg="";
  int a_inv=modInverse(a,m);

  for(int ind=0;ind<cipher.size();ind++){
    if(cipher[ind]!=' '){
      decryptMsg+=(char)((((cipher[ind]-'A')*a_inv)%26)+'A');
    }
    else{
      decryptMsg+=cipher[ind];
    }

  }
  return decryptMsg;
}

/*This Function checks that in case of A=b(modN) gcd(a,N) is 1 that is the number is co-prime*/
bool isPossible(int a){
    int gcd=1;
    for(int ind=2;ind<=a;ind++){
        //If there is any common factor which is divisible by both ma ans a and not equivalent to 1
        //The two numbers are not co-prime
        if(m%ind==0&&a%ind==0){
            return false;
        }

    }
    return true;
}
int main(){
    cout<<"Enter the plain text:"<<endl;
    string plainText;
    getline(cin,plainText);
    cout<<"Enter the two keys involved in Affine Cipher:"<<endl;
    int a,b;
    cin>>a>>b;
    //Here a is the multiplicative key and b is additive key
    string cipher;
    if(isPossible(a)){
        cipher=encryptMessage(plainText,a,b);
        cout<<"Encrypted msg is :"<<endl;
        cout<<cipher<<endl;
        cout<<"Decrypted Msg:"<<endl;
        cout<<Decryption(cipher,a,b)<<endl;

    }
    else{
        cout<<"The Encryption is not possible with the following key"<<endl;
    }
    return 0;

}
