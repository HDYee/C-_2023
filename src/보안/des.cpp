#include<iostream>
#include<string.h>

using namespace std;

string hex2bin(string s)
{
    // hexadecimal to binary conversion
    unordered_map<char, string> mp;
    mp['0']= "0000";
    mp['1']= "0001";
    mp['2']= "0010";
    mp['3']= "0011";
    mp['4']= "0100";
    mp['5']= "0101";
    mp['6']= "0110";
    mp['7']= "0111";
    mp['8']= "1000";
    mp['9']= "1001";
    mp['A']= "1010";
    mp['B']= "1011";
    mp['C']= "1100";
    mp['D']= "1101";
    mp['E']= "1110";
    mp['F']= "1111";
    string bin="";
    for(int i=0; i<s.size(); i++){
        bin+= mp[s[i]];
    }
    return bin;
}

// Binary to decimal conversion
int bin2dec(string s)
{
    int dec = 0;
    for (int i = 0; i < s.size(); i++) {
        dec = dec * 2 + (s[i] - '0');
    }
    return dec;
}

// Decimal to hexadecimal conversion
char dec2hex(int dec)
{
    if (dec < 10) return dec + '0';
    return dec - 10 + 'A';
}

// Binary to hexadecimal conversion
string bin2hex(string s)
{
    string hex = "";
    for (int i=0; i<s.length(); i+=4) {
        int dec = bin2dec(s.substr(i, 4));
        hex += dec2hex(dec);
    }
    return hex;
}

// Function to perform XOR
string XOR(string a, string b)
{
    string result = "";
    int n = b.length();
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            result.append("1");
        }
        else{
            result.append("0");
        }
    }
    return result;
}

// Function to encrypt the plaintext
string encryptDES(string plaintext, string key)
{
    // Initial Permutation Table
    int initial_permutation[64] = { 58, 50, 42, 34, 26, 18, 10, 2,
                                    60, 52, 44, 36, 28, 20, 12, 4,
                                    62, 54, 46, 38, 30, 22, 14, 6,
                                    64, 56, 48, 40, 32, 24, 16, 8,
                                    57, 49, 41, 33, 25, 17, 9, 1,
                                    59, 51, 43, 35, 27, 19, 11, 3,
                                    61, 53, 45, 37, 29, 21, 13, 5,
                                    63, 55, 47, 39, 31, 23, 15, 7 };
    // Converting plaintext to binary
    plaintext = hex2bin(plaintext);

    // Initial Permutation
    string perm = "";
    for(int i = 0; i < 64; i++){
        perm += plaintext[initial_permutation[i]-1];
    }

    // Splitting perm into left and right halves
    string left = perm.substr(0, 32);
    string right = perm.substr(32, 32);

    // Performing the 16 rounds of DES
    for (int round = 0; round < 16; round++) {
        // Expansion D-box
        string expandedRight = expansionDbox(right);

        // XOR RoundKey[i] and expandedR
        string xorWithKey = XOR(expandedRight, keys[round]);

        // S-boxes
        string sboxOutput = sbox(xorWithKey);

        // P-box permutation
        string pboxOutput = pbox(sboxOutput);

        // XOR left and sboxOutput
        string xorWithLeft = XOR(left, pboxOutput);

        // Swapping the left and right
        left = right;
        right = xorWithLeft;
    }

    // Combining the left and right
    string combined = right + left;

    // Final Permutation Table
    int final_permutation[64] = { 40, 8, 48, 16, 56, 24, 64, 32,
                                  39, 7, 47, 15, 55, 23, 63, 31,
                                  38, 6, 46, 14, 54, 22, 62, 30,
                                  37, 5, 45, 13, 53, 21, 61, 29,
                                  36, 4, 44, 12, 52, 20, 60, 28,
                                  35, 3, 43, 11, 51, 19, 59, 27,
                                  34, 2, 42, 10, 50, 18, 58, 26,
                                  33, 1, 41, 9, 49, 17, 57, 25 };

    // Final Permutation
    string ciphertext = "";
    for(int i = 0; i < 64; i++){
        ciphertext += combined[final_permutation[i]-1];
    }

    // Converting binary to hexadecimal
    ciphertext = bin2hex(ciphertext);
    return ciphertext;
}

int main()
{
    string plaintext, key;
    cin>>plaintext>>key;
    cout<<encryptDES(plaintext, key)<<endl;
    return 0;
}
