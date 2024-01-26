#include"sqlist.h"

//��ʼ��
void SeqListInit(SL* ps) {
	assert(ps);

	ps->a = (int*)malloc(sizeof(Elemtype) * 4);
	if (ps->a == NULL) {
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}

	ps->size = 0;
	ps->capacity = 4;

}

//��ӡ
void SeqListPrint(SL* ps) {
	assert(ps);

	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}

	printf("\n");
}

//ͷ��ͷɾ
void SeqListPushFront(SL* ps, Elemtype x);
void SeqListPopFront(SL* ps);

//β��βɾ
void SeqListPushBack(SL* ps, Elemtype x) {
	assert(ps);

	//�ڴ���ʱҪ����
	if (ps->capacity == ps->size) {
		ps->capacity *= 2;
		ps->a = (Elemtype*)realloc(ps->a ,sizeof(Elemtype) * ps->capacity);
		if (ps->a == NULL) {
			printf("����ʧ��\n");
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

//ָ��λ�õĲ�����ɾ��
void SeqListInsert(SL* ps, Elemtype x, int pos);
void SeqListErase(SL* ps, int pos);



