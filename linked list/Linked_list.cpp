#include<iostream>
using namespace std;


// Linked list structure 
struct node
{
    int data;
    node *next;   
};
node *tail,*head;

void createnode(int value){     // create a node with integer value
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    if(head == NULL)
    {   
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
void insert_start(int n)    // Insert in the beginning
{
    node *temp = new node;
    temp->data = n;
    temp->next = head;
    head = temp;
}
void insert_At_pos(int n,int pos)       // Insert at a given position 
{
    node *pre = new node;
    node *cur = new node;
    node *temp = new node;
    temp->data = n;
    cur = head;
    for(int i =0; i< pos; i++)
    {
        pre = cur;
        cur = cur->next;
    }
    pre->next = temp;
    temp->next = cur;
}

void display(){                 // Display contents of Linked List
    node * temp = new node;
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL";
}

void delete_at_beg()        // Delete first node 
{
    node *temp = new node;
    temp = head;
    head = head->next;
    delete temp;
}

void delete_at_end()        // Delete Last node
{
    node *cur = new node;
    node *prev = new node;
    cur = head;
    while(cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }
    tail = prev;
    prev->next = NULL;
    delete cur;
}
void delete_at_POS(int pos)         // Delete node  given it's position 
{
    node *cur= new node;
    node *prev = new node;
    cur = head;
    for(int i =0 ; i< pos; i++)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = cur->next;
}

int main(int argc, const char** argv)    // Driver function 
{
    head = tail = NULL;
    createnode(1);
    createnode(2);
    createnode(3);
    insert_start(5);
    insert_At_pos(9,3);
    delete_at_beg();
    display();
    delete_at_POS(1);
    cout<<endl;
    display();
    return 0;
}

