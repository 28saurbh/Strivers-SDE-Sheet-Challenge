#include<bits/stdc++.h>

Node * findIntersection(Node *firstHead, Node *secondHead)

{

    //Write your code here

    Node *f=firstHead;

    Node *s=secondHead;

    unordered_set<Node *>st;

     while(f)

     {

         st.insert(f);

         f=f->next;

 

     }

     while(s)

     {

         if(st.find(s)!=st.end())

         {

             return s;

         }

         s=s->next;

     }

    

    return NULL;

}
