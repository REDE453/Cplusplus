#include<utility>
using namespace std;
//���<k,v>����
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
	//��ɫ
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
		//�����յĺ����
		_header = new Node();
		_header->_left = _header;
		_header->_right = _header;

	}
	bool insert(const pair<K, V>& value)
	{
		//�������Ĳ���
		if (_header->_parent == nullptr)
		{
			//�������������ڵ�
			pNode root = new Node(value);
			root->_color = BLACK;
			root->_parent = _header;
			root->_parent = root;
			_header->_left = root;
			_header->right = root;
			return true;
		}
		//�Ӹ���ʼ����
		pNode cur = _header->parent;
		pNode parent = nullptr;
		while (cur)
		{
			parent = cur;
			//����keyֵȷ��λ��,key�����ظ�
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
		//�����͸��£���ɫ��

	}
private:
	pNode _header;
};