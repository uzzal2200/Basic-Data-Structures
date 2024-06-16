#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
		queue<BinaryTreeNode<int>*>q;
		q.push(root);
		long long sum=0;
		while(!q.empty())
		{
			BinaryTreeNode<int>* f=q.front();
			q.pop();
			if(f->left)
			{
				sum=sum+f->left->data;
				q.push(f->left);
			}
			if(f->right) q.push(f->right); 
		}
		return sum;
}