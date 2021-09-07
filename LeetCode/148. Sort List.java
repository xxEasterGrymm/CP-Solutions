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

// Merge Sort - Divide and Conquer

class Solution {
    public ListNode findMid(ListNode node) {
        ListNode front = node;
        ListNode rear = node;
        
        while(rear.next != null && rear.next.next != null) {
            rear = rear.next.next;  // jumping two nodes
            front = front.next;     // jumping one node
        }
        return front;
    }
    
    public ListNode mergeSortedList(ListNode l1, ListNode l2) {
        if(l1 == null) return l2;
        else if(l2 == null) return l1;
        
        ListNode dummy = new ListNode(-1), prev = dummy, c1 = l1, c2 = l2;
        
        while(c1 != null && c2 != null) {
            if(c1.val < c2.val) {
                prev.next = c1;
                c1 = c1.next;
            }
            else {
                prev.next = c2;
                c2 = c2.next;
            }
            prev = prev.next;
        }
        
        prev.next = c1 == null ? c2 : c1;
        return dummy.next;
    }
    
    public ListNode sortList(ListNode head) {
        if(head == null || head.next == null) return head;
        
        ListNode mid = findMid(head),
                 newHead = mid.next;
        mid.next = null;
        
        ListNode l1 = sortList(head),
                 l2 = sortList(newHead);
        
        return mergeSortedList(l1, l2);
    }
}