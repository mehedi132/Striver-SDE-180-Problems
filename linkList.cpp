#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *next;
};

Node *createNode(int n)
{
    Node *cr = (Node*) malloc(sizeof(Node));
    cr->data = n;
    cr->next = NULL;
    return cr;
}

void addnode( Node *head,Node *node)
{
    Node *n;
    n = head;
    while(n->next!=NULL)
    {
        n = n->next;
    }
    n->next = node;
}

Node *reverseNode(Node *head)
{
    Node *h1, *n1, *n2,*nextnode,*prevnode=NULL;
    // n1 = head;
    // int c = 0;
    // if(head==NULL || head->next==NULL)
    // {
    //     return head;
    // }

    // while(n1->next!=NULL)
    // {
    //     if(c==0)
    //     {
    //         n2 = n1->next;
    //         n1->next = NULL;
    //         c++;
    //     }
    //     else{
    //         n2 = n1->next;
    //         n1->next = h1;
    //     }
    //     h1 = n1;
    //     n1 = n2;
    // }
    // //cout << "a " << n1->data << endl;
    // n1->next = h1;
    // head = n1;

    while(head!=NULL)
       {
           nextnode=head->next;
           head->next=prevnode;
           prevnode=head;
           head=nextnode;

       }
       return prevnode;

       // return head;
}


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
Node *head, *no, *n1, *n2, *n3;
no = createNode(5000);
n2 = createNode(50);
n3 = createNode(6);
head = no;
addnode(head, n2);
addnode(head, n3);

n1 = head;
//cout << no->data;
while(n1!=NULL)
{
        cout << n1->data << endl;
        n1 = n1->next;
}
n1 = reverseNode(head);
head = n1;
cout << "after reverse" << endl;
while(n1!=NULL)
{
        cout << n1->data << endl;
        n1 = n1->next;
}
  
map<Node*, int> m;

Node *n8 = head;
while(head!=NULL)
        {
             if(m.find(head)==m.end())
             {
                 m[head]=head->data;
                
                 head = head->next;
             }
         
            
           // return head;
           
        }
        head = n8;
         cout << "print through map" << endl;
        while(head!=NULL)
        {
           
 cout << m[head] << endl;
             
            
              head=head->next;
        }

}