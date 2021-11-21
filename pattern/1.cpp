#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*
    * * * * * 
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    */
}
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    /*
    * 
    * *
    * * *
    * * * *
    * * * * *
*/
}

void pattern3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
/*
    *****
    ****
    ***
    **
    *
*/
}

void pattern4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
/*
    1 
    1 2
    1 2 3 4
    1 2 3 4 5
*/
}
void pattern5(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int totalCol = i < n ? i : 2*n-i;
        for (int j = 1; j <= totalCol ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

/*
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/
    
}
void pattern6(int n){
    for (int i = 1; i < 2*n; i++)
    {
        int totalCol = i < n ? i : 2*n-i;
        int space = n-totalCol;
        for (int k = 1; k <= space; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j < totalCol; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

/*
    * 
   * *
  * * *
 * * * *
* * * * * 
 * * * *
  * * *
   * *
    * 
*/
    
}
void pattern7(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int totalCol = 2;
        if(i == 1 || i == 2*n-1){
            totalCol = 1;
        }
        int space1 = n - (i<n ? i : 2*n-i);
        for(int k = 1; k<=space1; k++){
            cout<<" ";
        }

        for (int j = 1; j <=1; j++)
        {
            cout<<"*";
        }

        space1 =  (i <= n ? 2*i-3 : 2*n-i+n-i+2);

        for(int k = 1; k<=space1; k++){
            cout<<" ";
        }

        if(i!=1 && i!=2*n-1){
        for (int j = 1; j <= 1; j++)
        {
            cout<<"*";
        }
        }
        cout<<endl;
    }
    
}
void pattern8(int n){

}

int main()
{
    // pattern1(5);
    // pattern2(5);
    // pattern3(5);
    // pattern4(5);
    // pattern5(5);
    // pattern5(5);
    // pattern6(5);
    pattern7(5);

    return 0;
}


/*
    *
   * *
  *  *
 *   * 
*     *
 *    *
  *   *
   *  * 
    *
*/

/*
    *           1->0
   * *          2->1
  *   *         3->3
 *     *        4->5
*       *       5->7
 *     *        6->5
  *   *         7->3
   * *          8->1
    *           9->0
*/