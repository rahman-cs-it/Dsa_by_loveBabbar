    #include <iostream>

    using namespace std;

    class stack
    {
    public:
        int *arr; 
        int top;
        int size;

        // constructor
        stack(int size) 
        {
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element)
        {
            if (top<size-1)
            {
                top++;
                arr[top] = element;
            }
            else
            {
                cout << "stack overflow " << endl;
            }
        }
        void pop()
        {
            if (top >= 0)
            {
                top--;
            }
            else
            {
                cout << "stack underflow " << endl;
            }
        }
        int peek(){
            if(top>=0 ){
                return arr[top];
            }
            else{
                cout<<"stack is empty "<<endl;
                return -1;
            }
        }

        bool isempty(){
            if(top==-1){
                return true;
            }
            else{
                return false; 
            }
        }
    };

    int main()
    {

        stack st(5);

        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
        
        

        cout<<st.peek()<<endl;

        st.pop();
        st.pop();
        st.pop();
        st.pop();
        st.pop();   
        
        cout<<st.peek()<<endl;

        /* //creation of stack
        stack<int>s;

        //push operation
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(8);
        s.push(5);

        //pop operation
        s.pop();

        cout<<"printing the top element "<<s.top()<<endl;

        if(s.empty()){
            cout<<"stack is empty "<<endl;
        }
        else{
            cout<<"stack is not empty "<<endl;
        }

        cout<<"size of stack is "<<s.size()<<endl; */
    }