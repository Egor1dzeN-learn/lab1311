#include "TQueue.hpp"
template<class T>

int main() {
    TQueue<int> queue(5);
    queue.push(10);
    queue.push(2);
    queue.push(5);
    queue.push(8);
    queue.push(3);

    int minElement = queue.findMinElement(queue);
    cout << "����������� ������� � �������: " << minElement << endl;

    return 0;
}