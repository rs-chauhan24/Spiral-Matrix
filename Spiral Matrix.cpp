#include<iostream>
using namespace std;

void spiral_matrix(int arr[4][4],int m ,int n)
{
    int total=m*n;
    
    int start_row=0,start_col=0,end_row=m-1,end_col=n-1;
    
    while(start_row<=end_row && start_col<=end_col)//while(n--) ya while)(m--) bi kar skai thee
    {
        //start_row
        for(int i=start_col;i<=end_col;i++)
        {
            cout<<arr[start_row][i]<<" ";
        }
        start_row++;
        
        //end_col
        for(int i=start_row;i<=end_row;i++)
        {
            cout<<arr[i][end_col]<<" ";
        }
        end_col--;
        
        //end_row
        for(int i=end_col;i>=start_col;i--)
        {
            cout<<arr[end_row][i]<<" ";
        }
        end_row--;
        
        //start_col
        for(int i=end_row;i>=start_row;i--)
        {
            cout<<arr[i][start_col]<<" ";
        }
        start_col++;
    }
}

int
main ()
{

  int arr[4][4] =  { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
  
  spiral_matrix(arr,4,4);
  
  
  
  return 0;
}


