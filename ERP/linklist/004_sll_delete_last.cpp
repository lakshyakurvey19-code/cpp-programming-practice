#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                    // Data of the node
    struct node *nextptr;       // Address of the node
}*stnode;                       // Pointer to the starting node

// Function prototypes
void createNodeList(int n);     // Function to create the linked list
void LastNodeDeletion();        // Function to delete the last node
void displayList();             // Function to display the list

// Main function
int main()
{
    int n,num,pos;
    printf("\n\n Linked List : Delete the last node of Singly Linked List :\n");
    printf("---------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);

    printf("\n Data entered in the list are : \n");      
    displayList();
    LastNodeDeletion();
    printf("\n The new list after deletion the last node are  : \n"); 
    displayList();
    return 0;
}

// Function to create a linked list with n nodes
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;

    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL) // Check whether stnode is NULL for memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);

        stnode-> num = num;         // Assign data to the first node
        stnode-> nextptr = NULL;    // Links the address field to NULL
        tmp = stnode;

        // Create n nodes and add to the linked list
        for(i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));

            if(fnNode == NULL)      // Check whether fnNode is NULL for memory allocation
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;      // Assign data to the current node
                fnNode->nextptr = NULL; // Links the address field to NULL

                tmp->nextptr = fnNode;  // Links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr;
            }
        }
    }
} 

// Function to delete the last node of the linked list
void LastNodeDeletion()
{
    struct node *toDelLast, *preNode;
    if(stnode == NULL)
    {
        printf(" There is no element in the list.");
    }
    else
    {
        toDelLast = stnode;
        preNode = stnode;

        // Traverse to the last node of the list
        while(toDelLast->nextptr != NULL)
        {
            preNode = toDelLast;
            toDelLast = toDelLast->nextptr;
        }
        if(toDelLast == stnode)   // If there is only one node in the list
        {
            stnode = NULL;
        }
        else
        {
            /* Disconnects the link of second last node with last node */
            preNode->nextptr = NULL;
        }

        /* Delete the last node */
        free(toDelLast);
    }
}

// Function to display the entire list
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the empty list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);   // Print the data of the current node
            tmp = tmp->nextptr;                 // Move to the next node
        }
    }
}
