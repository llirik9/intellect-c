#include <iostream>
#include <math.h>

using namespace std;

int char_to_int(char x)
{
    int answer = x-'0';
    return answer;
}

char int_to_char(int x)
{
    char answer;
    switch (x)
    {
        case 0: answer = '0'; break;
        case 1: answer = '1'; break;
        case 2: answer = '2'; break;
        case 3: answer = '3'; break;
        case 4: answer = '4'; break;
        case 5: answer = '5'; break;
        case 6: answer = '6'; break;
        case 7: answer = '7'; break;
        case 8: answer = '8'; break;
        case 9: answer = '9'; break;
        default: answer = '0'; break;
    }
    return answer;
}

string get_rim_num(char input, int n)
{
    int x = char_to_int(input) * pow(10, n);
    char a = ' ';
    if (char_to_int(input) == 3)
    {
        int x = char_to_int(1) * pow(10, n);
    }
    switch (x)
    {
        case 0: a = ' '; break;
        case 1: a = 'I'; break;
        case 2: a = 'II'; break;
        case 3: a = 'III'; break;
        case 5: a = 'V'; break;
        case 10: a = 'X'; break;
        case 20: a = 'XX'; break;
        case 30: a = 'XXX'; break;
        case 50: a = 'L'; break;
        case 100: a = 'C'; break;
        case 200: a = 'CC'; break;
        case 300: a = 'CCC'; break;
        case 500: a = 'D'; break;
        case 1000: a = 'M'; break;
        default: break;
    }
    string answer = "";
    answer.push_back(a);
    if (char_to_int(input) == 3)
    {
        answer.push_back(a);
        answer.push_back(a);
    }
    return answer;
}

string get_rim_num(int b_num, char action, int s_num, int n)
{
    string answer;
    string base_num = get_rim_num(int_to_char(b_num), n);
    string second_num = get_rim_num(int_to_char(s_num), n);
    switch(action)
    {
        case '-': answer = second_num + base_num; break;
        case '+': answer = base_num + second_num; break;
        default: answer = base_num; break;
    }
    return answer;
}

string get_rim_num(int x)
{
    string num_as_string = to_string(x);
    int length_of_string = num_as_string.length();
    string answer = "";
    for (int i = 0; i < length_of_string; i++)
    {
        if (char_to_int(num_as_string[i]) < 4)
        {
            answer += get_rim_num(num_as_string[i], length_of_string - 1 - i);
        }
        else if 
        (
            (char_to_int(num_as_string[i]) == 4) 
            || (char_to_int(num_as_string[i]) == 9)
        )
        {
            int b_num = 5;
            if (char_to_int(num_as_string[i]) == 9)
            {
                b_num = 10;
            }
            char action = '-';
            answer += get_rim_num(
                b_num,
                '-',
                char_to_int(num_as_string[i]), 
                length_of_string - i - 1
            );
        }
        else if 
        (
            (char_to_int(num_as_string[i]) >= 5) 
            && (char_to_int(num_as_string[i]) < 9)
        )
        {
            int b_num = 5;
            int s_num = char_to_int(num_as_string[i]) - 5;
            answer += get_rim_num(b_num, '+', s_num, length_of_string - i - 1);
        }
        
    }
    if (answer == "")
    {
        answer = "Not answer";
    }
    return answer;
}

int main()
{
    int x;
    cin >> x;
    cout << get_rim_num(x) << endl;
    return 0;
}