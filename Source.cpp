//#include <iostream>
//using namespace std;
//
//class node
//{
//public:
//	int data;
//	node* link;
//	node* top;
//};
//
//class Stacklinklist {
//private:
//	node* link;
//	node* top;
//public:
//	Stacklinklist() {
//		link = NULL;
//		top = NULL;
//	}
//	void push(int num);
//	void pop();
//	void print();
//};
//
//void Stacklinklist::push(int num) {
//	//node* temp;
//	//temp = top;
//
//	node* temp = new node;
//	temp->data = num;
//	temp->link = top;
//	top = temp;
//	}
//
//void Stacklinklist::pop()
//{
//	node* temp;
//	if (top == NULL)return;
//	temp = top;
//	top = top->link;
//	free(temp);
//}
//
//void Stacklinklist::print()
//{
//	node* temp;
//	temp = top;
//	while (top->link != NULL)
//	{
//		cout << top->data;
//		top = top->link;
//	}
//}
//
//int main()
//{
//	Stacklinklist ss;
//	ss.push(3);
//	ss.push(4);
//	ss.push(5);
//	ss.print();
//	//cout << ss.pop();
//	//cout << ss.pop();
//	ss.print();
//	ss.push(8);
//	//cout << ss.pop();
//	//cout << ss.pop();
//	//cout << ss.pop();
//	ss.push(3);
//	system("pause");
//	return 0;
//}