 #include <iostream>
 #include <algorithm>
 using namespace std;

//creation of node.
 class node
 {
   public:
   int data;
   node* left;
   node* right;

   node(int d){
    this->data = d;
    this -> left = NULL;
    this -> right = NULL;
   }
 };

 //building of tree.
 node* buildTree(node* root){
    cout<< "Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    
    if(data==-1)
    return NULL;

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right 0f"<<data<<endl;
    root->right = buildTree(root->right);
    return root;
 }

 //height of tree.
 int height(node* node){
    if(node == NULL)
    return 0;

    int left = height(node ->left);
    int right = height(node->right);

    int ans = max(left,right) + 1;
    return ans;
 }

//diameter of tree

pair<int,int>diameterFast(node* root){
   if(root == NULL){
    pair<int,int> p = make_pair(0,0);
    return p;

    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int,int> ans;

    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second , right.second) + 1;
   }
}

int diameter(node* root){
   
   return diameterFast(root).first;
}
int main()
{
    node* root = NULL;
    root = buildTree(root);
    cout<<"HEight of tree is :"<<height(root);
    cout<<"Diameter of tree is :"<<diameter(root);

    return 0;
}