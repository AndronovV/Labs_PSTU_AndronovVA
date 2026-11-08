void selection_sort(int* arr, int n)
{
    for (int i = 1; i < n-1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}