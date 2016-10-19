Success state:
	root->right = root;

typedef struct		s_node
{
	struct s_node	*up;
	struct s_node	*down;
	struct s_node	*left;
	struct s_node	*right;
	struct s_node	*header;
}					t_node;

typedef struct		s_named_node
{
	struct s_node	*up;
	struct s_node	*down;
	struct s_node	*left;
	struct s_node	*right;
	struct s_node	*header;
	//size_t			size;
	int				column_name;
}					t_named_node;





Pseudocode:
t_named_node *root;
t_named_node *c;
t_node *r;
t_node *go_R;
t_node **solution;

search(int k, typedef struct stuff)
{
	c = root->right;
	cover(c);
	r = c->down;
	while (r != c)
	{
		solution[k] = r;
		go_R = r->right;
		while (go_R != r)
		{
			cover(go_R->header);
			go_R = go_R->right;
		}
		search(k + 1);
		r = solution[k];
		c = r->header;
		go_L = r->left;
		while (go_L != r)
		{
			uncover(go_L->header);
			go_L = go_L->left;
		}
		r = r->down;
	}
	uncover(c);
	return (?);
}

cover(t_named_node *c)
{
	t_node *i;
	t_node *j;

	(c->right)->left = c->left;
	(c->left)->right = c->right;
	i = c->down;
	while (i != c)
	{
		j = i->right;
		while(j != i)
		{
			(j->down)->up = j->up;
			(j->up)->down = j->down;
			//(j->header)->size = (j->header)->size - 1;
			j = j->right;
		}
		i = i->down;
	}

}

uncover(t_named_node *c)
{
	t_node *i;
	t_node *j;

	i = c->up;
	while (i != c)
	{
		j = i->left;
		while (j != i)
		{
			//(j->header)->size = (j->header)->size + 1;
			(j->up)->down = j;
			(j->down)->up = j;
			j = j->left;
		}
		i = i->up;
	}
	(c->right)->left = c;
	(c->left)->right = c;
}
