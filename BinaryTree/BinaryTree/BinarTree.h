/* Template Class Binary Tree */
template <class T>
class BinaryTree
{
private: 
  T data;
  BinaryTree *left;
  BinaryTree *right;

public: 
  //constructor 
  BinaryTree();

  //destructor 
  ~BinaryTree();

  //insert a new value
  void insert (T val); 

  //return a list of all values located at a given level
  std::list<T> getValuesAtLevel(int level);

};

//get the list of the elements at level l
template <class T>
std::list<T> BinaryTree<T>::getValuesAtLevel(int level)
{
  std::list<T> values;
  if (level == 1)
  {
    values.push_back(data);
    return values;
  }
  
  else if (level > 1)
  {
   
    //add the right side
    std::list<T> rightValues = right->getValuesAtLevel(level - 1);
    values.merge(rightValues);
  }
  return values;
}
