/*
	Author: Umesh Pimpalkar 
	Email: umeshppimpalkar@outlook.com

	Description: In this section the different concepts of
	standard template library are simulated.
*/

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <array>
#include <stack>
#include <list>

using namespace std;

//STL Vector simulation
void simulateVector()
{
	vector<int> vec;
	vector<int>::iterator T;

	vec.push_back(1U);
	vec.push_back(2U);
	vec.push_back(3U);
	vec.push_back(4U);

	vec.pop_back();

	for(int i = 0; i < vec.size(); i++)
	{
		cout<<vec[i]<<endl;
	}

	vec.pop_back();

	for(T = vec.begin(); T != vec.end(); T++)
	{
		cout<<*T<<endl;
	}

    //clear list
	vec.clear();
}

//STL Map
void simulateMap()
{
	map<char,int> M;
    map<char, int>::iterator T;

    M.insert(pair<char,int>('x',1U));
    M.insert(pair<char,int>('y',2U));
    M.insert(pair<char,int>('z',3U));

    for (T = M.begin(); T != M.end(); T++)
	{
		cout << (*T).first << ": " << (*T).second << endl;
	}

	if(M.count('y')!= 0)
	{
		cout<<"found the key its value is: "<<M.find('y')->second<<endl;
	}

	cout<<"Size of the Map is: "<<M.size()<<endl;

	//erase element
	M.erase('z');
	cout<<"after erasing element the Map contains"<<endl;
	for (T = M.begin(); T != M.end(); T++)
	{
		cout << (*T).first << ": " << (*T).second << endl;
	}
}

//STL Set
void simulateSet()
{
	set<int> S;
    set<int>::iterator T;

    S.insert(9U);
    S.insert(8U);
    S.insert(7U);

    cout<<"size of the Set is : "<<S.size()<<endl;

    T = S.find(7U);
    if(T != S.end())
    {
    	cout<<"found the key 7 in set"<<endl;
    }

    for (T = S.begin(); T != S.end(); T++)
    {
        cout << (*T)<<endl;
    }

    cout<<"after erasing element the set is"<<endl;

    S.erase(7U);

    for (T = S.begin(); T != S.end(); T++)
    {
        cout << (*T)<<endl;
    }
}

//simulation of STL multiset
void simulateMultiset()
{
	multiset<int> S;
	multiset<int>::iterator T1, T2;

	T1 = S.insert(1U);//first time when the set is empty
	T1 = S.insert(T1, 2U);
	T1 = S.insert(T1, 3U);
	T1 = S.insert(T1, 3U);

	cout<<"the size of the set is: "<<S.size()<<endl;
    
    cout<<"number of times 3 has appeared in the set is:"<<S.count(3U)<<endl;

    cout<<"the set contains:";
    for (T2 = S.begin(); T2 != S.end(); T2++)
    {
    	cout<<*T2<<" ";
    }
    cout<<endl;

    cout<<"after erasing 3 from the set the set contains: ";
    S.erase(3U);
    for (T2 = S.begin(); T2 != S.end(); T2++)
    {
    	cout<<*T2<<" ";
    }
    cout<<endl;
}
void simulateMultimap()
{
	multimap<char, int> M;

    multimap<char, int>::iterator T;

    M.insert (pair<char, int>('i', 100));

    M.insert (pair<char, int>('j', 200));

    M.insert (pair<char, int>('k', 300));
    M.insert (pair<char, int>('k', 400));

    cout<<"Size of the multimap is: "<< M.size() <<endl;

    cout << "Multimap contains:\n";

    for (T = M.begin(); T != M.end(); ++T)
    {
    	cout << (*T).first << " => " << (*T).second <<endl;	
    }

    cout<<"in the map there are "<<M.count('k')<<" times 'k' is appeared"<<endl;

    T = M.find('j');

    M.erase (T);

    cout<<"after erasing 'j' the map contains ";
    for (T = M.begin(); T != M.end(); ++T)
    {
    	cout << (*T).first << " => " << (*T).second;	
    }
    cout<<endl;

}
void simulateQueue()
{
	queue<int> q;

	q.push(1U);
	q.push(2U);
	q.push(3U);
	q.push(4U);

	cout<<"size of the queue is: "<<q.size()<<endl;

	cout<<"front element of the queue is: "<<q.front()<<endl;

	cout<<"back element of the queue is: "<<q.back()<<endl;

    cout<<"Deleting "<<q.front()<<endl;

    q.pop();
}
void simulatePriQueue()
{
	priority_queue<int> pq;
	pq.push(1U);
	pq.push(2U);
	pq.push(3U);
	pq.push(4U);

	cout<<"Size of the Queue: "<<pq.size()<<endl;

	cout<<"Top Element of the Queue: "<<pq.top()<<endl;

    if (!pq.empty())
    {
        pq.pop();
        cout<<"top Element Deleted"<<endl;
    }
    else
    {
        cout<<"Priority Queue is Empty"<<endl;
    }
}
void simulateStack()
{
	stack<int> st;

	st.push(10U);
	st.push(20U);
	st.push(30U);
	st.push(40U);

     cout<<"Size of the stack: "<< st.size()<<endl;

     cout<<"Top Element of the Stack: "<< st.top()<<endl;

     cout<<"deleting top element of the stack"<<endl;
     st.pop();

     cout<<"Size of the Queue: "<<st.size()<<endl;
}
void simulateArray()
{
    array<int, 4> arr;

    array<int, 4>::iterator T;

    arr.fill(0);
    int count = 0;

    arr.at(count) = 10U;
    count++;
    arr.at(count) = 20U;
    count++;
    arr.at(count) = 30U;
    count++;
    arr.at(count) = 40U;
    count++;

    cout<<"Size of the Array: "<<arr.size()<<endl;

    cout<<"Front Element of the Array: "<<arr.front()<<endl;

    cout<<"Back Element of the Stack: "<<arr.back()<<endl;

    cout<<"The array contains: ";
    for (T = arr.begin(); T != arr.end(); ++T )
    {
    	cout <<" "<< *T;
    }
	cout<<endl;
}
void simulateDeque()
{
    deque<int> dq;

	deque<int>::iterator T;

	dq.push_back(1U);
	dq.push_back(2U);
	dq.push_front(3U);
	dq.push_front(4U);

	cout<<"Size of the Deque: "<<dq.size()<<endl;

    cout<<"Front Element of the Deque: "<<dq.front()<<endl;

    cout<<"Back Element of the Deque: "<<dq.back()<<endl;

    int x = dq.back();
    dq.pop_back();
	cout<<"Element "<<x<<" deleted fron back"<<endl;

	x = dq.front();
    dq.pop_front();
	cout<<"Element "<<x<<" deleted fron front"<<endl;

	cout<<"Elements of Deque:  ";

    for (T = dq.begin(); T != dq.end(); T++)
    {
    	cout<<*T<<"  ";
    }
    cout<<endl;
}
void simulateList()
{
    int mL[] = {5, 6, 3, 2, 7};
	list<int> L, L1 (mL, mL + sizeof(mL) / sizeof(int));
	list<int>::iterator T;

	L.push_back(1U);
	L.push_back(3U);
	L.push_front(2U);
	L.push_front(4U);
	L.push_front(4U);

	cout<<"Size of the list: "<<L.size()<<endl;

    cout<<"Front Element of the list: "<<L.front()<<endl;

    cout<<"Back Element of the list: "<<L.back()<<endl;


    int x = L.back();
    L.pop_back();
	cout<<"Element "<<x<<" deleted fron back"<<endl;

	x = L.front();
    L.pop_front();
	cout<<"Element "<<x<<" deleted fron front"<<endl;

    cout<<"Last Element of the List: "<< L.back()<<endl;

    L.unique();
	cout<<"Duplicate Items Deleted"<<endl;

    L.reverse();
	cout<<"List reversed"<<endl;

    L.sort();
	cout<<"List Sorted"<<endl;

    L1.sort();
	L.sort();
	L.merge(L1);
	cout<<"Lists Merged after sorting"<<endl;

    cout<<"Elements of the List:  ";
	for (T = L.begin();  T != L.end(); T++)
    cout<<*T<<"  ";
	cout<<endl;
}

int main()
{
	simulateVector();
	simulateMap();
	simulateSet();
	simulateMultiset();
	simulateMultimap();
	simulateQueue();
	simulatePriQueue();
	simulateStack();
	simulateArray();
	simulateDeque();
	simulateList()
	
	return 0;
}