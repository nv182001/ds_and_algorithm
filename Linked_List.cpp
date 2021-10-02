
// ****************************** Linked List imp Questions *************************************************
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
class linked_list
{
public:
  int data;
  linked_list *next;

    linked_list ()
  {
    this->next = NULL;
  }
  linked_list (ll data)
  {
    this->data = data;
    this->next = NULL;
  }
  linked_list *add (ll data, linked_list * head)
  {
    if (head == NULL)
      {
	linked_list *temp = new linked_list (data);
	head = temp;
      }
    else
      {
	linked_list *temp = head;

	while (temp->next != NULL)
	  {
	    temp = temp->next;
	  }
	temp->next = new linked_list (data);
      }
    return head;
  }
  void printjjj (linked_list * head)
  {
    auto temp = head;
    cout << "\n";
    while (temp != NULL)
      {

	cout << temp->data << " ";
	temp = temp->next;
      }
    cout << endl;
  }
  ll find_mid (linked_list * head)
  {
    auto fp = head, sp = head;
    while (fp != NULL and fp->next != NULL)
      {
	sp = sp->next;
	fp = fp->next->next;

      }
    return sp->data;
  }
  linked_list *del_mid (linked_list * head)
  {

    auto fp = head, sp = head;
    auto pre = sp;
    while (fp != NULL and fp->next != NULL)
      {
	pre = sp;
	sp = sp->next;
	fp = fp->next->next;
      }

    pre->next = sp->next;
    delete sp;
    return head;
  }
  linked_list *del_linked_list (linked_list * head)
  {
    auto pre = head;
    head = head->next;
    if (head == NULL)
      {
	delete pre;
      }
    while (head != NULL)
      {
	delete pre;
	pre = head;
	head = head->next;

      }
    return head;
  }
  void reverse_print (linked_list * head)
  {
    if (head == NULL)
      {
	return;
      }
    reverse_print (head->next);	// it's not a tail recursive function 
    cout << head->data << " ";	// just printing in reverse order using recursion, we can use stack also..
  }

  //   1       2      3      NULL
  //  pre -->  cur --> next               ***for actual reversing elements***
  //  pre <--  cur <-- next 
  //cur->next=pre; just do this by while

  linked_list *reverse_linked_list (linked_list * head)
  {
    linked_list *cur = head, *next = head, *pre = NULL;
    while (cur)
      {
	next = cur->next;
	cur->next = pre;
	pre = cur;
	cur = next;
      }
    return pre;
  }
  bool palindrome (auto & left, auto right)
  {
    if (right == NULL)
      return true;
    bool first = palindrome (left, right->next);
    if (first == false)
      return false;
    bool second = (right->data == left->data);
    left = left->next;
    return second;
  }
  auto remove_duplicate_sorted (auto head)
  {
    auto cur = head;
    while (cur->next != NULL)
      {
	if (cur->data == cur->next->data)
	  {
	    auto temp = cur->next;
	    cur->next = temp->next;
	    delete temp;
	  }
	else
	  cur = cur->next;

      }
    return head;
  }
  auto remove_duplicate_unsorted (auto head)
  {
    set < ll > se;
    auto cur = head, pre = cur;
    while (cur)
      {
	if (se.count (cur->data))
	  {
	    pre->next = cur->next;
	    delete cur;
	  }
	else
	  {
	    se.insert (cur->data);
	    pre = cur;
	  }
	cur = pre->next;
      }
    return head;

  }
  bool detect_loop (auto head)
  {
    auto sp = head, fp = head;
    while (fp and fp->next)
      {
	sp = sp->next;
	fp = fp->next->next;
	if (sp == fp)
	  return true;
      }
    return false;
  }
  auto remove_loop (auto head)
  {
    auto sp = head, fp = head;
    while (fp and fp->next)
      {
	sp = sp->next;
	fp = fp->next->next;
	if (sp == fp)
	  break;
      }
    if (sp == fp)
      {
	sp = head;
	while (sp->next != fp->next)
	  {
	    sp = sp->next;
	    fp = fp->next;
	  }
	fp->next = NULL;
      }
    return head;
  }
  ll intersection_point (auto head1, auto head2)
  {
    auto cur1 = head1, cur2 = head2;
    while (cur1 != cur2)
      {
	if (cur1 == NULL)
	  cur1 = head2;
	else
	  cur1 = cur1->next;
	if (cur2 == NULL)
	  cur2 = head1;
	else
	  cur2 = cur2->next;
      }
    return cur1->data;
  }
  auto odd_even (auto head)
  {
    auto o = head, e = head->next, temp = e;
    while (e != NULL and e->next != NULL)
      {
	o->next = e->next;
	o = o->next;
	e->next = o->next;
	e = e->next;
      }
    o->next = temp;
    return head;
  }
  auto merge (auto h1, auto h2)
  {
    if (h1 == NULL or h2 == NULL)
      {
	return (h1 == NULL) ? h2 : h1;
      }
    if (h1->data < h2->data)
      {
	h1->next = merge (h1->next, h2);
	return h1;
      }
    else
      {
	h2->next = merge (h1, h2->next);
	return h2;
      }

  }
  auto merge_sort (auto head)
  {
    if (head == NULL or head->next == NULL)
      return head;
    auto sp = head, fp = head, pre = sp;
    while (fp and fp->next)
      {
	pre = sp;
	sp = sp->next;
	fp = fp->next->next;
      }
    pre->next = NULL;
    auto h1 = merge_sort (head);
    auto h2 = merge_sort (sp);
    return merge (h1, h2);
  }

};

int
main ()
{
  linked_list *head = NULL;
  head = head->add (1, head);
  head = head->add (2, head);
  head->add (3, head);
  head->add (4, head);
  head->add (5, head);
  head->add (6, head);

//     int mid = head->find_mid (head);

//     cout << "mid element is " << mid;
//     head = head->del_mid (head);
//     cout << "\nAfter removing mid element ";
//     head->printjjj (head);
// //   head=head->del_linked_list(head);
//     if (head == NULL)
//       {
//      cout << "Linked List is Empty.";
//       }
//     else
//       {
//      head->printjjj (head);
//       }
//     cout << "After printing Reverse Linked List ";
// //   head->reverse_print(head);
//     head = head->reverse_linked_list (head);
//     head->printjjj (head);
// bool ans=head->palindrome(head,head);
// cout<<"After removing repeating eles from sorted ";
// head=head->remove_duplicate_unsorted(head);
// cout<<head->detect_loop(head);
// head->remove_loop(head);
// cout<<head->detect_loop(head);
// head->intersection_point(head1,head2);
  cout << "input linkedlist" << " ";
  head->printjjj (head);
  cout << "odd_even linkedlist";
  head->odd_even (head);
  head->printjjj (head);
  cout << "merge sort linkedlist";
  head->merge_sort (head);
  head->printjjj (head);
  return 0;
}
