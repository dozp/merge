#include "merge.h"
#include "gtest/gtest.h"

using namespace std;

template<typename T, size_t size>
::testing::AssertionResult ArraysMatch(const T (&expected)[size],
		const T (&actual)[size]){
	for (size_t i(0); i < size; ++i){
		if (expected[i] != actual[i]){
			return ::testing::AssertionFailure() << "array[" << i
				<< "] (" << actual[i] << ") != expected[" << i
				<< "] (" << expected[i] << ")";
		}
	}

	return ::testing::AssertionSuccess();
}

TEST(MergeTest, Test1)
{
	int A[10]={1, 4, 5, 7, 9};
	int B[5]={0, 2, 3, 6, 8};
	int exp_array[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	merge(A, B, 5, 5);
	//EXPECT_EQ(exp_array, A);

	//ASSERT_THAT(exp_array, ContainerEq(A));
	EXPECT_TRUE(ArraysMatch(exp_array, A));
}
