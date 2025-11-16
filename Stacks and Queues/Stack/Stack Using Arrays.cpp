class Stack{
int top=-1;
int st[10];
int push(x){
if(top>=10) print("Size exceeded");
  top++;
  st[top]=x;
}
int top(){
  if(top==-1) return;
  return st[top];
}
int pop(){
  if(top==-1) return;
  top=top-1;
}
int size(){
  return top+1;
}
}
