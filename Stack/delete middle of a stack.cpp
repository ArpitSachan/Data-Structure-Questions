stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    if(current==sizeOfStack/2){
        s.pop();
        return s;
    }
    
    int x=s.top();
    s.pop();
    current++;
    
    s=deleteMid(s, sizeOfStack, current);
    
    s.push(x);
    
    return s;
}