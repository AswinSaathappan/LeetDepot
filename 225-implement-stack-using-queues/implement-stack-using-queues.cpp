class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
        // No special initialization required
    }

    void push(int x) {
        q.push(x);

        // Rotate the queue to move the new element to the front
        int size = q.size();
        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int topElement = q.front();
        q.pop();
        return topElement;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
