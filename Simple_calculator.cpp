#include <iostream>
#include <iomanip>
using namespace std;

// largest
void largest(int arr[], int len)
{
    int max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Largest Number is " << max << endl;
}

// Smallest
void smallest(int arr[], int len)
{
    int min = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Smallest Number is " << min << endl;
}

// Total
void total(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    cout << "Total is " << sum << endl;
}

// Average
void average(int arr[], int len)
{
    double average = 0.0;
    double sum = 0.0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    average = sum/len;
    cout << "Average is " << fixed << setprecision(3) << average << endl;
}

int main()
{
    int arr[1000];
    int num;
    int length = 0;
    bool finish = false;
    cout << "Enter a sequence of integer (-999 to finish): ";
    while (!finish)
    {
        cin >> num;
        if (length == 1000 || num == -999)
        {
            finish = true;
        }
        else
        {
            arr[length] = num;
            length++;
        }
    }
    largest(arr, length);
    smallest(arr, length);
    total(arr, length);
    average(arr, length);

    system("pause");
    return 0;
}