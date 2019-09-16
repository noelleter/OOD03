//
//  main.cpp
//  OOD03
//
//  Created by 김노은 on 16/09/2019.
//  Copyright © 2019 Noeun-Kim. All rights reserved.
//

#include <iostream>

class SetValue
{
    int x, y;
    // member 변수는 private
    
public:
    void setXY(int a, int b){
        x = a;
        y = b;
    }
    
public:
    void show(){
        std:std::cout << "X= " << x << ", Y= " << y << std::endl;
    }
};

 int main() {
     SetValue obj;
     obj.setXY(33, 44);
     obj.show();
     system("read");    // window system("pause"); 대신 사용, 콘솔창 멈추는 기능
     return 0;
 }

