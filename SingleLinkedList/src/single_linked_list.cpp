#include "../include/single_linked_list.hpp"
#include <iostream>
#include <utility>
using namespace std;

template<typename T>
explicit Node<T>::Node<T>(const T& val) :
	m_val(val), m_next(nullptr) { }

template<typename T>
Node<T>::~Node() {
	delete m_next;
}

template<typename T>
SingleLinkedList<T>::SingleLinkedList(const T& value) {
	m_head = new Node<T>(value);
}

template<typename T>
SingleLinkedList<T>::SingleLinkedList(const SingleLinkedList& other) {
	m_head->m_val = other->m_val;
	m_head->m_next = other->m_next;
}

template<typename T>
SingleLinkedList<T>::SingleLinkedList(SingleLinkedList&& other) {
	m_head->m_val = other->m_val;
	m_head->m_next = other->m_next;
	other->m_val = 0;
	other->m_next = nullptr;
}

template<typename T>
SingleLinkedList<T>::SingleLinkedList(size_t n, const T& value) {
	m_head = new Node<T>(value);
	Node<T>* new_node = m_head;
	--n;
	while (n-- > 0) {
		Node<T>* node = new Node<T>(value);
		new_node = node->m_next;
		new_node = node;
	}
}

template<typename T>
SingleLinkedList<T>::SingleLinkedList(Node<T>* begin, Node<T>* end) {
	m_head = begin;
	while (begin != end) {
		begin->m_next = begin;
	}
}

template<typename T>
SingleLinkedList<T>::~SingleLinkedList() {	
	while (m_head && m_head->m_next) {
		Node<T> del_node = m_head;
		m_head = m_head->m_next;
		delete del_node;
	}
}

template<typename T>
size_t Node<T>::size() const {
	size_t h = 0;
	while (m_head && m_head->m_next) {
		++h;
	}
	return h;
}

template<typename T>
bool Node<T>::empty() const {
	return (m_head == nullptr);
}

template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>
template<typename T>