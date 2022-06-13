PriorityQueue<Integer> pq=new PriorityQueue<>();  
PriorityQueue<Integer> pq=new PriorityQueue<>(Collections.reverseOrder());  //--> to make big value priority first
int []=ranks={22,99,3,1,88,4,11};

for(int val:ranks)
{
  pq.add(val);     //->  O(nlogn)
  
}

while(pq.size()>0)
{
  System.out.println(pq.peek());  --> give result in decending order, small value priority first
  pq.remove();
}



  
