
#include <iostream>
#include <string>
using namespace std;
class Vig
{
public:
    string k;
    Vig(string k)
    {
        for (int i = 0; i < k.size(); ++i)
        {
            if (k[i] >= 'A' && k[i] <= 'Z')
                this->k += k[i];
            else if (k[i] >= 'a' && k[i] <= 'z')
                this->k += k[i] + 'A' - 'a';
        }
    }
    string encryption(string t)
    {
        string output;
        for (int i = 0, j = 0; i < t.length(); ++i)
        {
            char c = t[i];
            if (c >= 'a' && c <= 'z')
                c += 'A' - 'a';
            else if (c < 'A' || c > 'Z')
                continue;
            output += (c + k[j] - 2 * 'A') % 26 + 'A'; // added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
            j = (j + 1) % k.length();
        }
        return output;
    }
    string decryption(string t)
    {
        string output;
        for (int i = 0, j = 0; i < t.length(); ++i)
        {
            char c = t[i];
            if (c >= 'a' && c <= 'z')
                c += 'A' - 'a';
            else if (c < 'A' || c > 'Z')
                continue;
            output += (c - k[j] + 26) % 26 + 'A'; // added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
            j = (j + 1) % k.length();
        }
        return output;
    }
};
int main()
{
    Vig v("WELCOME");
    string ori;
    cout << "Enter the Message : ";
    cin >> ori;
    string encrypt = v.encryption(ori);
    string decrypt = v.decryption(encrypt);
    cout << "Original Message: " << ori << endl;
    cout << "Encrypted Message: " << encrypt << endl;

    //    IF NEED TO DECRYPT THE REMOVE TEH NEXT COMMENT
    //    cout << "Decrypted Message: " << decrypt << endl;
}