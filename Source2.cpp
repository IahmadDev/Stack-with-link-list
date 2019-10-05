//#include <iostream>
//using namespace std;
//
//class node {
//public:
//	int data;
//	node* next;
//	node* previous;
//};
//
//class CircularLinkedList {
//private:
//	node* head;
//	node* tail;
//public:
//	CircularLinkedList() {
//		head = NULL;
//		tail = NULL;
//	}
//
//	void print();
//	void insertionAtHead(int num);
//	void insertionAt(int position, int num);
//	void insertionAtTail(int num);
//	void search(int num);
//	void deletion(int num);
//};
//
//void CircularLinkedList::deletion(int num) {
//
//	node* start;
//	start = head;
//
//	node* last;
//	last = tail;
//
//	if (num == start->data) {
//		head = head->next;
//		head->previous = tail;
//		tail->next = head;
//		delete start;
//	}
//	else if (num == tail->data) {
//		tail = tail->previous;
//		tail->next = head;
//		delete last;
//	}
//	else {
//		while (start != last) {
//			if (start->data == num) {
//				start->previous->next = start->next;
//				start->next->previous = start->previous;
//			}
//			start = start->next;
//		}
//
//	}
//
//
//}
//
//void CircularLinkedList::print() {
//
//	node* first;
//	first = head;
//
//	node* end;
//	end = tail;
//
//	while (first != end) {
//		std::cout << first->data << "  ";
//		first = first->next;
//	}
//	std::cout << first->data;
//}
//
//void CircularLinkedList::insertionAtHead(int num) {
//	node* current;
//	current = head;
//
//	node* temp = new node;
//	temp->data = num;
//	temp->previous = tail->next;
//	temp->next = current;
//	current->previous = temp;
//	head = temp;
//
//}
//
//void CircularLinkedList::insertionAt(int position, int num) {
//
//	node* current;
//	current = head;
//	node* last;
//	last = tail;
//
//	int count = 1;
//
//	while (current != tail)
//	{
//		count++;
//		current = current->next;
//	}
//
//	if (position == 1) {
//		insertionAtHead(num);
//		return;
//	}
//	else if (position < count + 2) {
//		if (position > count) {
//			insertionAtTail(num);
//		}
//		else {
//			// code for insertion at particular position.
//
//			for (int i = 0; i < position - 2; i++) {
//				current = current->next;
//			}
//
//			node* next;
//			next = current->next;
//			node* temp = new node;
//			temp->data = num;
//			temp->previous = current;
//			temp->next = next;
//			current->next = temp;
//			next->previous = temp;
//
//		}
//	}
//	else
//	{
//		cout << "\n" << num << " cannot added at position " << position << endl;
//		cout << "coz your list length is " << count << "\n\n";
//	}
//}
//
//void CircularLinkedList::insertionAtTail(int num) {
//
//	node* ptr;
//	ptr = head;
//
//	node* tptr;
//	tptr = tail;
//
//	node* temp = new node;
//	temp->data = num;
//	temp->next = head;
//	temp->previous = tail;
//
//	if (head == NULL) {
//		head = temp;
//		tail = temp;
//	}
//	else {
//		//temp->previous = tptr;
//		//temp->next = head;
//		tptr->next = temp;
//		ptr->previous = temp;
//		tail = temp;
//	}
//}
//
//void CircularLinkedList::search(int num) {
//	node* first;
//	first = head;
//
//	node* end;
//	end = tail;
//
//	int index = 1;
//
//	if (num == end->data) {
//		print();
//		cout << "\n" << num << " is found at tail" << endl;
//		return;
//	}
//
//	while (first->next != head) {
//		if (first->data == num) {
//			cout << num << " is found at " << index << endl;
//			return;
//		}
//		index++;
//		first = first->next;
//	}
//	cout << num << " number is not found at any index." << endl;
//}
//
//int main() {
//
//	int del;
//	CircularLinkedList cdl;
//
//	cdl.insertionAtTail(4);
//	cdl.insertionAtTail(3);
//	cdl.insertionAtTail(2);
//	cdl.insertionAtTail(1);
//	cdl.insertionAtTail(0);
//
//	cdl.print();
//	cout << endl;
//	system("pause");
//	cout << "enter Num to DEl";
//	cin >> del;
//	cdl.deletion(del);
//
//	cdl.print();
//
//	cout << '\n';
//	system("pause");
//}
//
