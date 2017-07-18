#include<stdio.h>
#include<stdlib.h>

//ikili arama agaci olusturma,ekleme,dolasma,dugum sayisi,yukseklik islemleri 

struct yapi{ // Binary Tree Yapisi
	int data;
	struct yapi *left;
	struct yapi *right;
};
typedef struct yapi node;// Binary Tree Yapisi Node ismiyle kisaltildi.

node *Olustur(int data)
{
	node *root = (node*)malloc(sizeof(node));
	root->data = data;
	root->left = NULL;
	root->right = NULL;
	return root;
}
node *Insert(node *root,int data)
{
	if(root != NULL)
	{
		if(data<root->data)
		{
			root->left = Insert(root->left,data);
		}
		else
		{
			root->right = Insert(root->right,data);
		}
	}
	else //
	{
		root = Olustur(data);
	}
	return root;
}
// Binary Tree icin uygulanan dolasimlar.
void Preorder(node *root)
{
	if(root != NULL)
	{
		printf("%d ",root->data);
		Preorder(root->left);
		Preorder(root->right);
		
	}
}
void Inorder(node *root)//Kucukten buyuge siralama olarakda bilinir.
{
	if(root!=NULL)
	{
		Inorder(root->left);
		printf("%d ",root->data);
		Inorder(root->right);
		
	}
}
void Postorder(node *root)
{
	if(root != NULL)
	{
		Postorder(root->left);
		Postorder(root->right);
		printf("%d ",root->data);
	}
}
//Binary Tree icin uygulanan dolasimlar bitisi.

void Swap(node *root)//ikili arama agacinda sol ve sag dugumleri degistirme(swap) fonksiyonu
{
	if(root == NULL)
		return;
	
	node *temp = NULL; 
	
	Swap(root->left);
	Swap(root->right);
	
	temp = root->left;
	root->left = root->right;
	root->right = temp;  
	
}
int  Size(node *root)// ikili arama agacindaki dugum sayisi
{
	if(root == NULL)
	{
		return 0;
	}
	else
	{
		return Size(root->left)+Size(root->right)+1;
	}
}
int Tree_Height(node *root)
{
	
	if(root==NULL)
	{
		return -1;
	}
	else
	{
		int left_height,right_height;
		
		left_height = Tree_Height(root->left);
		right_height = Tree_Height(root->right);
	
		if(left_height>right_height)
		{
			return left_height+1;
		}	 
		else
		{
			return right_height+1;	
		}
	}
}
int main()
{
	
}
