class Queue{
int sz=10, q[sz], curS,st=-1,end=-1;
int push(x){
  if(curS==sz) return;
  if(currS==0){
     st=0;
     end=0;
  }
  else
    end=(end+1)%sz;
  q[end]=x;
  currS++;
}
int pop(){
  if (currS==0) return;
  int el=q[start];
  if(currS==1)
    start=end=-1;
  currS--;
  return el;
}
int top(){
  if(currS==0) return;
  return q[start];
}
int size(){
  return currS;
}
}
