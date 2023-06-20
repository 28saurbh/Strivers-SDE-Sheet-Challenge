Node *getListAfterReverseOperation(Node *head, int n, int b[]){

    // Write your code here.

    int size=h(head);

    vector<Node*> ans;

    for(int i=0;i<n;i++)

    {

        if(b[i]<size)

        {

            size=size-b[i];

            Node* temp=head;

            int a=b[i];

            while(a>1)

            {

                temp=temp->next;

                a--;

            }

            head=temp->next;

            temp->next=NULL;

            temp=f(temp);

            ans.push_back(temp);

        }

        else{

            Node* temp=head;

            temp=f(temp);

            ans.push_back(temp);

            break;

        }

    }

    Node* res=new Node(0);

    Node* t=res;

    for(int i=0;i<ans.size();i++)

    {

        if(i==ans.size()-1) return t->next=ans[i];

        else{

        t->next=ans[i];

                while (t->next) {

                  t = t->next;

                }

                }

        }

    return res->next;

}

