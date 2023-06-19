void deleteNode(LinkedListNode<int> * node) {

    

    LinkedListNode<int> *temp = node;

    temp->data = temp->next->data;

    temp->next = temp->next->next;

 

}
