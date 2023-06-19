void reverse(LinkedListNode<int>* &head , LinkedListNode<int>* curr , LinkedListNode<int>* prev ){

    //APPROACH 2: Recursive Approach

    //base case 

    if(curr == NULL){

        head = prev;

        return ;

    }

 

    //recursive case

    LinkedListNode<int>* forward = curr -> next;

    reverse(head , forward , curr);

    curr -> next = prev;

    

 

}

 

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 

{

 

    LinkedListNode<int> *curr = head;

    LinkedListNode<int> *prev = NULL;

    reverse(head , curr , prev);

    return head;

 

}
