int *create_array(int N)
{
    int *A = new int[N];

    for (int i = 1; i <= N; i++)
        A[i-1] = i;
    return A;
}
