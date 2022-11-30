#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *links[26];
    bool f = false;
    bool containsKey(char ch){
        return (links[ch-'a'] != NULL);
    }

    void put(char ch, Node *node){
        links[ch-'a'] = node;
    }

    Node *get(char ch){
        return links[ch-'a'];
    }

    bool setEnd(){
        f = true;
    }

    bool isEnd(){
        return f;
    }
};

class Trie{
    private:
    Node *root;

    Trie(){
        root = new Node();
    }

    // Insert a word in trie
    // tc = O(word.length())
    void insert(string word){
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if(!node->containsKey(word[i])){
                node->put(word[i], new Node());
            }
            // moves to reference trie
            node->get(word[i]);
        }
        // set flag = true;
        node->setEnd();
    }
    // O(length)
    bool search(string word){
        Node *node = root;
        for(int i = 0; i<word.length(); i++){
            if(!node->containsKey(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    // O(length)
    bool startsWith(string prefix){
       Node *node = root;
       for (int i = 0; i < prefix.length(); i++)
       {
           if(!node->containsKey(word[i])){
                return false;
            }
       }
       return true;
    }
};

int main(){
    

    return 0;
}