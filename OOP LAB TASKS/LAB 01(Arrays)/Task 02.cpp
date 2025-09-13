#include <iostream>
using namespace std;
int Min(int** arr,int row, int column);
int Max(int** arr,int row, int column);

int main()
{
	int row, column;
	
	cout<<"Enter the row size of array : ";
	cin>>row;
	cout<<"Enter the column size of array : ";
	cin>>column;
	
	int** arr;
	arr = new int*[row];
	for (int i=0; i<row; i++)
		arr[i] = new int[column];

	for(int a=0; a<row; a++)
	{
		for(int b=0; b<column; b++)
		{
			cout<<"Enter any number in arr["<<a<<"]["<<b<<"] : ";
			cin>>arr[a][b];
		
		}
	}
	for(int a=0; a<row; a++)
	{
		for(int b=0; b<column; b++)
		{
			cout<<"Number in arr["<<a<<"]["<<b<<"] is : "<<arr[a][b]<<endl;
		}
	}
	cout<<"Minimum value in array is : "<< Min(arr, row, column)<<endl;
	cout<<"Maximum value in array is : "<< Max(arr, row, column)<<endl;

	return 0;
}


int Min(int** arr, int row, int column)
{
    int min=arr[0][0];
    for (int i = 0; i <row; i++)
    {
         for (int j = 0; j <column; j++)
         {
             if (arr[i][j] < min)
             {
                 min = arr[i][j];
             }
         }
     
    }
    return min;
}
int Max(int** arr, int row, int column)
{
    int max=arr[0][0];
    for (int i = 0; i <row; i++)
    {
         for (int j = 0; j <column; j++)
         {
             if (arr[i][j]>max)
             {
                 max = arr[i][j];
             }
         }
     
    }
    return max;
}



