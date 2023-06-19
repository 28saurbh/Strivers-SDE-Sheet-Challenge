Node* reverse(Node *head) {

    if(head == NULL) return NULL;

    Node *prev = NULL;

    Node *curr = head;

    Node *nex = NULL;

 

    while(curr) {

        nex = curr->next;

        curr->next = prev;

        prev = curr;

        curr = nex;

    }

 

    return prev;

}

 

Node* removeKthNode(Node* head, int k)

{

 

    Node *temp = head;

    int totalNodes = 0;

 

    while(temp) {

        totalNodes++;

        temp = temp->next;

    }

 

    temp = head;

 

    if(totalNodes == k) {

        head = temp->next;

        return head;

    }

 

    head = reverse(head);

 

    temp = head;

 

    int cnt = 1;

 

    if(k == 1) {

        head = temp->next;

        head = reverse(head);

        return head;

    }

 

    while(temp and cnt < k) {

        cnt++;

        temp = temp->next;

    }

 

    temp->data = temp->next->data;

    Node* nex = temp->next;

    temp->next = nex->next;

 

    head = reverse(head);

    return head;

 

}
