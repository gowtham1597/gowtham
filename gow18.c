int main()
{
    int l, high, i, temp1, temp2, remainder, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &high);
    printf("Armstrong numbers between %d an %d are: ", l, high);

    for(i = l + 1; i < high; ++i)
    {
        temp2 = i;
        temp1=i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == i)
        {
            printf("%d ", i);
        }
        n = 0;
        result = 0;

    }
    return 0;
    }
