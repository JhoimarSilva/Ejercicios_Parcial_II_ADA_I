#include <iostream>
#include <set>

using namespace std;

int main()
{
    int q;
    cin >> q;

    multiset<int> heap;

    for (int i = 0; i < q; i++)
    {
        int tipo;
        cin >> tipo;

        if (tipo == 1)
        {
            int x;
            cin >> x;

            heap.insert(x);
        }
        else if (tipo == 2)
        {
            int x;
            cin >> x;

            heap.erase(heap.find(x));
        }
        else
        {
            cout << *heap.begin() << endl;
        }
    }

    return 0;
}