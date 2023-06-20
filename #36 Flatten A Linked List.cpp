Node* merge(Node* a, Node* b){

   Node *it = new Node(0);

   Node *start = it;

    

    while(a && b)

    {

        if(a->data < b->data)

        {

            it->child = a;

            it = it->child;

            a = a->child;

        }

        else{

            it->child = b;

            it = it->child;

            b = b->child;

        }

    }

 

    if(a)   it->child = a;

    if(b)   it->child = b;

 

    return start->child;

}

 

Node* flattenLinkedList(Node* head) 

{

    // Write your code here

    if(!head || !head->next)

        return head;

    Node *r1 = head;

    Node *r2 = head->next;

   while(r2){

       r1=merge(r1,r2);

       r2=r2->next;

   }

   return r1;

 

}
