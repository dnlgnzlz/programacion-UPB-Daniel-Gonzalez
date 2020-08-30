// programacion aplicada UPB
//DANIEL GONZALEZ HERRERA
//HELLO

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{ "Hello", "C++", "World", "from", "VS Code", "and the C++ extension!","Daniel","Gonzalez" };

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    system("pause");
}