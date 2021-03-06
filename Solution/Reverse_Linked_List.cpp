// lettCode - https://leetcode.com/problems/reverse-linked-list/

// Reverse Linked List using Recursion

//CPP
class Solution
{
public
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *rest = reverseList(head->next);

        head->next->next = head;
        head->next = NULL;

        return rest;
    }
}

//Java
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution
{
public
    ListNode reverseList(ListNode head)
    {
        if (head == null || head.next == null)
        {
            return head;
        }
        ListNode rest = reverseList(head.next);

        head.next.next = head;
        head.next = null;

        return rest;
    }
}