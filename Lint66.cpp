//
// Created by Admin on 2018/5/1.
//
#include "Lint66.h"

#include <iostream>
#include <vector>
#include <stack>

////////////////////////////////////////////
////////  TreeCode类的函数定义   ///////////
////////////////////////////////////////////

/**
 * TreeNode构造函数，初始化结点值为val，初始化左右指针为null。
 * @param val 要初始化的结点值
 */
TreeNode::TreeNode(int val) {
    this->val = val;
    this->left = this->right = NULL;
}

///////////////////////////////////////////
////////  Lint66类的函数定义   ////////////
///////////////////////////////////////////

/**
 * 前序遍历，不使用递归实现
 * @param root 要遍历结点的根节点
 * @return 返回前序遍历的结果，存在向量中
 */
std::vector<int> Lint66::preorderTraversal(TreeNode *root) {

    //边界条件检测
    std::vector<int> result;
    if (NULL == root) {
        return result;
    }

    // 利用栈实现前序遍历
    // 开始先让根结点入栈
    std::stack<TreeNode *> nodeStack;
    nodeStack.push(root);
    //开始遍历每一个结点
    TreeNode *currentNode;
    while (!nodeStack.empty()) {
        // 取出栈顶节点
        currentNode = nodeStack.top();
        nodeStack.pop();
        result.push_back(currentNode->val);
        // 前序遍历，先右后左
        if (NULL != currentNode->right) {
            nodeStack.push(currentNode->right);
        }
        if (NULL != currentNode->left) {
            nodeStack.push(currentNode->left);
        }
    }

    // 返回结果
    return result;
}