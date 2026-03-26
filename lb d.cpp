#include <iostream>

struct lb {
	int a;
	lb *next;
	lb(int x ): a(x), next(nullptr) {}
};
lb n1(1), n2(2), n3(3), n4(4), n5(5);

void s_del(int n)
{
	lb dh(114);
	dh.next = &n1;
	lb* cur = &dh;
	while (cur != nullptr)
	{
		if (cur->next->a == n)
		{
			cur->next = cur->next->next;
		}
		cur = cur->next;
		std::cout << cur->a << std::endl;
	}

}


int main()
{
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	int n = 0;
	std::cin >> n;
	s_del(n);

	
	return 0;
}