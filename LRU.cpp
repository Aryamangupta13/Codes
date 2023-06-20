#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        int key;
        Node* next;
        Node* prev;
        Node(int i,int j){
            key=i;
            data=j;
            next=NULL;
            prev=NULL;
        }
};

class LRUCache {
public:
    unordered_map<int,Node*> m;
    int n;
    Node* head;
    Node* tail;
    LRUCache(int capacity) {
        n=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            Node* ptr=m[key];
            int data=ptr->data;
            ptr->prev->next=ptr->next;
            ptr->next->prev=ptr->prev;
            delete ptr;
            Node* nptr=new Node(key,data);
            m[key]=nptr;
            head->next->prev=nptr;
            nptr->next=head->next;
            nptr->prev=head;
            head->next=nptr;
            return data;
        }   
        return -1;   
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            Node* ptr=m[key];
            ptr->data=value;
            get(key);
            return;
        }
        else{
            if(m.size()==n){
                Node* ptr=tail->prev;
                tail->prev=ptr->prev;
                ptr->prev->next=tail;
                auto itr=m.find(ptr->key);
                m.erase(itr);
                delete ptr;
            }
            Node* nptr=new Node(key,value);
            m[key]=nptr;
            nptr->next=head->next;
            head->next=nptr;
            nptr->prev=head;
            nptr->next->prev=nptr;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
int main(){
    return 0;
}