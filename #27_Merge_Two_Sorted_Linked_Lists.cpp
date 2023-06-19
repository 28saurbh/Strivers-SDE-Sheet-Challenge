Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)

{

    // efficient solution

    if(first==NULL) return second;

    if(second==NULL) return first;

    //first point to smaller value and second point to larger value

    if(first->data > second->data) swap(first,second);

    //head of the new linked list

    Node<int>* res = first;

    //main logic

    while(first!=NULL && second!=NULL){

        Node<int>* temp = NULL;

        while(first!=NULL && first->data <= second->data){

            temp = first;

            first = first->next;

        }

        temp->next = second;

        swap(first,second);

    }

    return res;

}
