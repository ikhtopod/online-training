#include "rangeSumBST.h"

namespace insoLLLent::LeetCode {

TreeNode::TreeNode(int x) : val(x), left(NULL), right(NULL) {}

int rangeSumBST(TreeNode* root, int L, int R) {
	if (root == NULL) return 0;

	int result = 0;

	if (root->val >= L && root->val <= R) {
		result += root->val;
	}

	result += rangeSumBST(root->left, L, R);
	result += rangeSumBST(root->right, L, R);

	return result;
}

} // namespace insoLLLent::LeetCode
