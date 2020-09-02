#include<stdio.h>
typedef struct node
{
    int a;
    char ch[20];
   struct  node *next;
}node;
node *head=NULL;
void display()
{
    node *list=head;
    while(list!=NULL)
    {
        printf("Name: %s\n",list->ch);
        printf("Age:%d\n",list->a);
        list=list->next;
    }
    return;

}
void *nq(node *n)
{
    node *list=NULL;

    if(head==NULL)
    {
        head=n;
        list=head;
        return;
    }
    list->next=n;
    list=list->next;
    menu();

}
void menu()
{
    int c;
    printf("                1.Enqueue\n");
    printf("                2.Dequeue\n");
    printf("                3.Display\n");
    printf("                4.Exit\n");
    printf("Choose Any Option:");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            node *n=(node*)malloc(sizeof(node));
            n->next=NULL;
            printf("\nName:");
            scanf(" %[^\n]",n->ch);
            printf("Age:");
            scanf("%d",&n->a);
            printf("\n");

            nq(n);
            break;
        }
    case 2:
        {
           // dq();
           // break;

        }
    case 3:
        {
            display();
            break;
        }
    case 4:
        {
            exit(0);
            break;
        }
    }
}
int main()
{
    printf("                                              Queue\n");
    printf("                                             __________\n");
    menu();
}
