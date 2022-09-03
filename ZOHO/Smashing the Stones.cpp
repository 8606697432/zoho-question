 #include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n;
    cout<<"\nenter the no: of stones\n";
    cin>>n;
    int weight[n];
    priority_queue<int> q;
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter the weights\n";
        cin>>weight[i];
        q.push(weight[i]);
    }
    while(q.size()>1)
    {
        int a=q.top();
        q.pop();
        int b=q.top();
        q.pop();
        if(a!=b)
        {
            q.push(a-b);
        }
    }
    if(q.empty())
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<q.top()<<endl;
    }
    return 0; 
}