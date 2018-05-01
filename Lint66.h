//
// Created by Admin on 2018/5/1.
//

#ifndef LINTCODECPLUSPLUS_LINT66_H
#define LINTCODECPLUSPLUS_LINT66_H

#include <vector>

/**
 * Definition of TreeNode:
 */
class TreeNode {
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int val);
};

class Lint66 {

public:
    /**
     * @param root: A Tree
     * @return: Preorder in ArrayList which contains node values.
     */
   std::vector<int> preorderTraversal(TreeNode * root);
};


#endif //LINTCODECPLUSPLUS_LINT66_H
