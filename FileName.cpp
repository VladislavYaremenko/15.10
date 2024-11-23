#include <iostream>
using namespace std;

void deleteSymbolByNumber(char line[]) 
{
    cout << "line: " << line << endl;
    cout << "Enter number: ";
    int number;
    cin >> number;
    int length = 0;
    while (line[length] != '\0') {
        length++;
    }
    for (int i = number - 1; i < length; i++) {
        line[i] = line[i + 1];
    }
    cout << "New line: " << line << endl;
}
void deleteSelectedSymbol(char line[])
{
    cout << "line: " << line << endl;
    cout << "Enter symbol: ";
    char symbol;
    cin >> symbol;
    int length = 0;
    while (line[length] != '\0') {
        length++;
    }
    int j = 0;
    for (int i = 0; i < length; i++) 
    {
        if (line[i] != symbol) 
        {
            line[j] = line[i];
            j++;
        }
    }
    line[j] = '\0';
    cout << "New line: " << line << endl;
}

void insertSymbol(char line[]) 
{
    cout << "Enter symbol: ";
    char symbol;
    cin >> symbol;
    cout << "Enter position: ";
    int position;
    cin >> position;
    int length = 0;
    while (line[length] != '\0') 
    {
        length++;
    }
    for (int i = length; i >= position - 1; i--) 
    {
        line[i + 1] = line[i];
    }
    line[position - 1] = symbol;
    line[length + 1] = '\0';
    cout << "Updated line: " << line << endl;
}

int main() 
{
    char line[40] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    /*deleteSymbolByNumber(line);*/
    /*deleteSelectedSymbol(line);*/
    insertSymbol(line);
    return 0;
}