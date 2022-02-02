#include "MutantStack.hpp"

int main() {
	std::cout << "MutantStack: " << std::endl;

	MutantStack<int> mstack;

	mstack.push(21);
	mstack.push(42);

	std::cout << "Top of the stack: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Stack size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while(it != ite){
		std::cout << *it << ' ';
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << "\n\nList: " << std::endl;

	std::list<int> list;

	list.push_back(21);
	list.push_back(42);

	std::cout << "Top of the stack: " << list.back() << std::endl;

	list.pop_back();

	std::cout << "Stack size: " << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator itlist = list.begin();
	std::list<int>::iterator itliste = list.end();

	++itlist;
	--itlist;

	while(itlist != itliste){
		std::cout << *itlist << ' ';
		++itlist;
	}

	std::list<int> s2(list);

	std::cout << "\n\nMutantStack reverse: " << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	++rit;
	--rit;

	while(rit != rite){
		std::cout << *rit << ' ';
		++rit;
	}

	std::cout << "\n\nList reverse: " << std::endl;

	std::list<int>::reverse_iterator ritlist = list.rbegin();
	std::list<int>::reverse_iterator ritliste = list.rend();

	++ritlist;
	--ritlist;

	while(ritlist != ritliste){
		std::cout << *ritlist << ' ';
		++ritlist;
	}
	std::cout << std::endl;

	return 0;
}
