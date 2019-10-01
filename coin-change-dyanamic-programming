#include<iostream>
using namespace std;
int main()
{
    int noOfCoins;
    cin>>noOfCoins;
    int coins[noOfCoins];
    for(int i=0;i<noOfCoins;i++)    cin>>coins[i];
    int num;
    cin>>num;
    int arr[noOfCoins+1][num+1];
    for(int i=0;i<=noOfCoins;i++)
        arr[i][0]=1;
    for(int i=0;i<=num;i++)
        arr[0][i]=0;
    for(int i=1;i<=noOfCoins;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(j-coins[i-1]<0)
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=arr[i-1][j]+arr[i][j-coins[i-1]];
        }
    }
    cout<<arr[noOfCoins][num];
}
