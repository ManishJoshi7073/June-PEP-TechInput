//KthLargestElementInAnArray
  int kthLargestElementInAnArray(vector<int>& arr, int k)
    {
        int n = arr.size();
        for(int i=n/2-1;i>=0;i--)
        {
            heapify(arr,i);
        }
        for(int i=n-1;i>=n-k;i--)
        {
            swap(arr[0],arr[i]);
            heapify(arr,0);
        }
        return arr[n-k];
    }

    //merge K sorted list
    mergeTwoList(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                cur->next = l1;
                l1 = l1->next;
            }
            else
            {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1)
        {
            cur->next = l1;
        }
        if(l2)
        {
            cur->next = l2;
        }
        return dummy->next;
     ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        int n = lists.size();
        if(n==0)
        {
            return NULL;
        }
        ListNode* head = lists[0];
        for(int i=1;i<n;i++)
        {
            head = mergeTwoLists(head,lists[i]);
        }
        return head;
    }

    //Tree: Level Order Traversal

    public static void levelOrder(Node root)
    {
        if(root==null)
        {
            return;
        }
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);
        while(!q.isEmpty())
        {
            Node temp = q.remove();
            System.out.print(temp.data+" ");
            if(temp.left!=null)
            {
                q.add(temp.left);
            }
            if(temp.right!=null)
            {
                q.add(temp.right);
            }
        }
    }

    //Tree: Huffman Decoding

    void decode(String s,Node root)
    {
        Node cur = root;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='0')
            {
                cur = cur.left;
            }
            else
            {
                cur = cur.right;
            }
            if(cur.left==null && cur.right==null)
            {
                System.out.print(cur.data);
                cur = root;
            }
        }
    }

    //Swap Node
 public static List<List<Integer>> swapNodes(List<List<Integer>> indexes, List<Integer> queries)
    {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        int n = indexes.size();
        int m = queries.size();
        for(int i=0;i<m;i++)
        {
            int k = queries.get(i);
            List<Integer> temp = new ArrayList<Integer>();
            for(int j=0;j<n;j++)
            {
                if(indexes.get(j).get(0)==k)
                {
                    temp.add(indexes.get(j).get(1));
                }
                else if(indexes.get(j).get(1)==k)
                {
                    temp.add(indexes.get(j).get(0));
                }
            }
            res.add(temp);
        }
        return res;
    }

    //Encryption Decryption
    public static void typeCounter(String sentence)
    {
        int n = sentence.length();
        int[] count = new int[26];
        for(int i=0;i<n;i++)
        {
            count[sentence.charAt(i)-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            System.out.print((char)(i+'a')+" : "+count[i]+" ");
        }
    }

    //Type COunter
    public static void typeCounter(String sentence) {
        int n = sentence.length();
        int s=0,in=0,d=0;
        String[] arr=new String[n];
        arr=sentence.split("\\s+");
        for(int i=0;i<n;i++)
        {
            if(Character.isDigit(arr[i].charAt(i)))
            {
                in++;
            }
            else if(Character.isLetter(arr[i].charAt(i)))
            {
                s++;
            }
            else 
            {
                d++;
            }
        }
        System.out.println("string "+s);
        System.out.println("integer "+in);
        System.out.println("double "+d);
    }

}