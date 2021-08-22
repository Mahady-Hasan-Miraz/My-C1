// C++ Program to implement
// standard error of mean.
#include <bits/stdc++.h>
using namespace std;

// Function to find sample mean.
float mean(float arr[], int n)
{
	// loop to calculate
	// sum of array elements.
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum + arr[i];
	
	return sum / n;
}
// Function to calculate sample
// standard deviation.
float SSD(float arr[], int n)
{
	float sum = 0;	
	for (int i = 0; i < n; i++)
		sum = sum + (arr[i] - mean(arr, n))
					* (arr[i] - mean(arr, n));

	return sqrt(sum / (n - 1));
}
// Function to calculate sample error.
float sampleError(float arr[], int n)
{	
	// Formula to find sample error.
	return SSD(arr, n) / sqrt(n);
}
// Driver function
int main()
{
    float arr[100];
    int n;
cout<< "How many elements do you want to sort? :";
    cin >> n;

    cout<<"Enter n elements : ";
    for(int i=0;i<n;++i)
    {
      cin >> arr[i];
    }
	cout << sampleError(arr, n);	
	return 0;
}





	/*float arr[] = { 78.53, 79.62, 80.25,
					81.05, 83.21, 83.46 };
	int n = sizeof(arr) / sizeof(arr[0]);*/