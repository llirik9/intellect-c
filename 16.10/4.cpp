#include <iostream>
#include <map>
#include <string.h>

using namespace std;

map<string, char> create_dict_for_lang()
{
    map<string, char> dict;
    dict["-----"] = '0';
    dict[".----"] = '1';
    dict["..---"] = '2';
    dict["...--"] = '3';
    dict["....-"] = '4';
    dict["....."] = '5';
    dict["-...."] = '6';
    dict["--..."] = '7';
    dict["---.."] = '8';
    dict["----."] = '9';
    dict[".-"] = 'A';
    dict["-..."] = 'B';
    dict["-.-."] = 'C';
    dict["-.."] = 'D';
    dict["."] = 'E';
    dict["..-."] = 'F';
    dict["--."] = 'G';
    dict["...."] = 'H';
    dict[".."] = 'I';
    dict[".---"] = 'J';
    dict["-.-"] = 'K';
    dict[".-.."] = 'L';
    dict["--"] = 'M';
    dict["-."] = 'N';
    dict["---"] = 'O';
    dict[".--."] = 'P';
    dict["--.-"] = 'Q';
    dict[".-."] = 'R';
    dict["..."] = 'S';
    dict["-"] = 'T';
    dict["..-"] = 'U';
    dict["...-"] = 'V';
    dict[".--"] = 'W';
    dict["-..-"] = 'X';
    dict["-.--"] = 'Y';
    dict["--.."] = 'Z';
    return dict;
}

map<char, string> create_dict_for_code()
{
    map<char, string> dict;
    dict['0'] = "----- ";
    dict['1'] = ".---- ";
    dict['2'] = "..--- ";
    dict['3'] = "...-- ";
    dict['4'] = "....- ";
    dict['5'] = "..... ";
    dict['6'] = "-.... ";
    dict['7'] = "--... ";
    dict['8'] = "---.. ";
    dict['9'] = "----. ";
    dict['A'] = ".- ";
    dict['B'] = "-... ";
    dict['C'] = "-.-. ";
    dict['D'] = "-.. ";
    dict['E'] = ". ";
    dict['F'] = "..-. ";
    dict['G'] = "--. ";
    dict['H'] = ".... ";
    dict['I'] = ".. ";
    dict['J'] = ".--- ";
    dict['K'] = "-.- ";
    dict['L'] = ".-.. ";
    dict['M'] = "-- ";
    dict['N'] = "-. ";
    dict['O'] = "--- ";
    dict['P'] = ".--. ";
    dict['Q'] = "--.- ";
    dict['R'] = ".-. ";
    dict['S'] = "... ";
    dict['T'] = "- ";
    dict['U'] = "..- ";
    dict['V'] = "...- ";
    dict['W'] = ".-- ";
    dict['X'] = "-..- ";
    dict['Y'] = "-.-- ";
    dict['Z'] = "--.. ";
    dict['a'] = dict['A'];
    dict['b'] = dict['B'];
    dict['c'] = dict['C'];
    dict['d'] = dict['D'];
    dict['e'] = dict['E'];
    dict['f'] = dict['F'];
    dict['g'] = dict['G'];
    dict['h'] = dict['H'];
    dict['i'] = dict['I'];
    dict['j'] = dict['J'];
    dict['k'] = dict['K'];
    dict['l'] = dict['L'];
    dict['m'] = dict['M'];
    dict['n'] = dict['N'];
    dict['o'] = dict['O'];
    dict['p'] = dict['P'];
    dict['q'] = dict['Q'];
    dict['r'] = dict['R'];
    dict['s'] = dict['S'];
    dict['t'] = dict['T'];
    dict['u'] = dict['U'];
    dict['v'] = dict['V'];
    dict['w'] = dict['W'];
    dict['x'] = dict['X'];
    dict['y'] = dict['Y'];
    dict['z'] = dict['Z'];

    return dict;
}

string string_to_code(string input)
{
    map<char, string> dict = create_dict_for_code();
    string answer = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != ' ') {
            answer += dict[input[i]];
        }
    }
    return answer;
}

string code_to_string(string input)
{
    map<string, char> dict = create_dict_for_lang();
    string answer = "";
    string tmp = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != ' ')
        {
            tmp += input[i];
        }
        else
        {
            answer += dict[tmp];
            tmp = "";
        }
    }
    return answer;
}

int main()
{
    string input;
    getline(cin, input);
    string code = string_to_code(input);
    string x = code_to_string(code);
    cout << code << endl;
    cout << x << endl;
    return 0;
}