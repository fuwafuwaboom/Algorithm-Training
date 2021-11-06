void bubble_sort(int arr[], int sz)
{
    int i = 0;//冒泡排序的趟数
    int j = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int flag = 0;//保证不会多排
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] ^ arr[j + 1];
                arr[j + 1] = arr[j] ^ arr[j + 1];
                arr[j] = arr[j] ^ arr[j + 1];
                flag++;
            }
        }
        if (0 == flag)//说明已经排好
        {
            break;
        }
    }
}