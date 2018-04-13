#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int arr[3][4] =
    {
        {0, 1, 2}, {1}, {1, 2}
    };

    for(const auto &v : arr)
    {
        for(const auto &k : v)
            cout << k << " ";
        cout << endl;
    }

    cout << 'A' - '\0' << endl; // ¿´¿´ A µÄASCIIÂë

    return 0;
}
