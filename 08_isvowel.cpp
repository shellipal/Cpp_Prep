#include <iostream>
using namespace std;

int main()
{
    char c;
    bool isLowerVowel, isUpperVowel;

    cout << "Enter a character : ";
    cin >> c;

    isLowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
    {
        cout << c << " NOT an alphapet" << endl;
    }
    else if (isLowerVowel || isUpperVowel)
    {
        cout << c << " character is a vowel" << endl;
    }
    else
    {
        cout << c << " character is a consonant" << endl;
    }
    return 0;
}