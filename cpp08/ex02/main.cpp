#include "MutantStack.hpp"




int main()
{
	MutantStack<int> mstack;
	std::cout << "______pushing in 200 numbers__________" << std::endl;
	for (int i = 0; i <= 200; i++)
		mstack.push(i);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ",";
		++it;
	}
	std::cout << std::endl;
	std::cout << "______popping 198 numbers_____and adding '100'_____" << std::endl;
	for (int i = 0; i <= 198; i++)
		mstack.pop();
	mstack.push(100);
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << ",";
		++it;
	}
	std::cout << "______popping the last 3_____" << std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << ",";
		++it;
	}
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	mstack.pop();
}


// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }

// #include <list>
// int main()
// {
//     std::list<int> mlist;
//     mlist.push_back(5);      // push -> push_back
//     mlist.push_back(17);
//     std::cout << mlist.back() << std::endl;   // top -> back
//     mlist.pop_back();        // pop -> pop_back
//     std::cout << mlist.size() << std::endl;
//     mlist.push_back(3);
//     mlist.push_back(5);
//     mlist.push_back(737);
//     //[...]
//     mlist.push_back(0);
//     std::list<int>::iterator it = mlist.begin();
//     std::list<int>::iterator ite = mlist.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::list<int> s(mlist);
//     return 0;
// }