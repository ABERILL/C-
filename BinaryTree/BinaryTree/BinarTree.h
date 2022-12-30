/* Template Class Binary Tree */
template <class T>
template<typename T>
class BinaryTree
{
 T data;
 BinaryTree* left;
 BinaryTree* right;

public:
 BinaryTree(T value)
 {
  data = value;
  left = nullptr;
  right =  nullptr;
 }
 
 void Add(T value)
 {
  if (value < data)
  {
   if (left != nullptr)
    left->Add(value);
   else
    left = new BinaryTree(value);
  }
  else
  {
   if (right != nullptr)
    right->Add(value);
   else
    right = new BinaryTree(value);
  }
 }

void Delete(T value)
 {
  if (value < data && left != nullptr)
   left->Delete(value);
  else if (value > data && right != nullptr)
   right->Delete(value);
  else
  {
   BinaryTree* tmpNode;

   if (left == nullptr && right == nullptr)
    tmpNode = nullptr;
   else if (left == nullptr)
    tmpNode = right;
   else if (right == nullptr)
    tmpNode = left;
   else
   {
    tmpNode = right;

    while (tmpNode->left != nullptr)
     tmpNode = tmpNode->left;

    tmpNode->left = left;
   }

   data = tmpNode->data;

   right = tmpNode->right;
   left = tmpNode->left;

   delete tmpNode;
  }
 }

void Traverse()
 {
  if (left != nullptr)
   left->Traverse();

  cout << data << " ";

  if (right != nullptr)
   right->Traverse();
 }
};

vector<T> getValuesToRight(BinaryTree* parent) {
        if (parent == nullptr) {
            return {};
        }
        
        vector<T> result;
        if (parent->right) {
            result.push_back(parent->right->value);
            vector<T> right = getValuesToRight(parent->right->right);
            result.insert(result.end(), right.begin(), right.end());
        }
        return result;
    }
};
