#include <iostream>

using namespace std;

typedef struct Node{
    string songName;
    Node *link;
}Node;
Node *createNode(string data){
    Node *newNode = new Node; 
    newNode->songName = data;
    newNode->link = NULL;

    return newNode;
}
void traverse(Node *head){
    Node *temp = new Node;
    temp = head;

    cout << "My Playlist" <<endl;
    while(temp != NULL){
        cout << temp->songName<< "->"<<endl;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }

        temp = temp->link;
    }
}
Node *insertAtEnd(string data, Node *head){
    if(head == NULL){
        Node *newNode = createNode(data);
        head = newNode;
        cout << "A new node has been inserted at the end \n" << endl;
        return head;
    }
    Node *temp = new Node;
    temp = head;

    while(temp->link != NULL){
        temp = temp->link;
    }

    Node *newNode = createNode(data);
    temp->link = newNode;
 
    cout << "A new node has been inserted at the end \n" << endl;
    return head;
}

Node *insertAtBeginning(string data, Node *head){
    Node *newNode = createNode(data);
    newNode->link = head;

    head = newNode;

    cout << "A new node has been inserted at the beginning \n" <<endl;

    return head;
}
string insertAfter(string after, string data, Node *head){
    Node *temp = new Node;
    temp = head;

    while(temp->songName.compare(after) != 0){
        if(temp == NULL){
            return "No such song exist, please try again later.";
        }

        temp = temp->link;
    }
    Node *newNode = createNode(data);
    newNode->link = temp->link;
    temp->link = newNode;

    return "An new node has been added after " + after + "\n";
}


int main(){
    Node *head = createNode("Sanctuary by Joli");

    head = insertAtEnd("Sinig by Dionela", head);
    insertAtEnd("Marilag by Dionela", head);
    insertAtEnd("Binbirocha by Andrew E",head);
    head = insertAtBeginning("Banyo Queen by Andrew E",head);
    head = insertAtBeginning("Araw-Araw by Ben&Ben",head);
    head = insertAtBeginning("MY DAY by Hellmerry",head);
    head = insertAtBeginning("Walang Alam by Hev abi",head);

    
    
    



    traverse(head);




    return 0;
}