#include <stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next ;//pointer

    //constructor
    Node(int data){
        this -> data= data;
        this -> next= NULL;
    }

 // destructor
 ~Node(){
    int value= this -> data;

    // memory free
    if(this -> next != NULL){
        delete next;
        this -> next= NULL;
    }
    cout<<"Memory is free for node with data "<<value<<endl;
 }
     
};

void insertionAtHead(Node* &head, int d){
    //new node creation
    Node* temp= new Node(d);
    temp -> next= head; 
    head= temp;
}

void insertAtTail(Node* &tail, int d){
    //new node create
    Node* temp= new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* & head,int position, int d){
   //Insert at start
    if(position ==1){
        insertionAtHead(head, d);
        return ;
    }
    Node* temp= head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp-> next;
        cnt++ ;

    } 

  //Inserting at last position
  //this can be done by previous but this is for updating the tail.
    if(temp-> next== NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating new node
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next= temp-> next;
    temp->next= nodeToInsert;

}

void deleteNode(int position, Node* &head){
    // deleting first node
    if(position == 1){
        Node* temp= head; //store in node to delete
        head= head-> next;
        // memory free start node
        temp -> next= NULL;
        delete temp;  // It should be deleted manually because it is created in heap memory
              // so we need destructor
    }

    else{
        // deleting any middle  node or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt< position){
            prev=curr;
            curr= curr->next;
            cnt++ ;
        }

        prev -> next= curr -> next;
        curr -> next=NULL;
        delete curr;

    }


}

bool detectloop(Node* head){
    if(head==NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp=head;

    while(temp != NULL){
        //cycle is present
        if(visited[temp]==true){
            return true;
        }

        visited[temp]=true;
        temp= temp->next;
    }

    return false;


}
Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(slow != NULL && fast !=NULL){
        fast= fast->next;
        if(fast !=NULL){
            fast= fast->next;
        }

        slow= slow->next;

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* intersection= floydDetectLoop(head);
    Node* slow= head;

    while(slow != intersection){
        slow= slow-> next;
        intersection= intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head==NULL)
    return;

    Node* startOfLoop=getStartingNode(head);
    Node* temp= startOfLoop;

    while(temp-> next != startOfLoop){
          temp= temp-> next;
    }

    temp-> next= NULL;
}

void print (Node* &head){
    Node* temp= head;

    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp= temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10); //created in heap
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;
    
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertionAtHead(head, 12);

    print(head);
    
        // insertionAtHead(head, 12);
      insertAtTail(tail, 15);

    print(head);

    insertAtPosition(tail,head, 3,55);
    print(head);

     insertAtPosition(tail,head, 1,90);
    print(head); 

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl; 

    deleteNode(5, head);
    print(head); 

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl; 

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            


    return 0;
}