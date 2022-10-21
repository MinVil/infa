#include <iostream>
#include <ctime>
using namespace std;



void Print(char* word)
{
    setlocale(LC_ALL, "ru");
    char* begin = word;
    int counter = 0;

    while (true)
    {
        if (*word >= '0' && *word <= '9')
        {
            counter++;
            word++;
            continue;
        }

        if (*word == ' ' || *word == '\0')
        {

            if (counter == 1)
            {
                while (begin < word)
                {
                    cout << *begin;
                    begin++;
                }
                cout <<"   ";
            }
            if (*word == '\0')
                break;
            Print(++word);
            break;
        }

        word++;
    }
}

void main()
{
    setlocale(LC_ALL, "ru");
    char word[256];
    cout << "¬ведите текст ";
    cin.getline(word, 255);
    word[255] = '\0';
    Print(word);
}