// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int num[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     int flag = 0;
//     int len = 0;
//     for (int i = 0; i < n; i++)
//     {
//         while (num[i] != 0)
//         {
//             int temp = num[i];
//             int rem = temp % 10;
//             len++;
//             temp /= 10;
//         }
//         int check = num[i];
//         for (int j = 0; i < len; j++)
//         {
//             int rem = check % 10;
//             if (rem == 4)
//             {
//                 flag++;
//             }
//             check /= 10;
//         }
//         printf("%d", flag);
//     }

//     return 0;
// }




#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int flag = 0;
    int len = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = num[i];
        while (temp != 0)
        {
            int rem = temp % 10;
            len++;
            temp /= 10;
        }
        int check = num[i];
        for (int j = 0; j < len; j++)
        {
            int rem = check % 10;
            if (rem == 4)
            {
                flag++;
            }
            check /= 10;
        }
        printf("%d", flag);
    }
    

    return 0;
}
