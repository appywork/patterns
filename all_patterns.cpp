#include <iostream>
#include <cmath>

using namespace std;

/*
//Pattern 1
// *
// *  *
// *  *  *
// *  *  *  *
// *  *  *  *  *
int main()
{
    int n;
    cout << "Entrer the numbers of Rows: " << endl;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
//Pattern 2
// * * * * *
// * * * *
// * * *
// * *
// *
int main()
{
    int n;
    cout << "Enter the number of Rows: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 3
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
int main()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout << "  ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
//Pattern 4
// * * * * *
//   * * * *
//     * * *
//       * *
//         *
int main()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin>> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<< "  ";
        }
        for (int k = n; k >= i; k--)
        {
            cout << " *";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 5
// * * * * * * *
// * * * * * * *
// * * * * * * *
// * * * * * * *
// * * * * * * *
int main()
{
    int l;
    cout << "Enter the Number of Length : " << endl;
    cin >> l;
    
    int b;
    cout << "Enter the Number of Breath: " << endl;
    cin >> b;
    
    for(int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
 */
/*
// Pattern 6
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
int main()
{
    int side;
    cout << "Enter the Number of sides : " << endl;
    cin >> side;
   
    for(int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 7
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
int main()
{
    int side;
    cout << "Enter the Number of sides : " << endl;
    cin >> side;
   
    for(int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            if(i == 1 || i == side || j == 1 || j == side)
            {
                cout << "* ";
            }
            else
            {
                cout <<"  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 8
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
int main()
{
    int side;
    cout << "Enter the Number of Rows: " << endl;
    cin >> side;
   
    for(int i = 1; i <= side; i++)
    {
        for (int j = side; j >= i; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= side; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 9
//     * * * * *
//    *       *
//   *       *
//  *       *
// * * * * *
int main()
{
    int side;
    cout << "Enter the Number of Rows: " << endl;
    cin >> side;
   
    for(int i = 1; i <= side; i++)
    {
        for (int j = side; j >= i; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= side; k++)
        {
            if(i == 1 || i == side || k == 1 || k == side)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
 */
/*
// Pattern 10
//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
// * * * * * * * * * * *
int main ()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j >= 1; j--)
        {
            cout << "  ";
        }
        for(int k = 1; k <= 2*i - 1; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    
    return 0;
}
 */
/*
// Pattern 11
//         *
//       *   *
//     *   *   *
//   *   *   *   *
// *   *   *   *   *
int main ()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j >= 1; j--)
        {
            cout << "  ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout << "  * ";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 12
//           *
//         *   *
//       *       *
//     *           *
//   *               *
// * * * * * * * * * * *
int main ()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j >= 1; j--)
        {
            cout << "  ";
        }
        for(int k = 1; k <= 2*i - 1; k++)
        {
            if(i == 1 || i == n || k == 1 || k == 2*i -1)
            {
                cout << " *";
            }
            else
            {
                cout <<"  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
 */
/*
// Pattern 13
// * * * * * * * * * * *
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *
int main ()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << "  ";
        }
        for(int k = 2*n - i; k >= i; k--)
        {
            cout << " *";
        }
        cout << endl;
    }
    
    return 0;
}
 */
/*
// Pattern 14
// *   *   *   *   *
//   *   *   *   *
//     *   *   *
//       *   *
//         *
int main ()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << "  ";
        }
        for(int k = n; k >= i; k--)
        {
            cout << "  * ";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 15
// * * * * * * * * * * *
//   *               *
//     *           *
//       *       *
//         *   *
//           *
int main ()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << "  ";
        }
        for(int k = 2*n - i; k >= i; k--)
        {
            if(i == 1 || i == n || k == 2*n-i || k == i)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
 */
/*
// Pattern 16
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
int main ()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j >= 1; j--)
        {
            cout << "  ";
        }
        for(int k = 1; k <= 2*i - 1; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << "  ";
        }
        for(int k = 2*(n-1) - i; k >= i; k--)
        {
            cout << " *";
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 17
//             *
//           *   *
//         *       *
//       *           *
//     *               *
//   *                   *
// *                       *
//   *                   *
//     *               *
//       *           *
//         *       *
//           *   *
//             *
int main ()
{
    int n;
    cout << "Enter the Number of Rows: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j >= 1; j--)
        {
            cout << "  ";
        }
        for(int k = 1; k <= 2*i - 1; k++)
        {
            if(i == 1 || k == 1 || k == 2*i -1)
            {
                cout << " *";
            }
            else
            {
                cout <<"  ";
            }
        }
        cout << endl;
    }
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << "  ";
        }
        for(int k = 2*(n-1) - i; k >= i; k--)
        {
            if(i == (n-1) || k == 2*(n-1)-i || k == i)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
*/
/*
// Pattern 18
// *                     *
// * *                 * *
// * * *             * * *
// * * * *         * * * *
// * * * * *     * * * * *
// * * * * * * * * * * * *
int main()
{
    int n;
    cout << "Enter the Number of Rows: ";
    cin>> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= i; j++)
        {
            cout << "* ";
        }
        for(int k = 2*n - i; k > i; k--)
        {
            cout << "  ";
        }
        for(int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
 */
/*
// Pattern 19
// * * * * * * * * * * * *
// * * * * *     * * * * *
// * * * *         * * * *
// * * *             * * *
// * *                 * *
// *                     *
int main()
{
    int n;
    cout << "Enter the number of Rows: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        for(int k = 1; k <2*i - 1; k++)
        {
            cout << "  ";
        }
        for (int l = n; l >= i; l--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
 */
/*
// Pattern 20
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
int main()
{
    int n;
    cout << "Enter the Number of Rows: ";
    cin>> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= i; j++)
        {
            cout << "* ";
        }
        for(int k = 2*n - i; k > i; k--)
        {
            cout << "  ";
        }
        for(int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        for(int k = 1; k <2*i - 1; k++)
        {
            cout << "  ";
        }
        for (int l = n; l >= i; l--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
*/
/*
// Pattern 21
// * * * * * * * * * * * *
// * * * * *     * * * * *
// * * * *         * * * *
// * * *             * * *
// * *                 * *
// *                     *
// *                     *
// * *                 * *
// * * *             * * *
// * * * *         * * * *
// * * * * *     * * * * *
// * * * * * * * * * * * *
int main()
{
    int n;
    cout << "Enter the Number of Rows: ";
    cin>> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        for(int k = 1; k <2*i - 1; k++)
        {
            cout << "  ";
        }
        for (int l = n; l >= i; l--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= i; j++)
        {
            cout << "* ";
        }
        for(int k = 2*n - i; k > i; k--)
        {
            cout << "  ";
        }
        for(int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
*/
/*
// Pattern 22
// Pascal Triangle
//        1
//      1   1
//    1   2   1
//  1   3   3   1
//1   4   6   4   1
int main()
{
    int n;
    cout << "Enter the Number of Rows: ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout << "  ";
        }
        int p = 1;
        for(int k = 0; k <= i; k++)
        {
            cout<< " " <<p << "  ";
            p = p * (i - k)/(k + 1);
        }
        cout << endl;
    }
    return 0;
}
 */
/*
// Pattern 23
// A
// B B
// C C C
// D D D D
// E E E E E
int main ()
{
    char n, alpha = 'A';
    cout << "Enter the Number of Rows: ";
    cin >> n;

    for(int i = 1; i <= (n - 'A' + 1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << alpha << " ";
        }
        alpha++;
        cout << endl;
    }
    
    
    return 0;
}
*/
