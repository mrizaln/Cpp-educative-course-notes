/*
Suppose you are standing in a line to buy a movie ticket. You want to know the price of the ticket,
but only the first person in line knows the price.

You can approach the first person and ask him the price directly. However, if you leave the line,
someone else will take your place. Therefore, you will have to use the following approach.

    You will ask for the ticket price from the person in front of you.

    That person does not want to leave the line either. Therefore, they will ask the same question
    from the person in front of them. This process will continue until the price is asked from the
    first person in the line.

    The first person in line will tell the ticket price. After that, each person in line will know
    the ticket price through the person standing in front of them.

How can we translate this problem into code? Here, recursion comes in.

The first person asking for the price of a ticket from the person in front of them is like calling
some function inside another function body. The person asking the same question from a person in
front of them is like calling the same function in its own body but with different arguments.
*/

#include <iostream>

using namespace std;

int ticket_price(int person) {
  int price;
  if (person == 1) {
    price = 100;
    return price;
  } 
  else {
    cout << "Person" << person << " is asking price" << endl;
    person--;
    price = ticket_price(person);
    cout << "Person" << person << " is telling price" << endl;
    return price;
  }
}

int main() {
  int price;
  price = ticket_price(5);
  cout << "Ticket price = " << price << endl;

}

/*
Why use recursion?#

    You might encounter a problem that is too scary. The easiest way to solve such problems is to 
    use the divide and conquer rule.

    Recursion is a very powerful tool when we can define the problem in terms of itself.

    Recursion helps to write shorter code.

    We can convert loops into a recursive function.

*/