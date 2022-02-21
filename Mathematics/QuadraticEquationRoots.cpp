//Given a quadratic equation in the form ax2 + bx + c. Find its roots.
//Note: Return the maximum root followed by the minimum root.
#include<iostream>
#include<algorithm>
#include<vector>

std::vector<int> quadraticRoots(int a, int b, int c){
    std::vector<int> roots;
    double d = b*b - 4*a*c;

    if (d==0)   //equal roots
        for (int i = 0; i < 2; i++)
            roots.push_back((-b+d)/(2*a));
    
    else if (d>0)    //real unequal roots
    {
        roots.push_back((-b+d)/(2*a));
        roots.push_back((-b-d)/(2*a));
        
        std::sort(roots.begin(), roots.end(), std::greater<int>()); //sorting in descending order
    }

    else    //imaginary roots
        roots.push_back(-1);

    return roots;

}

int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    std::vector<int> r = quadraticRoots(a,b,c);
    
    //imaginary roots
    if(r.size()==1 && r[0]==-1) std::cout<<"Imaginary";
    //real roots
    else{
        for (int i = 0; i < r.size(); i++)
            std::cout<<r[i]<<" ";
    }
    return 0;
}