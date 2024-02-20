#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void insertAtBegining(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void deleteAtHead(Node* &head){
    Node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(Node* &head, int val){

    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

bool searchElement(Node* head, int val){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

Node* reverseList(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head = NULL;
    insertAtTail(head, 5);
    insertAtTail(head, 2);
    insertAtTail(head, 7);
    insertAtBegining(head, 10);
    insertAtBegining(head, 1);
    display(head);
    cout<<searchElement(head, 20)<<endl;
    cout<<searchElement(head, 7);
    deletion(head, 5);
    cout<<endl;
    display(head);
    deleteAtHead(head);
    cout<<endl;
    display(head);
    Node* newHead = reverseList(head);
    display(newHead);

    return 0;
}
