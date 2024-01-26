#include"sqlist.h"

//初始化
void SeqListInit(SL* ps) {
	assert(ps);

	ps->a = (int*)malloc(sizeof(Elemtype) * 4);
	if (ps->a == NULL) {
		printf("申请内存失败\n");
		exit(-1);
	}

	ps->size = 0;
	ps->capacity = 4;

}

//打印
void SeqListPrint(SL* ps) {
	assert(ps);

	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}

	printf("\n");
}

//头插头删
void SeqListPushFront(SL* ps, Elemtype x);
void SeqListPopFront(SL* ps);

//尾插尾删
void SeqListPushBack(SL* ps, Elemtype x) {
	assert(ps);

	//内存满时要增容
	if (ps->capacity == ps->size) {
		ps->capacity *= 2;
		ps->a = (Elemtype*)realloc(ps->a ,sizeof(Elemtype) * ps->capacity);
		if (ps->a == NULL) {
			printf("扩容失败\n");
			exit(-1);
		}
	}
	ps->a[ps->size] = x;
	ps->size++; 
}

void SeqListPopBack(SL* ps) {
	assert(ps);

	ps->a[ps->size] = 0;
	ps->size--;
}

//指定位置的插入与删除
void SeqListInsert(SL* ps, Elemtype x, int pos);
void SeqListErase(SL* ps, int pos);



