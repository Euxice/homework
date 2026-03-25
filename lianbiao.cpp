#include<iostream>

struct slb {  ///                   a1 ->a2     a2->a1
	int a;
	slb *next;
	slb* prev;
	slb(int x):next(nullptr),prev(nullptr){}
};



struct lb//                a1 ->a2      a2->a3
{
	int a;
	lb *next;
	lb(int x):a(x),next(NULL){ }


};
lb* n0 = new lb(0);
lb* n1 = new lb(1);
lb* n2 = new lb(5);
lb* n3 = new lb(10);
lb* n4 = new lb(2);

void charu(lb* n0, lb* p)  // n0 - p - n1
{
	lb* n1 = n0->next;
	p->next = n1;
	n0->next = p;
}


void de(lb* n0)//  p      n0 - n1
{
	if(n0->next == nullptr)return;
	lb* p = n0->next;
	lb* n1 = p->next;
	n0->next = n1;
	delete p;
}

lb* ac(lb* head, int a)// look
{
	for (int i = 0; i < a; i++)
	{
		if (head == nullptr)return nullptr;
		head = head->next;
	}
	return head;
}

int find(lb* head, int t)
{
	int in = 0;
	while (head != nullptr)
	{
		if (head->a == t)
		{
			return in;//        finf and print
		}
		head = head->next;
		in++;
	}
	return -1;// not find
}

int main()
{
	n0 -> next = n1;
	n1 -> next = n2;
	n2 -> next = n3;
	n3 -> next = n4;


	return 0;
}