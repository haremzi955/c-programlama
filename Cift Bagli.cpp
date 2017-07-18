#include<stdio.h>
#include<stdlib.h>

struct yapi{//Bu Yapi Cift Bagli Liste Ýcin Kullanilacak..
	int data;
	struct yapi *next;
	struct yapi *prev;//Yapinin Oncesini Tutan Yapi.Ýsmi Previous'dan gelir.
};
typedef struct yapi node;
node *Olustur_CiftB(int data)
{
	node *x = (node*)malloc(sizeof(node));
	x->data = data;
	x->next = NULL;
	x->prev = NULL;
	return x;
}
node *Basaekle_CiftB(node *root,int data)
{
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = root;
	temp->prev = NULL;
	root = temp;
	return root;
}
node *Sonaekle_CiftB(node *root,int data)
{
	node *p = root;
	while(p->next!=NULL)
	{
		p = p->next;
	}
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	temp->prev = p;
	p->next = temp;
	return root;
}
node *Arayaekle_CiftB(node *root,int data,int ara)
{
	node *p = root;
	while(p->next!=NULL && p->next->data!=ara)
	{
		p = p->next;
	}
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = p->next;
	p->next = temp;
	temp->prev = p;
	return root;
}
node *Sil_CiftB(node *root,int del)
{
	if(root->data == del)
	{
		node *p = root;
		root = root->next;
		root->prev = NULL;
		free(p);
		return root;
	}
	else
	{
		node *p = root;
		while(p->next!=NULL && p->next->data!=del)
		{
			p = p->next;
		}
		node *temp = p->next;
		p->next = p->next->next;
		free(temp);
		return root;
		
	}
}
void Yaz_CiftB(node *root)
{
	node *p = root;
	while(p!=NULL)
	{
		printf(" %d ",p->data);
		p = p->next;
	}
}
int main()
{
	
	
}
