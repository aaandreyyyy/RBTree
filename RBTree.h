#ifndef RB_TREE_RBTREE_H
#define RB_TREE_RBTREE_H



template<class T>
class Node {
public:
    explicit Node(T data_in);

    ~Node();

    Node *Left_child;
    Node *Right_child;
    Node *Father_Node;
    T data;
    int color_tag; //1±íÊ¾ºìÉ« 0±íÊ¾ºÚÉ«
};

template<class T>
class RB_Tree {
public:
    explicit RB_Tree(T Root_Data);

    ~RB_Tree();

    void Left_Rotate(Node<T> *current_Node);

    void Right_Rotate(Node<T> *current_Node);

    [[maybe_unused]] void Insert_Node(T insert_data);

    int Delete_Node(T delete_data);

    void Fix_Tree(Node<T> *current_Node);

    void erase_Node(Node<T> *Node_del);

    Node<T> *Find_Successor_Node(Node<T> *current_Node);

    Node<T> *Root_Node;
};


#endif //RB_TREE_RBTREE_H
