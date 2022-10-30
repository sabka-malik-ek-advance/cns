// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
using namespace std;

string newtext = "";
// This function receives text and shift and
// returns the encrypted text
string encrypt(string text, int k)
{
    string encr = "";

    // traverse text
    for (int i = 0; i < text.length(); i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            encr += char(int(text[i] + k - 65) % 26 + 65);

        // Encrypt Lowercase letters
        else
            encr += char(int(text[i] + k - 97) % 26 + 97);
    }

    // Return the resulting string
    return encr;
}

string decrypt(string newtext, int k)
{
    string decr = "";

    // traverse text
    for (int i = 0; i < newtext.length(); i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(newtext[i]))
            decr += char(int(newtext[i] + k - 65) % 26 + 65);

        // Encrypt Lowercase letters
        else
            decr += char(int(newtext[i] + k - 97) % 26 + 97);
    }

    // Return the resulting string
    return decr;
}

// Driver program to test the above function
int main()
{
    string text = "ATTACKATONCE";
    int k = 4;
    cout << "Text : " << newtext;
    cout << "\nShift: " << k;
    cout << "\nEncrypted: " << encrypt(text, k);
    cout << "\nDecrypted: " << decrypt(newtext, k);
    return 0;
}
