#include<iostream>
using namespace std;

class student{
        private:
        int marks;
    public:
        void setmarks(int m){
         marks=m;
        }
        int getMarks(){
            return marks;
        }
    };
int main(){
    student s1;
    s1.setmarks(60);

    cout<<s1.getMarks();
    
} // namespace std;
