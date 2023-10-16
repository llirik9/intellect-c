#include <iostream>
#include "locale.h"

using namespace std;


int get_numder_from_char(char x)
{
    int a = 0;
    switch (x)
    {
        case '1': a = 1; break;
        case '2': a = 2; break;
        case '3': a = 3; break;
        case '4': a = 4; break;
        case '5': a = 5; break;
        case '6': a = 6; break;
        case '7': a = 7; break;
        case '8': a = 8; break;
        case '9': a = 9; break;
        case 'a': a = 10; break;
        case 'b': a = 11; break;
        case 'c': a = 12; break;
        case 'd': a = 13; break;
        case 'e': a = 14; break;
        case 'f': a = 15; break;
        case 'g': a = 16; break;
        case 'h': a = 17; break;
        case 'i': a = 18; break;
        case 'j': a = 19; break;
        case 'k': a = 20; break;
        case 'l': a = 21; break;
        case 'm': a = 22; break;
        case 'n': a = 23; break;
        case 'o': a = 24; break;
        case 'p': a = 25; break;
        case 'q': a = 26; break;
        case 'r': a = 27; break;
        case 's': a = 28; break;
        case 't': a = 29; break;
        case 'u': a = 30; break;
        case 'v': a = 31; break;
        case 'w': a = 32; break;
        case 'x': a = 33; break;
        case 'y': a = 34; break;
        case 'z': a = 35; break;
        case 'A': a = 36; break;
        case 'B': a = 37; break;
        case 'C': a = 38; break;
        case 'D': a = 39; break;
        case 'E': a = 40; break;
        case 'F': a = 41; break;
        case 'G': a = 42; break;
        case 'H': a = 43; break;
        case 'I': a = 44; break;
        case 'J': a = 45; break;
        case 'K': a = 46; break;
        case 'L': a = 47; break;
        case 'M': a = 48; break;
        case 'N': a = 49; break;
        case 'O': a = 50; break;
        case 'P': a = 51; break;
        case 'Q': a = 52; break;
        case 'R': a = 53; break;
        case 'S': a = 54; break;
        case 'T': a = 55; break;
        case 'U': a = 56; break;
        case 'V': a = 57; break;
        case 'W': a = 58; break;
        case 'X': a = 59; break;
        case 'Y': a = 60; break;
        case 'Z': a = 61; break;
        default: a = 0; break;
    }
    return a;
}

char get_char_from_number(int x)
{
    char a = '0';
    switch (x)
    {
        case 1: a = '1'; break;
        case 2: a = '2'; break;
        case 3: a = '3'; break;
        case 4: a = '4'; break;
        case 5: a = '5'; break;
        case 6: a = '6'; break;
        case 7: a = '7'; break;
        case 8: a = '8'; break;
        case 9: a = '9'; break;
        case 10: a = 'a'; break;
        case 11: a = 'b'; break;
        case 12: a = 'c'; break;
        case 13: a = 'd'; break;
        case 14: a = 'e'; break;
        case 15: a = 'f'; break;
        case 16: a = 'g'; break;
        case 17: a = 'h'; break;
        case 18: a = 'i'; break;
        case 19: a = 'j'; break;
        case 20: a = 'k'; break;
        case 21: a = 'l'; break;
        case 22: a = 'm'; break;
        case 23: a = 'n'; break;
        case 24: a = 'o'; break;
        case 25: a = 'p'; break;
        case 26: a = 'q'; break;
        case 27: a = 'r'; break;
        case 28: a = 's'; break;
        case 29: a = 't'; break;
        case 30: a = 'u'; break;
        case 31: a = 'v'; break;
        case 32: a = 'w'; break;
        case 33: a = 'x'; break;
        case 34: a = 'y'; break;
        case 35: a = 'z'; break;
        case 36: a = 'A'; break;
        case 37: a = 'B'; break;
        case 38: a = 'C'; break;
        case 39: a = 'D'; break;
        case 40: a = 'E'; break;
        case 41: a = 'F'; break;
        case 42: a = 'G'; break;
        case 43: a = 'H'; break;
        case 44: a = 'I'; break;
        case 45: a = 'J'; break;
        case 46: a = 'K'; break;
        case 47: a = 'L'; break;
        case 48: a = 'M'; break;
        case 49: a = 'N'; break;
        case 50: a = 'O'; break;
        case 51: a = 'P'; break;
        case 52: a = 'Q'; break;
        case 53: a = 'R'; break;
        case 54: a = 'S'; break;
        case 55: a = 'T'; break;
        case 56: a = 'U'; break;
        case 57: a = 'V'; break;
        case 58: a = 'W'; break;
        case 59: a = 'X'; break;
        case 60: a = 'Y'; break;
        case 61: a = 'Z'; break;
        default: a = '0'; break;
    }
    return a;
}

int my_pow(unsigned long long x, int n)
{
    unsigned long long answer = 1;
    for (int i = 0; i < n; i++)
    {
        answer *= x;
    }
    return answer;
}

string reverse_string(string input)
{
    int length_string = input.length();
    string answer = "";
    for (int  i = 0; i < length_string; i++)
    {
        answer.push_back(input[length_string-1-i]);
    }
    return answer;
}

unsigned long long x_to_ten(unsigned long long x, string a)
{
    int length_string = a.length();
    unsigned long long answer = 0;
    for (int i = 0; i < length_string; i++)
    {
        answer += get_numder_from_char(a[i]) * my_pow(x, length_string - 1 - i);
    }
    return answer;
}

string ten_to_x(int x, unsigned long long a)
{
    string answer = "";
    unsigned long long b = a;
    while (b > x)
    {
        answer.push_back(get_char_from_number(b%x));
        b = b/x;
    }
    answer.push_back(get_char_from_number(b));
    return reverse_string(answer);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string input;
    int x = 10, y =10;
    cin >> input;
    cin >> x;
    cin >> y;
    cout << x_to_ten(x, input) << endl;
    cout << ten_to_x(y, x_to_ten(x, input)) << endl;
    return 0;
}