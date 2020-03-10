#include<utility>
using namespace std;
//存放<k,v>数据
enum COLOR
{
	BLACK,
	RED
};
template <class K,class V>
struct RBTree
{
	RBTree<K, V>* _left;
	RBTree<K, V>* _right;
	RBTree<K, V>* _parent;
	pair<K, V> _value;
	//颜色
	COLOR _color;
	RBNode(const pair<K, V>& value=pair<K,V>())
		:_left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _value(value)
		, _color(RED)
	{}
};
template<class K,class V>
class RBTree
{
public:
	typedef RBNode<K, V>Node;
	typedef Node* pNode;
	RBTree()
	{
		//构建空的红黑树
		_header = new Node();
		_header->_left = _header;
		_header->_right = _header;

	}
	bool insert(const pair<K, V>& value)
	{
		//搜索树的插入
		if (_header->_parent == nullptr)
		{
			//空树，创建根节点
			pNode root = new Node(value);
			root->_color = BLACK;
			root->_parent = _header;
			root->_parent = root;
			_header->_left = root;
			_header->right = root;
			return true;
		}
		//从根开始搜索
		pNode cur = _header->parent;
		pNode parent = nullptr;
		while (cur)
		{
			parent = cur;
			//按照key值确定位置,key不能重复
			if (cur->value.first == value.first)
				return false;
			else if (cur->value.first > value.first)
				cur = cur->_left;
			else
				cur = cur->_right;
		}
		cur = new Node(value)
			if (parent->_value.first > cur->value.first)
				parent->_left = cur;
			else
				parent->_right = cur;
		cur->_parent = parent;
		//调整和更新（颜色）

	}
private:
	pNode _header;
};