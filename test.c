#include"sqlist.h"

void TestSqlist() {
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushBack(&s, 9);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

}

int main()
{
	TestSqlist();

	return 0;
}
//int removeElement(int* nums, int numsSize, int val) {
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == val) {
//            for (int j = i; j < numsSize - 1; j++) {
//                nums[j] = nums[j + 1];
//            }
//            numsSize--;
//        }
//    }
//    return numsSize;
//}
//
//int main()
//{
//    int A[8] = { 0,1,2,2,3,0,4,2 };
//    removeElement(&A, 8, 2);
//    return 0;
//}