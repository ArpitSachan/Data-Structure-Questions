void QueueStack :: push(int x)
{
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
         if(!q1.empty()){
             int res=q1.front();
             q1.pop();
             return res;
         } 
         return -1;
}
