#ifndef UTILS_H
#define UTILS_H

#include "structs.h"

Contact* createContact(int count, const char* name, const char* phoneNum, const char* email);

TreeNode* createNode(Contact *c);

TreeNode* insertNode(TreeNode* root, TreeNode* newNode);

TreeNode* searchNode(TreeNode* root, const char* name);

int updateCSVHelper(TreeNode* root, FILE* fPtr);

int updateCSV(TreeNode* root);

TreeNode* deleteContact(TreeNode* root, const char* name);

void freeContact(Contact* c);

int isInteger(const char* input);

int isValidPhoneNumber(const char* input);

int isValidEmailAddress(const char* input);

int isDuplicate(const char* input, TreeNode* root);

void editContact(TreeNode** root, const char* keyName, const char* name, const char* phoneNum, const char* email);

int countTreeNodes(TreeNode* root);

void alternateSortHelper(TreeNode* root, TreeNode** arr, int* i);

TreeNode** alternateSort(TreeNode* root, int mode);

int compareValue(const TreeNode* a, const TreeNode* b, int mode);

#endif