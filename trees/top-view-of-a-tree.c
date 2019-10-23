/*
Top View : 1 -> 2 -> 5 -> 6

Input Format

You are given a function,

void topView(node * root) {

}

Constraints

1
Nodes in the tree

500

Output Format

Print the values on a single line separated by space.

Sample Input

   1
    \
     2
      \
       5
      /  \
     3    6
      \
       4

Sample Output

1 2 5 6

Explanation

   1
    \
     2
      \
       5
      /  \
     3    6
      \
       4

From the top only nodes 1,2,5,6 will be visible.
*/



/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node * root) {
    Node * temp,*root1=root;
    int min=1,max=-1,counter=0;
    vector<int> v;
    stack<Node *> s;
    stack<int> s1,s3;
    while(root||(!s.empty()))
    {
        while(root)
        {
            if(counter<min)
            {
                min=counter;
                s1.push(root->data);
            }
            s3.push(counter);
            s.push(root);

            root=root->left;
            if(root)
            counter--;
        }
        temp=s.top();
        s.pop();
        counter=s3.top();
        s3.pop();
        if(temp->right)
        counter ++;
        root=temp->right;
    }
    while(!s1.empty())
    {
        v.push_back(s1.top());
        s1.pop();
    }
    if(v.size())
    v.pop_back();
    root=root1;
    counter=0;
    while(root||(!s.empty()))
    {
        while(root)
        {
            if(counter>max)
            {
                max=counter;
                v.push_back(root->data);
            }
            s.push(root);
            s1.push(counter);
            root=root->right;
            if(root)
            counter++;
        }
        temp=s.top();
        s.pop();
        counter=s1.top();
        s1.pop();
        if(temp->left)
        counter--;
        root=temp->left;
    }
    /*while(!s.empty())
    {
        v.push_back(s.top()->data);
        s.pop();
    }*/
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    }

