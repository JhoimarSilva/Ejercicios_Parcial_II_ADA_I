#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int cookies(int k, vector<int> A)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int x : A)
    {
        pq.push(x);
    }

    int operaciones = 0;

    while (pq.size() > 1 && pq.top() < k)
    {
        int primero = pq.top();
        pq.pop();

        int segundo = pq.top();
        pq.pop();

        int nuevo = primero + 2 * segundo;

        pq.push(nuevo);

        operaciones++;
    }

    if (!pq.empty() && pq.top() >= k)
    {
        return operaciones;
    }

    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << cookies(k, A);

    return 0;
}