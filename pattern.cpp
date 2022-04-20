#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  /*  n=4
      ****
      ****
      ****
      ****
*/

  int i=0;
  while(i<n){
    int j=0;
    while(j<n){
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
    
  }

cout<<"Pattern 2: \n";

    /*  n=4
      1111
      2222
      3333
      4444
*/
  i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }
  
  cout<<"Pattern 3: \n";

    /*  n=4
      1234
      1234
      1234
      1234
*/
  i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<j;
      j++;
    }
    cout<<endl;
    i++;
  }

cout<<"Pattern 4: \n";

    /*  n=4
      4321
      4321
      4321
      4321
*/
  i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<n-j+1;
      j++;
    }
    cout<<endl;
    i++;
  }
cout<<"Pattern 5: \n";

    /*  n=4
     1 2  3  4
     5 6  7  8
     9 10 11 12
     13 14 15 16
*/
 i=0;
  int count=0;
  while(i<n){
    int j=1;
    while(j<=n){
      cout<<count+j<<" ";
      j++;
    }
    count=count+n;
    cout<<endl;
    i++;
  }
  //or 
  i=0;
  count=1;
  while(i<n){
    int j=1;
    while(j<=n){
      cout<<count<<" ";
      j++;
      count++;
        }
    cout<<endl;
    i++;
  }
  
  
  cout<<"Pattern 6: \n";

    /*  n=4
      16 15 14 13
      12 11 10 9
      8  7  6  5
      4  3  2  1
*/
    i=1;
    count=n*n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count--;
            j++;
        }
        i++;
        cout<<endl;
    }
  
   cout<<"Pattern 7: \n";

    /*  n=4
      *
      * *
      * * *
      * * * *
*/
  i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;
    }

   cout<<"Pattern 8: \n";

    /*  n=4
      1
      2 2
      3 3 3
      4 4 4 4
*/

  i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
  
     cout<<"Pattern 9: \n";

    /*  n=4
      1
      2 3
      4 5 6
      7 8 9 10
*/
    i=1;
    count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
  
   cout<<"Pattern 10: \n";

    /*  n=4
      1
      2 3
      3 4 5
      4 5 6 7
*/
    i=1;
    while(i<=n){
        int j=1;
        count=i;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
  
  //or without using extra variable
  
    i=1;
    while(i<=n){
        int j=i;
        while(j<2*i){
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
  
  
  cout<<"Pattern 11: \n";

    /*  n=4
      1
      2 1
      3 2 1 
      4 3 2 1
*/
    i=1;
    while(i<=n){
        int j=i;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }
  
  //or
   i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
  
 cout<<"Pattern 12: \n";

    /*  n=4
        A A A A
        B B B B 
        C C C C
        D D D D
*/
  
    i=1;
    char ch =65;
    while(i<=n){
        int j=1;
        
        while(j<=n){
            cout<<ch<<" ";
            
            j++;
        }
        i++;
        ch++;
        cout<<endl;
    }
  
  //or
    i=1;
    char cha;
    while(i<=n){
        int j=1;
        while(j<=n){
            cha='A'+i-1;
            cout<<cha<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
  
   cout<<"Pattern 13: \n";

    /*  n=4
        A B C D
        A B C D
        A B C D
        A B C D
*/
  
  i=1;
    while(i<=n){
        int j=1;
        ch=65;
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }
  //or
    i=1;
    char c;
    while(i<=n){
        int j=1;
        while(j<=n){
            c='A'+j-1;
            cout<<c<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
  
  cout<<"Pattern 14: \n";

    /*  n=4
        A B C D
        E F G H
        I J K L
        M N O P 
*/
  
  i=1;
    char chara=65;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<chara<<" ";
            chara++;
            j++;
        }
        i++;
        cout<<endl;
    }
  
  
  
  

}
