// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int *ary = (int *)malloc(n * sizeof(int));
//     int *ar = (int *)malloc(n * sizeof(int));
//     int *a = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ary[i]);
//         scanf("%d", &ar[i]);
//         scanf("%d", &a[i]);
//         fflush(stdin);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (ary[i]-ar[i] <= a[i])
//         {
//             printf("YES\n");
//         }
//         else\
//         {
//             printf("NO\n");
//         }
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin >> t;
// 	while(t--)
// 	{
// 	    int x,y,d;
// 	    cin>> x >> y >>d;
	    
// 	    if(abs(x-y)<=d)
// 	        cout << "YES"<<endl;
// 	    else
// 	        cout << "NO" <<endl;
// 	}
// 	return 0;
// }

