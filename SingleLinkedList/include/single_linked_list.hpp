#ifndef SINGLE_LINKED_LIST_HPP
#define SINGLE_LINKED_LIST_HPP

template<typename T>
struct Node {
	T m_val;
	Node<T>* m_next;

	explicit Node(const T& val);
	~Node();
};

template<typename T>
class SingleLinkedList {
public:
	SingleLinkedList(const T& value);
	SingleLinkedList(const SingleLinkedList& other);
	SingleLinkedList(SingleLinkedList&& other) noexcept;
	SingleLinkedList(size_t n, const T& value);
	SingleLinkedList(Node<T>* begin, Node<T>* end);
	~SingleLinkedList();

	size_t size() const;
	bool empty() const;

	void push_front(const T& value);
	void push_back(const T& value);

	void pop_front();
	void pop_back();

	T& front();
	const T& front() const;

	T& back();
	const T& back() const;
		
	void clear();

	bool find(const T& value) const;
	void insert_after(const T& target, const T& value);

	void erase_after(const T& target);
	
	void merge(SingleLinkedList<T>& other);

	void sort();

	void reverse();
private:
	Node<T> m_head;
};

#endif