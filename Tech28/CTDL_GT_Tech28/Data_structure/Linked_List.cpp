// #include <bits/stdc++.h>
// using namespace std;


// // node *head: con tro kieu node 
// // khi truyen doi so vao mot ham:
// // - head: truyen con tro (ko thay doi gia tri)
// // - &head:truyen dia chi (thay doi gia tri)
// // * Dau '*' :
// // + Giai tham chieu con tro dang tro den
// // + Khai bao bien la con tro 
// struct node{
//     int data;
//     node *next;

//     // node(int x) {
//     //     data  = x;
//     //     next = NULL;
//     // }
// };
// // next cua phan tu cuoi cung la tro toi NULL 

// node* makeNode(int x) {
//     node *newNode = new node;
//     newNode-> data = x;
//     newNode->next = NULL;
//     return newNode;
// }

// // duyet tat ca cac node 
// void duyet(node *head) {
//     while(head!=NULL) {
//         cout <<head->data<<' ';
//         // next : dia chi cua phan tu ke tiep head 
//         head = head->next;
//     }
// }

// // dem node 
// int size (node *head) {
//     int cnt=0;
//     node* curr = head;
//     while(curr!=NULL) {
//         ++cnt;
//         curr = curr->next;
//     }
//     return cnt;
// }


// // Them node moi vao dau ds 
// // idea: gan dia chi head(dia chi node dau trong list) 
// // cho node moi & gan dia chi node moi cho head(cap nhat dia chi cho head qua li node moi) 
// // head : node luu dia chi cua node dau 
// void pushFront(node **head,int x) {
//     // tao node moi
//     node *newNode = makeNode(x);
//     // gan dia chi node head(node dau cu) cho node moi 
//     newNode->next = *head;
//     // cap nhat lai dia chi node head 
//     *head = newNode;
// }

// // them node vao dau linked list cach 2
// void pushFront2(node *&head,int x) {
//     node *newNode = makeNode(x); // node(x) => constructor
//     newNode->next = head;
//     head = newNode;
// }
// // **head được sử dụng để truyền một con trỏ tới con trỏ
// //  (con trỏ đối với một con trỏ). Điều này cho phép thay đổi 
// //  giá trị của con trỏ gốc head bên ngoài phạm vi của hàm.


// // them node vao cuoi linked_list 
// // cho node->next cua phan tu cuoi tro toi node moi 
// void pushBack(node **head,int x) {
//     node *newNode = makeNode(x);
//     // neu ds rong -> cho vao truc tiep 
//     if(*head==NULL) {
//         *head = newNode;
//         return;
//     }
//     node *temp = *head;
//     // tim node cuoi (tro toi null )
//     while(temp->next!=NULL) {
//         temp = temp->next;
//     }
// // cho node cuoi tro toi dia chi node moi(auto tro toi null)
//     temp->next = newNode;
// }

// // cach 2: tham chieu truc tiep  
// void pushBack2(node *&head,int x) {
//     node *temp = head;
//     node *newNode = makeNode(x);
//     if(head==NULL) {
//         head = newNode;
//         return;
//     }
//     while(temp->next!=NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// // Cre : Chuong it 
// // chen node x vao vi tri pos
// // idea: dia chi node moi =  dia cho node ke tiep & dia cho node sau node moi = dia chi node moi 
// void insert(node **head,int x,int pos) {
//     int n = size(*head);
//     if(pos<1 || pos>n+1) return;
//     if(pos==1) {
//         pushFront(head,x);
//         return;
//     }
//     int cnt=0;
//     node *newNode = makeNode(x);
//     node *temp = *head;
//     while(temp->next!=NULL) {
//         cnt++;
//         if(cnt!=pos-1)
//         temp = temp->next;
//         else 
//         break;
//     }
//     // lay dia chi node tai vi tri pos va node tai pos-1
//     // temp_b = pos-1, temp_a = pos 
//     node *temp_b,*temp_a;
//     temp_b = temp;
//     temp = temp->next;
//     temp_a = temp;
//     // cho dia chi node pos = next cua node moi 
//     newNode->next = temp_a;
//     // cho dia chi node moi = next node pos-1
//     temp_b->next = newNode;
// }

// // Cre :tech 
// void insert2(node **head,int x,int k) {
//     int n = size(*head);
//     if(k<1 || k>n+1) return;
//     if(k==1) {
//         pushFront(head,x);
//         return;
//     }
//     node *temp = *head;
//     for (int i=1;i<=k-2;i++) {
//         temp = temp->next;
//     }
//     // temp tro toi node k-1 
//     node *newNode = makeNode(x);
//     // temp->next = dia cho node thu k 
//     // dia chi node thu k gan next cua node moi 
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // xoa 1 node trong ds o dau 
// void popFront(node **head) {
//     if(*head == NULL) return;
//     node *tmp = *head;
//     // cho head quan li node thu 2
//     *head = tmp->next;
//     // xoa node 1 
//     delete(tmp);
// }

// // xoa o cuoi 
// void popBack(node **head) {
//     // ds rong 
//     if(*head==NULL) return;
//     // temp quan li node dau tien 
//     node *temp = *head;
//     // co 1 node 
//     // head tro toi node : cho tro toi null va xoa temp (node)
//     if(temp->next == NULL) {
//         *head = NULL;
//         delete temp;
//         return;
//     }
//     while(temp->next->next!=NULL) {
//         temp = temp->next;
//     }
//     // lay node can xoa (cuoi)
//     node *last = temp->next;
//     // cho node lien ke cuoi quan li null 
//     temp->next = NULL;
//     // xoa node cuoi 
//     delete last;
// }

// // Xoa o giua 
// void erase(node **head,int k){
//     int n = size(*head);
//     if(k<1 || k>n) return;
//     if(k==1) popFront(head);
//     else {
//         // *head: dia chi node head 
//         node *tmp = *head;
//         for (int i=1;i<=k-2;i++) {
//             tmp = tmp->next;
//         }
//         // tmp: quan li node k-1
//         node *erase_k = tmp->next;//node k
//         tmp->next = erase_k->next;// node k-1 ket moi k+1
//         delete erase_k;
//     }
// }

// int main() {
//     system("cls");
//     node *head = NULL;
//     while(1) {
//         cout <<"_______________________________________\n";
//         cout <<"1. Them vao dau\n";
//         cout <<"2. Them vao cuoi\n";
//         cout <<"3. Them vao giua\n";
//         cout <<"4. Xoa node dau DSLK\n";
//         cout <<"5. Xoa node cuoi DSLK\n";
//         cout <<"6. Xoa node giua DSLK\n";
//         cout <<"7. Duyet\n";
//         cout <<"8. Exit\n";
//         cout <<"_______________________________________\n";
//         cout <<"Nhap lua chon: ";
//         int lc; cin>>lc;
//         if(lc==1) {
//             int x; cout <<"Nhap x: "; cin>>x;
//             pushFront2(head,x);
//         }
//         else if(lc==2) {
//             int x; cout <<"Nhap x: "; cin>>x;
//             pushBack2(head,x);
//         }
//         else if(lc==3) {
//             int x; cout<<"Nhap x: ";cin>>x;
//             int k; cout<<"Nhap k: ";cin>>k;
//             insert2(&head,k,x);
//         }
//         else if(lc==4) {
//             popFront(&head);
//         }
//         else if (lc==5){
//             popBack(&head);
//         }
//         else if(lc==6){
//             int k ; cout<<"Nhap vi tri can xoa: ";
//             cin>>k;
//             erase(&head,k);
//         }
//         else if(lc==7) {
//             duyet(head);
//         }
//         else {break;}
//     }
// }

// *Cai dat stack bang array 

// #include<bits/stdc++.h>
// using namespace std;

// int n=0,st[10001];

// void push(int x) {
//     st[n]=x;
//     ++n;
// }

// void pop() {
//     if(n>=1) {
//         --n;
//     }
// }

// int top() {
//     return st[n-1];
// }

// int size() {
//     return n;
// }

// int main() {
//     while(1) {
//         cout <<"___________________\n";
//         cout <<"1.push\n";
//         cout <<"2.top\n";
//         cout <<"3.pop\n";
//         cout <<"4.size\n";
//         cout <<"___________________\n";
//         int lc; cin>>lc;
//         if(lc==1) {
//             int x; cin>>x;
//             push(x);
//         }
//         else if(lc==2) {
//             cout <<top();
//         }
//         else if (lc==3) {
//             pop();
//         }
//         else if(lc==4) {
//             size();
//         }
//         else break;
//     }
// }

// *cai dat stack bang linked_list

// #include<bits/stdc++.h>
// using namespace std;

// struct node{
//     node *next;
//     int data;
// };

// node *makeNode(int x) {
//     node *newNode = new node;
//     newNode->data = x;
//     newNode->next = NULL;
//     return newNode;
// }

// void push(node **head,int top) {
//     node *newNode = makeNode(top);
//     if(*head==NULL) {
//         *head = newNode;
//         return;
//     }
//     newNode->next = *head;
//     *head = newNode;
// }

// void pop(node **head) {
//     if(*head==NULL) {return;}
//     node *tmp = *head;
//     *head = tmp->next;
//     delete tmp;
// }

// void top(node **head){
//     if(*head!=NULL) {
//         cout <<(*head)->data;
//         return;
//     }
// }

// int size(node *head) {
//     node *tmp = head;
//     int cnt=0;
//     while(tmp!=NULL) {
//         ++cnt;
//         tmp = tmp->next;
//     }
//     return cnt;
// }



// int main() {
//     node *head = NULL;
//     while(1) {
//         cout <<"___________________\n";
//         cout <<"1.push\n";
//         cout <<"2.top\n";
//         cout <<"3.pop\n";
//         cout <<"4.size\n";
//         cout <<"___________________\n";
//         int lc; cin>>lc;
//         if(lc==1) {
//             int x; cin>>x;
//             push(&head,x);
//         }
//         else if(lc==2) {
//             top(&head);
//         }
//         else if (lc==3) {
//             pop(&head);
//         }
//         else if(lc==4) {
//            cout<<size(head);
//         }
//         else break;
//     }
// }


// *Cai dat queue bang array :
// #include<bits/stdc++.h>
// using namespace std;

// int n=0, q[10001],maxN = 100000;

// void push(int x) {
//     if(n==maxN) return;
//     q[n] = x;
//     ++n;
// }

// void pop(){
//     if(n==0) return;
//     for (int i=0;i<n-1;i++) {
//         q[i] = q[i+1];
//     }
//     // FIFO -> xoa phan tu dau 
//     --n;
// }

// int front() {
//     return q[0];
// }

// int size() {
//     return n;
// }

// bool empty() {
//     return n==0;
// }

// int main() {
//     while(1) {
//         cout <<"_______________________\n";
//         cout <<"1.Push\n";
//         cout <<"2.Pop\n";
//         cout <<"3.Front\n";
//         cout <<"4.Size\n";
//         cout <<"5.Empty\n";
//         cout <<"6.Duyet\n";
//         cout <<"7.Thoat\n";
//         cout <<"_______________________\n";
//         int lc; cin>>lc;
//         if(lc==1){
//             int x; cin>>x;
//             push(x);
//         }
//         else if(lc==2) {
//             pop();
//         }
//         else if(lc==3) {
//             front();
//         }
//         else if(lc==4) {
//             size();
//         }
//         else if(lc==5) {
//             empty();
//         }
//         else if(lc==6) {
//             for (int i=0;i<n;i++) {
//                 cout <<q[i]<<' ';
//             }
//             cout <<endl;
//         }
//         else break;
//     }

// }

// *Cai dai queue bang linked_list

// #include<bits/stdc++.h>
// using namespace std;

// struct node{
//     node *next;
//     int data;
// };

// node *makeNode(int x) {
//     node *newNode = new node;
//     newNode->data = x;
//     newNode->next = NULL;
//     return newNode;
// }

// // pushBack
// void push(node **head,int x) {
//     node *newNode = makeNode(x);
//     if(*head==NULL) {
//         *head=newNode;
//         return;
//     }
//     node *tmp = *head;
//     while(tmp->next!=NULL) {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }

// // popFront
// void pop(node **head) {
//     if(*head==NULL) return;
//     node *tmp = *head;
//     *head = tmp->next;
//     delete tmp;
// }

// int size(node *head) {
//     int ans = 0;
//     node *tmp = head;
//     while(tmp!=NULL) {
//         ++ans;
//         tmp = tmp->next;
//     }
//     return ans;
// }

// bool empty(node *head) {
//     return head == NULL;
// }

// int front(node *head) {
//     return head->data;
// }

// void duyet(node *head) {
//     node *tmp = head;
//     while(tmp!=NULL) {
//         cout <<tmp->data<<' ';
//         tmp = tmp->next;
//     }
// }
// int main() {
//     node *head=NULL;
//     while(1) {
//         cout <<"_______________________\n";
//         cout <<"1.Push\n";
//         cout <<"2.Pop\n";
//         cout <<"3.Front\n";
//         cout <<"4.Size\n";
//         cout <<"5.Empty\n";
//         cout <<"6.Duyet\n";
//         cout <<"7.Thoat\n";
//         cout <<"_______________________\n";
//         int lc; cin>>lc;
//         if(lc==1){
//             int x; cin>>x;
//             push(&head,x);
//         }
//         else if(lc==2) {
//             pop(&head);
//         }
//         else if(lc==3) {
//             front(head);
//         }
//         else if(lc==4) {
//             size(head);
//         }
//         else if(lc==5) {
//             if(empty(head)) cout <<"EMPTY\n";
//             else cout <<"NOT EMPTY\n";
//         }
//         else if(lc==6) {
//             duyet(head);
//         }
//         else break;
//     }

// }


// Sort linked_list
// #include<bits/stdc++.h>
// using namespace std;

// struct node{
//     node *next;
//     int data;
// };

// node *makeNode(int x) {
//     node *newNode = new node;
//     newNode->data = x;
//     newNode->next = NULL;
//     return newNode;
// }

// void pushBack(node **head,int x) {
//     node *newNode = makeNode(x);
//     if(*head == NULL) {
//         *head = newNode;
//         return;
//     }
//     node *tmp = *head;
//     while(tmp->next!=NULL) {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }

// void duyet(node *head) {
//     node *tmp = head;
//     while(tmp!=NULL) {
//         cout <<tmp->data<<" ";
//         tmp = tmp->next;
//     }
// }

// // selection sort 
// void sapxep(node **head) {
//     for (node *i = *head;i!=NULL;i = i->next){
//         node *minNode = i;
//         for (node *j = i->next;j!=NULL;j = j->next){
//             if(minNode->data > j->data) {
//                 minNode = j;
//             }
//         }
//         // swap(minNode,i)
//         int tmp = i->data;
//         i->data = minNode->data;
//         minNode->data = tmp;
//     }
// }

// int main() {
//     node *head = NULL;
//     int a[] = {1,4,2,3,5,7,6,9,8,0};
//     for (int i=0;i<10;i++) {
//         pushBack(&head,a[i]);
//     }
//     sapxep(&head);
//     duyet(head);
// }

// *sap xep sv theo diem , ten 
// #include<bits/stdc++.h>
// using namespace std;

// struct sv{
//     string name;
//     double gpa;
//     sv() {

//     }
//     sv(string ten, double diem){
//         name = ten;
//         gpa = diem;
//     }
// };

// struct node {
//     sv data;
//     struct node *next;
// };

// typedef struct node node;

// node *makeNode (sv x) {
//     node *newNode = new node();
//     newNode->data = x;
//     newNode->next = NULL;
//     return newNode; 
// }

// void pushBack(node **head,sv x) {
//     node *newNode = makeNode(x);
//     node *tmp = *head;
//     if(*head==NULL) {
//         *head = newNode;
//         return;
//     }
//     while(tmp->next!=NULL) {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }

// void duyet(node *head) {
//     node *tmp = head;
//     while(tmp!=NULL) {
//         cout <<tmp->data.name<<' '<<fixed<<setprecision(2)<<tmp->data.gpa<<endl;
//         tmp = tmp->next;
//     } 
// }

// void sapxepGpa(node **head) {
//     for (node *i = *head;i!=NULL;i=i->next) {
//         node *minGPA = i;
//         for (node *j=i->next;j!=NULL;j=j->next){
//             if(j->data.gpa<minGPA->data.gpa) {
//                 minGPA = j;
//             }
//             // thu tu tu dien 
//             else if(j->data.gpa==minGPA->data.gpa) {
//                if(j->data.name>minGPA->data.name) {
//                 minGPA = j;
//                 }
//             }
//         }
//         // swap 2 sv(theo gpa tang dan)
//         sv tmp = minGPA->data;
//         minGPA->data = i->data;
//         i->data = tmp;
//     }
// }

// int main() {
//     node *head = NULL;
//     sv t("Teo",3.5);
//     sv ti("Ti",2.6);
//     sv c("Chuong",3.6);
//     sv d("Duy",3.6);
//     pushBack(&head,t);
//     pushBack(&head,ti);
//     pushBack(&head,c);
//     pushBack(&head,d);
//     duyet(head);
//     cout <<endl;
//     sapxepGpa(&head);
//     duyet(head);

// }


// *DSLK doi 

#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node *next;// dia chi node truoc
    node *pre; // dia chi node sau
};

node *makeNode(int x) {
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->pre = NULL;
    return newNode;
}

void duyet(node *head) {
    node *tmp = head;
    while(tmp!=NULL) {
        cout <<tmp->data<<' ';
        tmp = tmp->next;
    }
}

int sz(node *head) {
    int cnt=0;
    while(head!=NULL) {
        ++cnt;
        head = head->next;
    }
    return cnt;
}
// pre head = NULL, next head (*head)= address node dau 
void pushFront(node **head,int x) {
    node *newNode = makeNode(x);
    // cho next node moi luu dia chi node dau tien 
    newNode->next = (*head);
    if(*head==NULL) {
        *head=newNode;
        return;
    }
    if(*head!=NULL)
    // head quan li node dau tien -> cap nhat lai pre -> dia chi node moi 
     (*head)->pre = newNode;
    //  cho head quan li node moi 
     (*head) = newNode;
}

void pushBack(node **head,int x) {
    node *newNode = makeNode(x);
    if(*head==NULL) {
        *head = newNode;
        return;
    }
    node *tmp = *head;
    while(tmp->next!=NULL) {
        tmp = tmp->next;
    }
    // temp quan li node cuoi 
    tmp->next = newNode;
    newNode->pre = tmp;
}

int size(node *head) {
    node *tmp = head;

}
void insert(node **head,int x,int k) {
    int n = sz(*head);
    if(k < 1 || k > n) {
        cout <<"Vi tri chon khong hop le\n"; return ;
    }
    if (k==1) {
        pushFront(head,x); return ;
    }
    node *tmp = *head;
    for (int i=1;i<=k-1;i++) {
        tmp = tmp->next;
    }
    // tmp quan li no k 
    node *newNode = makeNode(x);
    // cap nhat next cua newNode 
    newNode->next = tmp;
    // cap nhat pre newNode 
    newNode->pre = tmp->pre;
    // cap nhat pre node k  
    tmp->pre->next = newNode;
    // cap nhat next cua node k-1 
    tmp->pre = newNode;

    //  cach 2 
    //  for (int i=1;i<=k-2;i++) {
    //     tmp = tmp->next;
    // }
    // // tmp quan li no k-1
    // node *newNode = makeNode(x);
    // // cap nhat next cua newNode 
    // newNode->next = tmp->next;
    // // cap nhat pre newNode 
    // newNode->pre = tmp->next;
    // // cap nhat pre node k  
    // tmp->next->pre = newNode;
    // // cap nhat next cua node k-1 
    // tmp->next = newNode;
}


int main() {
    system("cls");
    node *head = NULL;
    while(1) {
        cout <<"_______________________________________\n";
        cout <<"1. Them vao dau\n";
        cout <<"2. Them vao cuoi\n";
        cout <<"3. Them vao giua\n";
        cout <<"4. Xoa node dau DSLK\n";
        cout <<"5. Xoa node cuoi DSLK\n";
        cout <<"6. Xoa node giua DSLK\n";
        cout <<"7. Duyet\n";
        cout <<"8. Exit\n";
        cout <<"_______________________________________\n";
        cout <<"Nhap lua chon: ";
        int lc; cin>>lc;
        if(lc==1) {
            int x; cout <<"Nhap x: "; cin>>x;
            pushFront(&head,x);
        }
        else if(lc==2) {
            int x; cout <<"Nhap x: "; cin>>x;
            pushBack(&head,x);
        }
        else if(lc==3) {
            int x; cout<<"Nhap x: ";cin>>x;
            int k; cout<<"Nhap k: ";cin>>k;
            insert(&head,x,k);
        }
        // else if(lc==4) {
        //     popFront(&head);
        // }
        // else if (lc==5){
        //     popBack(&head);
        // }
        // else if(lc==6){
        //     int k ; cout<<"Nhap vi tri can xoa: ";
        //     cin>>k;
        //     erase(&head,k);
        // }
        else if(lc==7) {
            duyet(head);
        }
        else {break;}
    }
}
