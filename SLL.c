#include<malloc.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
struct node *next;//selfreferential structure
}*new,*head,*temp;
//typedef struct node node;
struct node* create()
{
    char ch = 'y';  // Variable to ask user if they want to add another node
    int value;      // Variable to store the data of the new node

    do
    {
        new = (struct node*)malloc(sizeof(struct node));  // Dynamically allocate memory for a new node
        printf("Enter value to insert in linked list: ");
        scanf("%d", &value);  // Read the value for the node

        new->data = value;    // Assign value to new node's data
        new->next = NULL;     // Set the next pointer of the new node to NULL (end of the list)

        // If the list is empty (head is NULL), initialize the head and temp to point to the new node
        if (head == NULL)
        {
            head = new;  // Make head point to the new node
            temp = new;  // Make temp also point to the new node (we'll use temp to traverse the list)
        }
        else  // If the list is not empty
        {
            temp->next = new;  // Link the new node to the current last node
            temp = temp->next;  // Move temp to the new last node
        }

        // Ask if the user wants to add another node
        printf("Do you want to add one more node to the list (y/n)? ");
        getchar();  // Consume the newline left in the buffer
        scanf("%c", &ch);  // Read the user's choice

    } while (ch == 'y');  // Continue adding nodes if the user inputs 'y'

    return head;  // Return the head of the created list
}

void display()
{
    struct node *temp;
    if(head==NULL)
       printf("empty");
       else
       {


temp=head;
while(temp!=NULL)
{

printf("%d->",temp->data);
temp=temp->next;
}
}
}


void nodecount() {
    temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("\nNumber of nodes = %d", count);
}

void search() {
    temp = head;
    int ele, flag = 0;
    printf("\nEnter element to be searched: ");
    scanf("%d", &ele);
    while (temp != NULL) {
        if (temp->data == ele) {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if (flag == 1)
        printf("Element found");
    else
        printf("Element not found");
}

/*void reverse(struct node *head) 
{
    struct node *ptr = head;
    if (ptr != NULL) {
        reverse(ptr->next);
        printf("%d\t", ptr->data);
    }
}*/

void reverse()
{

struct node *current,*next;
struct node *prev=NULL;
current=head;
while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
display();
}

void sort() {
    struct node *p, *q;
    int t;
    for (p = head; p != NULL; p = p->next) {
        for (q = p->next; q != NULL; q = q->next) {
            if (p->data > q->data) {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
}
void nodesum() {
    temp = head;
    int sum = 0;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    printf("\nSum of node elements = %d", sum);
}

void max_minele() {
    temp = head;
    int max,min;
    if (head == NULL) 
	{
        printf("\nList is empty");
        return;
    }
    max = temp->data;
    min = temp->data;
    while (temp!= NULL)
	 {
        if (temp->data>max)
        max = temp->data;
        if (temp->data<min)
        min = temp->data;
        temp=temp->next;
    }
    printf("\nMaximum element = %d Minimum element =%d", max,min);
}

int main() {
head=create();
    int i, n, opt;
    while (1) {
        printf("\n1. Create\n2. display\n3. nodecount\n4. search\n5. Reverse\n6. sort\n7. nodesum\n8. Max_minele\n9.exit\n");
        printf("enter your choice\n");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                //create();
                break;
            case 2:
                display();
                break;
            case 3:
                nodecount();
                break;
            case 4:
                 search();
                break;
            case 5:
                reverse();
                break;
            case 6:
                sort();
                display();
                break;
            case 7:
                nodesum();
                break;
            case 8:
                max_minele();
                break;
            
            case 9:
                exit(0);
                   }
    }
    return 0;
}