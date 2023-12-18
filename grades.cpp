/******************************************************************************

                          program to keep track of students grade.

*******************************************************************************/

#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

class studentgrades{
    private:
    unordered_map<string,int> grades;
    public:
    void addgrade(string student,int grade){
        grades[student] = grade;
    }
    void displaygrade(){
        cout<<"student grades: ";
        for(auto& pair : grades)
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    int getgrade(string student){
        auto it = grades.find(student);
        if(it!=grades.end()){
            return it->second;
        }
        else{
            cout<<"student not found"<<endl;
            return -1;
        }
    }
};

int main()
{
   studentgrades ss;
   ss.addgrade("mukesh",78);
   ss.addgrade("Robert",48);
   ss.addgrade("Olivia",92);
   
   ss.displaygrade();
   
  cout<<"grades for olivia"<<ss.getgrade("Olivia");
    return 0;
}
