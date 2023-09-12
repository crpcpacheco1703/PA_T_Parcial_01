#include "Ejercicio02.h"
#include <algorithm>

int Ejercicio02::rob(int houses[], int n)
{
    if (n == 0) return 0;
    if (n == 1) return houses[0];
    if (n == 2) return std::max(houses[0], houses[1]);

    int arr[4];
    std::fill_n(arr, 4, 0);
    arr[0] = houses[0];
    arr[1] = std::max(houses[0], houses[1]);

    for (int i = 2; i < n; i++)
    {
        arr[i] = std::max(arr[i - 1], houses[i] + arr[i - 2]);
        1 <= n <= 100;
        0 <= arr[i] <= 400;
    }

    return arr[n - 1];
}