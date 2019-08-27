#pragma once

#include <cstdlib>

namespace insoLLLent::LeetCode {

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x);
};

int rangeSumBST(TreeNode* root, int L, int R);

} // namespace insoLLLent::LeetCode
