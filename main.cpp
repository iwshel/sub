#include <bits/stdc++.h>

using namespace std;
void quickSort(vector <int>& numbers, int left, int right)
{
    int i = left, j = right;
    int pivot = numbers[(left+right)/2];

    while(i <= j)
    {
        while(numbers[i] < pivot) i++;
        while(numbers[j] > pivot) j--;
        if (i <= j) {
                swap(numbers[i], numbers[j]);
                i++;
                j--;
    }
    }
    for(int i = 0; i < numbers.size(); i++) cout<<numbers[i]<<" ";
    cout<<endl;
    if (left < j) quickSort(numbers, left, j);
    if (i < right) quickSort(numbers, i, right);
}
int main()
{
    int amount;
    cin>>amount;
    vector<int> numbers;
    for (int i = 1; i <= amount; i++) numbers.push_back(i);
    for(int i = 2; i < amount; i++) swap(numbers[i], numbers[i/2]);
    for(int i = 0; i < amount; i++) cout<<numbers[i]<<" ";
    cout<<endl;
    quickSort(numbers, 0, amount-1);
    return 0;
}
