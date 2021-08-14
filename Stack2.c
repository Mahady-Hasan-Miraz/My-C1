/*#include <stdio.h>

int MAXSIZE = 5;
int stack[5];
int top = -1;

void push ()
{
    int x ;
    printf("Enter data");
    scanf("%d",&x);
    if(top=5-1)
        {
            printf("Overflow");
            }
    else
   {
       top++;
    stack[top]=x;
   }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
        printf("%d",stack[i]);

}
int main()
{
void push();
void display();
}

*/
# include<stdio.h>

//using namespace std;

Stack()
{
    int top;
    public:
    int a[10];  //Maximum size of Stack
    Stack()
    {
        top = -1;
    }

    // declaring all the function
    void push(int x);
    int pop();
    void isEmpty();
};

// function to insert data into stack
void Stack::push(int x)
{
    if(top >= 10)
    {
        cout << "Stack Overflow \n";
    }
    else
    {
        a[++top] = x;
        cout << "Element Inserted \n";
    }
}

// function to remove data from the top of the stack
int Stack::pop()
{
    if(top < 0)
    {
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = a[top--];
        return d;
    }
}

// function to check if stack is empty
void Stack::isEmpty()
{
    if(top < 0)
    {
        cout << "Stack is empty \n";
    }
    else
    {
        cout << "Stack is not empty \n";
    }
}

// main function
int main() {

    Stack s1;
    s1.push(10);
    s1.push(100);
    /*
        preform whatever operation you want on the stack
    */
}
