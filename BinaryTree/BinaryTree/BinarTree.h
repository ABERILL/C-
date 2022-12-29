//Binary Tree template class 
template <class T> 
class BinaryTree 
{ 
private: 
    struct Node 
    { 
        T item; 
        Node* left; 
        Node* right; 
  Node* parent;  
    }; 
    Node* root; 
 
public: 
    BinaryTree(); 
    ~BinaryTree(); 
  
    // other necessary member functions 
 
 //Function to return list of values at a given level 
 std::list<T> get_level_values(int level); 
}; 

template <class T> 
std::list<T> BinaryTree<T>::get_level_values(int level) 
{ 
    std::list<T> list; 
    std::queue<Node*> q; 
  
    if (root != NULL) 
        q.push(root); 
  
    int current_level = 0; 
    while (!q.empty()) 
    { 
        int node_count = q.size(); 
  
        if (current_level == level) 
        { 
            while (node_count > 0) 
            { 
                Node* node = q.front(); 
                list.push_back(node->item);  
                q.pop(); 
                node_count--; 
            } 
            break; 
        } 
        else
        { 
            while (node_count > 0) 
            { 
                Node* node = q.front(); 
                q.pop(); 
  
                if (node->left != NULL) 
                    q.push(node->left); 
  
                if (node->right != NULL) 
                    q.push(node->right); 
  
                node_count--; 
            } 
            current_level++; 
        } 
    } 
    return list; 
}
