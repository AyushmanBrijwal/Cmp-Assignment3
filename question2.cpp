#include <bits/stdc++.h>
using namespace std;

double median(int A[], int B[], int n){
	int i = 0, j= 0, count = 0;
	int middle1 = 0, middle2 = 0;
	while(count <=n){
		if(A[i] <= B[j]){
			middle1 = middle2;
			middle2 = A[i];
			 i = i+1;
		}
		else{
			middle1 = middle2;
			middle2 = B[j];
			j = j + 1;
		}
		if(i == n){
			middle1 = middle2;
			middle2 = B[0];
			break;
		}
		else if(j==n){
			middle1 = middle2;
			middle2 = A[0];
			break;
		}
		count = count + 1;
	}
	return (double)(middle1 + middle2) / 2;
}

int main()
{
    int A[] = {1, 14, 30, 26, 50};
    int B[] = {5, 13, 18, 30, 45};
 
    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);
    if (n1 == n2)
        cout << "Median is " << median(A, B, n1);
    else
        cout << "Doesn't work for arrays"
             << " of unequal size";
    getchar();
    return 0;
}
