## 两数相加

### 任务目的

熟悉 `C `语法。
掌握 `链表` 及其相应操作。

### 任务要求

此任务为算法题目，算法实现要求使用 `C` 完成。

### 任务时间

2021-11-22 至 2021-11-28

**注： 起始时间为我们开始Review的时间，终止时间为Review的截止时间。**

### 题目：

1 + 1 = 2

### 描述：

你拥有两条整数(int)链表来代表两个数字。这些数字以反向形式存储，每一个节点都代表一个数字。把相互对应的数字相加，得到的链表就是我们需要的结果。

你可以认为每个数字的左边不会以0开始，即不会出现00014， 0123等，除了0自己本身。

```
123` 存储为 `3 -> 2 -> 1
```

### 示范：

已有链表：

```
(1 -> 3 -> 3) + (5 -> 9 -> 2)
```

输出链表：

```
(6 -> 2 -> 6)
```

请完善`addTwoNumbers()`函数。

```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
}


int main() {
	// test codes example
	ListNode* listA = new ListNode();
	ListNode* listB = new ListNode();
	int a[] = {1, 3, 3};
	int b[] = {5, 9, 2};
	for() {
		// initilise listA and list B
	}
	addTwoNumbers(listA, listB);
}
```

### 测试用例

**算法需满足包括但不仅限于以下测试用例。**

```
[2,4,3] + [5,6,4] = [7,0,8]

[1,2,3,4] + [5,6] = [6,8,3,4]
```



注：请把完整代码文件提交至本仓库，同样，在task2文件夹中添加一个子文件夹，文件夹命令为你的id，在该文件夹中保存你的答案文件。