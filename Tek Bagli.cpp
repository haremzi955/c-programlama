#include<stdio.h>
#include<stdlib.h>

struct yapi{//Bu Yapiyi Tek Bagli Dogrusal Ve Dairesel Liste Ýcin Kullandik..
	int data;
	struct yapi *next;
};
typedef struct yapi node;

// Tek Bagli Dogrusal Liste Baslangici
node *olustur(int data)
{
	node *root = (node*)malloc(sizeof(node));
	root->data = data;
	root->next = NULL;
	return root;
}
node *basaekle(node *root,int data)
{
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = root;
	return temp;
}
node *sonaekle(node *root,int data)
{
	node *p = root;
	while(p->next!=NULL)
	{
		p = p->next;
	}
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	p->next = temp;
	return root;
}
node *arayaekle(node *root,int data,int ara)
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
	return root;
}
node *siraliekle(node *root,int data)
{
	if(root == NULL)
	{
		root = (node*)malloc(sizeof(node));
		root->data = data;
		root->next = NULL;
		return root;
	}
	else
	{
		node *p = root;
		
		node *temp = (node*)malloc(sizeof(node));
		temp->data = data;
		if(root->data>data)
		{
			temp->next = root;
			root = temp;
			return root;
		}
		else
		{
			while(p->next!=NULL && p->next->data<data)
			{
				p = p->next;
			}
			temp->next = NULL;
			p->next = temp;
			return root;
		}
		
	}
}
node *sil(node *root,int del)
{
	
	if(root->data == del)
	{
		node *p = root;
		root = p->next;
		free(p);
		return root;
	}
	else
	{
		node *p = root;
		while(p->next !=NULL && p->next->data != del)
		{
			p = p->next;
		}
		node *temp = p->next;
		p->next = p->next->next;
		free(temp);
		return root;
	}
}
void yaz(node *root)
{
	node *p = root;
	while(p!=NULL)
	{
		printf(" %d ",p->data);
		p = p->next;
	}
}
void recursive_Yaz(node *root)
{
	if(root == NULL)
	{
		return;
	}
	else
	{
		node *p = root;
		printf(" %d ",p->data);
		recursive_Yaz(p->next);
	}
	
}
void ters_Yazdir(node *root)
{
	node *p = root;
	node *yeni=NULL;
	
	while(p!=NULL)
	{
		yeni = basaekle(yeni,p->data);
		p = p->next;
	}
	yaz(yeni);
}
// Dairesel Bagli Liste Baslangici
node *Olustur_Dairesel(node *root,int veri)
{
	if(root==NULL)
	{
		node *root = (node*)malloc(sizeof(node));
		root->data = veri;
		root->next = root;
		return root;
	}
	
}
node *Basaekle_Dairesel(node *root,int veri)
{
	node *p = root;
	while(p->next!=root)
	{
		p = p->next;
	}
	node *temp = (node*)malloc(sizeof(node));
	temp->data = veri;
	temp->next = root;
	p->next = temp;
	root = temp;
	return root;
	
}
node *Sonaekle_Dairesel(node *root,int veri)
{
	node *p =  root;
	while(p->next!=root)
	{
		p = p->next;
	}
	node *temp = (node*)malloc(sizeof(node));
	temp->data = veri;
	temp->next = root;
	p->next = temp;
	return root;
}
node *Arayaekle_Dairesel(node *root,int veri,int ara)
{
	node *p = root;
	while(p->next!=root && p->next->data!=ara)
	{
		p = p->next;
	}
	node *temp = (node*)malloc(sizeof(node));
	temp->data = veri;
	temp->next = p->next;
	p->next = temp;
	return root;
}
node *Sil_Dairesel(node *root,int del)
{
	node *p = root;
	if(root->data == del)
	{
		while(p->next!=root)
		{
			p = p->next;
		}
		root = root->next;
		p->next = root;
		return root;
	}
	else
	{
		node *p = root;
		while(p->next!=root && p->next->data!=del)
		{
			p = p->next;
		}
		node *temp = p->next;
		p->next = p->next->next;
		free(temp);
		return root;
	}
}
node *Yaz_Dairesel(node *root)
{
	node *p = root;
	printf(" %d ",p->data);
	p = p->next;
	while(p!=root)
	{
		printf(" %d ",p->data);
		p = p->next;
	}
}

int main()
{
	
}
