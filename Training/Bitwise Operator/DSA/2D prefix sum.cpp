// 2D PREFIC SUM ALGORITHM 

 #include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cin >> row >> col;
    int mat[row+1][col+1];
    for(i=0;i<=col;i++)
    mat[0][i] = 0;
    for(i=0;i<=row;i++)
    mat[i][0] = 0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cin >> mat[i][j];
        }
    }
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++){
            mat[i][j] += mat[i][j-1];
        }
    }
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=row;j++){
            mat[i][j] +=  mat[i-1][j];
        }
    }
    int start_row,end_row,start_col,end_col,sum;
    cin >> start_row >> start_col >> end_row >> end_col;
    sum = mat[end_row][end_col];
    sum = sum - mat[end_row][start_col -1];
    sum = sum - mat[start_row-1][end_col];
    sum = sum + mat[start_row-1][start_col-1];
    cout << sum;
} 
