
// Linked List:Delete a node at nth position
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

};
Node *head;
void Insert(int x)
{
    Node *temp = new Node(); // 结构体指针（节点）变成了一个结构体指针变量
    // Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head; // temp->next = NULL;
    //if(head != NULL)
    //    temp->next = head;
    head = temp;
}
void Print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}
void Delete(int n)
{
    Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    
    int i;
    for (int i = 0; i < n-2 ; i++)
    {
        temp1 = temp1->next;
    }
    Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

int main()
{
    head = NULL; //empty list
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    int n;
    cout << "Enter a position" << endl;
    cin >> n;
    Delete(n);
    Print();
    return 0;
}



