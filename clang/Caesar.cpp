
// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
using namespace std;

// This function receives text and shift and
// returns the encrypted text
string encrypt(string text, int s)
{
	string result = "";

	// traverse text
	for (int i = 0; i < text.length(); i++) {
		// apply transformation to each character
		// Encrypt Uppercase letters
		if (isupper(text[i]))
			result += char(int(text[i] + s - 65) % 26 + 65);

		// Encrypt Lowercase letters
		else
			result += char(int(text[i] + s - 97) % 26 + 97);
	}

	// Return the resulting string
	return result;
}

// Driver program to test the above function
int main()
{
    string text;
	cout<<"Enter the Message : ";
    cin>>text;
	int s;
	cout << "Text : " << text;
    cout<<"\nEnter the Shift in Numbers to encrypt: ";
    cin>>s;
	cout << "\nShift: " << s;
	cout << "\nCipher text : " << encrypt(text, s);
	return 0;
}