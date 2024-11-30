

#include <iostream>



#include <iostream>


struct Node {

    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};



class DoublyLinkedList
{
public:
    Node* head;
    Node* tail;
    Node* list = nullptr;
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

public:
    void push_front(int value)
    {
        Node* ptr = new Node(value);

        ptr->next = head;
        if (head != NULL)
            head->prev = ptr;
        if (tail == NULL)
            tail = ptr;
        head = ptr;
    }

    void push_back(int value)
    {
        Node* ptr = new Node(value);

        ptr->prev = tail;
        if (tail != NULL)
            tail->next = ptr;
        if (head == NULL)
            head = ptr;
        tail = ptr;
    }

    void pop_front()
    {
        if (head == NULL) return;

        Node* ptr = head->next;
        if (ptr != NULL)
            ptr->prev = NULL;
        else
            tail = NULL;

        delete head;
        head = ptr;
    }

    void pop_back()//delete
    {
        if (tail == NULL) return;

        Node* ptr = tail->prev;
        if (ptr != NULL)
            ptr->next = NULL;
        else
            head = NULL;

        delete tail;
        tail = ptr;
    }

    void display()//vivod
    {
        Node* node = head;
        std::cout << head->data;
        node = head;
        while (node->next != nullptr)
        {
            node = node->next;
            std::cout << " " << node->data;
        }
    }
    
    void sort()
    {
        Node* node = head;
        while (node != nullptr)
        {
            Node* next = node->next;
            while (next != nullptr)
            {
                if (node->data > next->data)
                {
                    std::swap(node->data, next->data);
                }
                next = next->next;
            }
            node = node->next;
        }
    }

    void remove_duplicates()
	{
		Node* node = head;
		Node* next = node->next;
		while (next != nullptr)
		{
			if (node->data == next->data)
			{
				node->next = next->next;
				delete next;
				next = node->next;
			}
			else
			{
				node = next;
				next = next->next;
			}
		}
	}
};


int main()
{
    DoublyLinkedList dsa;
    dsa.push_front(1);
    dsa.push_front(2);
    dsa.push_front(3);
    dsa.push_front(3);
    dsa.push_front(250);
    dsa.push_front(250);
    dsa.push_front(250);
    dsa.push_front(45);
    dsa.push_back(-5);
    dsa.push_back(-5);
    dsa.display();
    std::cout << std::endl;
    dsa.sort();
    dsa.display();
    std::cout << std::endl;
    dsa.remove_duplicates();
    dsa.display();
    //while (true)
    //{
    //    int a;
    //    std::cout << "Menu " << std::endl;
    //    std::cout << "1. Добавить элемент в начало.\n2. Добавить элемент в конец.\n3 .Удалить элемент с начала.\n4. Удалить элемент с конца.\n5. Отобразить список\n6. Сортировать список\n7. Удалить дубликаты\n8. Выйти " << std::endl;
    //    std::cin >> a;
    //    switch (a)
    //    {
    //        switch (a)
    //        {
    //        case 1: {
    //            int value;
    //            std::cout << "Введите элемент который хотите добавить: ";
    //            std::cin >> value;
    //            dsa.push_front(value);
    //            break;
    //        }
    //        case 2: {
    //            int value;
    //            std::cout << "Введите элемент который хотите добавить: ";
    //            std::cin >> value;
    //            dsa.push_back(value);
    //            break;
    //        }
    //        case 3: {
    //            std::cout << "Удаление элемента из начала списка";
    //            dsa.pop_front();
    //            break;
    //        }
    //        case 4: {
    //            std::cout << "Удаление элемента из конца списка";
    //            dsa.pop_back();
    //            break;
    //        }
    //        case 5: {
    //            dsa.display();
    //        }
    //        case 6: {

    //        }
    //        case 7: {

    //        }
    //        case 8: {


    //        }
    //        case 9: {
    //            return 0;
    //        }
    //        }
    //    default:
    //        break;
    //    }
    //}
}

void sort()
{


}

void remove_duplicates()
{
}


