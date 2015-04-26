
void merge(int A[], int B[], int m, int n)
{
	int i, j, k;
	int C[m+n];
	i=j=k=0;

	while(i<m && j<n)
	{
		if(A[i] <= B[j])
			C[k++]=A[i++];
		else
			C[k++]=B[j++];
	}

	for(;i<m;)
		C[k++]=A[i++];
	for(;j<n;)
		C[k++]=B[j++];

	for(k=0; k<m+n; k++)
		A[k]=C[k];
		
}
