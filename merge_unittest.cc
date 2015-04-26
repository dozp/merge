#include "merge.h"
#include "gtest/gtest.h"

using namespace std;

TEST(MergeTest, Test1)
{
	int A[10]={4, 1, 3, 2, 5};
	int B[5]={7, 6, 9, 8, 0};
	int exp_array[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	merge(A, B, 5, 5);
	EXPECT_EQ(exp_array, A);
}
