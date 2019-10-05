//#include <iostream>
//using namespace std;
//
//class node
//{
//public:
//	int data;
//	node* head;
//	node* tail;
//};
//
//class linkedList {
//private:
//	node* head;
//	node* tail;
//public:
//	linkedList() {
//		head = NULL;
//		tail = NULL;
//	}
//	void insert(int num);
//	int deletion(int num);
//};
//
//void linkedList::insert(int num) {
//	node* temp;
//	temp = head;
//
//	node* nptr = new node;
//	nptr->data = num;
//	if (head == NULL) {
//
//	}
//}
//
//
//class stack
//{
//private:
//	LL s;
//public:
//	int pop() {
//		int l = s.deleteT();
//		return l;
//
//	};
//	void push(int a) {
//		s.insertH(a);
//		s.insertT(a);
//	};
//};
//
//int main()
//{
//	stack ss;
//	ss.push(3);
//	ss.push(3);
//	ss.push(3);
//	cout << ss.pop();
//	cout << ss.pop();
//	ss.push(8);
//	cout << ss.pop();
//	cout << ss.pop();
//	cout << ss.pop();
//	ss.push(3);
//	return 0;
//}