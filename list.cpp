#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int d){
		data = d;
		next = NULL;
	}
};

int length(node *head){
	int len = 0;

	if(head == NULL) return 0;

	while(head!=NULL){
		head = head->next;
		len++;
	}
	return len;
}

int len_recursive(node *head){  // recursively computes the length of the linked list
	if(head == NULL){
		return 0;
	}

	else{
		return 1+len_recursive(head->next);
	}

}

void insertAtBeg(node *&head,int data){

	node *n = new node(data);
    n->next = head;
    head = n;


}

void insertAtTail(node *&head,int data){

	node *dummy_runner = head;

	while(dummy_runner->next!=NULL){
		dummy_runner = dummy_runner->next;

	}

	node *n = new node(data);
	dummy_runner->next = n;
	n->next = NULL;

}

void insertAnyWhere(node *&head,int data,int pos){

	if(head == NULL && pos == 0){
		insertAtBeg(head,data);
	}
	else if (pos > length(head)){

		insertAtTail(head,data);
	}
	else{
		int jumps = 1;
		node *temp = head;

		while(jumps <= pos-1){
			temp = temp->next;
			jumps++;
		}

        node *n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}

}

void middle(node *head){ //Rabbit and hare trick!
	node *rabbit = head;
	node *hare = head;

    while(rabbit->next!=NULL && rabbit->next->next!=NULL){
    	rabbit = rabbit->next->next;
    	hare = hare->next;
    }
    cout << "Middle of LL is :" << hare->data; 

}

void printLL(node *head){
	while(head!=NULL){
		cout <<head->data <<"-->";
		head = head->next;
	}
	cout <<"\n";
}

bool isItPresent(node *head,int data){
	node *dummy = head;
	while(dummy!=NULL){
		if(dummy->data == data)
			return true;
		else
			dummy = dummy->next;
	}
	return false;
}


bool isItPresent_recursive(node *head,int key){
	if(head == NULL)
		return false;
	if(head->data == key)
		return true;
	else
		isItPresent_recursive(head->next,key);
}

void reverse(node *&head){
	node *current = head;
	node *prev = NULL;
	node *next;

	while(current!=NULL){

		next = current->next; //save the next node pointed by current
		current->next = prev; //make currents next part point to prev
		prev = current;   // make prev point to current node
		current = next; // now make the next node stored in 'next' as current

	}

	head = prev;

}

void kthNodeFromEnd(node *head,int k){      //1-2-3-4
     
     int len = length(head); //Get the total length of the linked list

     node *temp = head;

     for (int i = 1; i < len-k+1; ++i)
     {
     	temp = temp->next;
     }

     cout << temp->data;
     
     
}

void kthNodeV2(node *head,int k){
	node *fast_ptr = head;
	node *slow_ptr = head;   // 100 300 400 500 200
    

    while(fast_ptr!=NULL && fast_ptr->next!=NULL && n-k>=k ){

    	

    }
	

}

int main(int argc, char const *argv[])
{
	node *head = NULL;
    insertAtBeg(head,100);
    insertAtBeg(head,300);
    insertAtBeg(head,400);
    insertAtBeg(head,500);
    insertAtTail(head,200);
    if(isItPresent_recursive(head,200)){
    	cout << "Found";
    }
    else{
    	cout << "Not Found";
    }
    //insertAnyWhere(head,300,2);
    //insertAnyWhere(head,400,4);
    //insertAnyWhere(head,500,3);
    //cout << "Size of LL "<<len_recursive(head) <<"\n";
    //middle(head);
    cout<<"\n";
    //reverse(head);
    printLL(head);
    kthNodeFromEnd(head,2);

	return 0;
}