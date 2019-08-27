#include "stdafx.h"

#include "rangeSumBST.h"

using insoLLLent::LeetCode::rangeSumBST;
using insoLLLent::LeetCode::TreeNode;

TEST(LeetCode_rangeSumBST, Return0) {
	TreeNode tree { 0 };
	EXPECT_EQ(rangeSumBST(&tree, 7, 15), 0);
}

TEST(LeetCode_rangeSumBST, Return32) {
	TreeNode tree { 10 };
	tree.left = new TreeNode { 5 };
	tree.right = new TreeNode { 15 };

	tree.left->left = new TreeNode { 3 };
	tree.left->right = new TreeNode { 7 };

	tree.left->right->right = new TreeNode { 18 };

	EXPECT_EQ(rangeSumBST(&tree, 7, 15), 32);
}

TEST(LeetCode_rangeSumBST, Return23And17) {
	TreeNode tree { 10 };
	tree.left = new TreeNode { 5 };
	tree.right = new TreeNode { 15 };

	tree.left->left = new TreeNode { 3 };
	tree.left->right = new TreeNode { 7 };

	tree.left->right->left = new TreeNode { 13 };
	tree.left->right->right = new TreeNode { 18 };

	tree.left->left->left = new TreeNode { 1 };
	tree.left->left->left->left = new TreeNode { 6 };

	EXPECT_EQ(rangeSumBST(&tree, 6, 10), 23);

	delete tree.left->left->left->left;
	tree.left->left->left->left = new TreeNode { 5 };
	EXPECT_NE(rangeSumBST(&tree, 6, 10), 23);
	EXPECT_EQ(rangeSumBST(&tree, 6, 10), 17);
}
