#include <iostream>

using namespace std;

int get_from_num_rim(char input)
{
    int a = 0;
    switch (input)
    {
        case ' ': a = 0; break;
        case 'I': a = 1; break;
        case 'V': a = 5; break;
        case 'X': a = 10; break;
        case 'L': a = 50; break;
        case 'C': a = 100; break;
        case 'D': a = 500; break;
        case 'M': a = 1000; break;
        default: break;
    }
    return a;
}

int get_from_num_rim(string input)
{

    int answer = 0;
    int length_of_string = input.length();
    for (int i = 0; i < length_of_string; i++)
    {
        if (i == 0)
        {
            if (length_of_string == 1)
            {
                return get_from_num_rim(input[0]);
            }
            if (get_from_num_rim(input[0]) < get_from_num_rim(input[1]))
            {
                answer -= get_from_num_rim(input[0]);
            }
            else if (get_from_num_rim(input[0]) >= get_from_num_rim(input[1]))
            {
                answer += get_from_num_rim(input[0]);
            }
        }
        else if (i < length_of_string - 1)
        {
            if (get_from_num_rim(input[i]) < get_from_num_rim(input[i+1]))
            {
                answer -= get_from_num_rim(input[i]);
            }
            if (get_from_num_rim(input[i]) >= get_from_num_rim(input[i+1]))
            {
                answer += get_from_num_rim(input[i]);
            }
        }
        else if (get_from_num_rim(input[i]) < get_from_num_rim(input[i-1]))
        {
            answer += get_from_num_rim(input[i]);
        }
        else
        {
            answer -= get_from_num_rim(input[i]);   
        }
        
    }
    return answer;
}

int main()
{
    string input;
    cin >> input;
    cout << get_from_num_rim(input) << endl;
    return 0;
}