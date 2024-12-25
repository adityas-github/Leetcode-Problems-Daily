/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if (root == nullptr)
            return {}; // Return empty vector if tree is empty

        vector<int> maxValues; // To store max values at each level
        queue<TreeNode*> q;    // Queue for BFS

        // Start with the root node at level 0
        q.push(root);

        // Perform BFS level by level
        while (!q.empty()) {
            int levelSize = q.size(); // Number of nodes at the current level
            int levelMax = INT_MIN;   // Initialize max value for this level

            // Traverse all nodes at the current level
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = q.front();
                q.pop();

                // Update the maximum value at the current level
                levelMax = max(levelMax, currentNode->val);

                // Enqueue left and right children for the next level
                if (currentNode->left)
                    q.push(currentNode->left);
                if (currentNode->right)
                    q.push(currentNode->right);
            }

            // After processing all nodes at the current level, store the max
            // value for that level
            maxValues.push_back(levelMax);
        }

        return maxValues;
    }
};