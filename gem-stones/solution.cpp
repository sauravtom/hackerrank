#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int show_vector(vector<char> & v){
    for (int i=0; i<v.size();i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}


int answer2(vector<string> & v){
    std::vector<char> cmn_vector;
    
    //Initializing the common string to the first element of rock vector
    for (int i=0;i<v[0].length();i++){
        cmn_vector.push_back(v[0][i]);
    }
    
    //removing duplicates from vector
    std::sort(cmn_vector.begin(), cmn_vector.end());
    cmn_vector.erase(std::unique(cmn_vector.begin(), cmn_vector.end()), cmn_vector.end());
    
    for (int i=1; i<v.size();i++){ //for each rock in rock arr
        
        //removing duplicates from string
        std::sort(v[i].begin(), v[i].end());
        v[i].erase(std::unique(v[i].begin(), v[i].end()), v[i].end());
        
        cout << "\ncmn :";
        show_vector(cmn_vector);
        cout << "\n testcase :";
        cout << v[i] << endl;
        
        for (int j=0; j<cmn_vector.size();j++){ //for each letter in common array
            
            if (  v[i].find(cmn_vector[j]) == std::string::npos  ){ //if this.letter not found in a rock
                //then remove this.letter from cmn_vector
                cout << '.' <<cmn_vector[j];
                cmn_vector.erase(cmn_vector.begin() + j);
            }       
        }
        
    }
    cout << "\ncmn :";
    show_vector(cmn_vector);
    
    return cmn_vector.size();
}

//all common chars bwteeen two strings(sorted and non redundant)
string acc(string a, string b){
    std::vector<char> char_vector;
    for (int i=0; i<a.size();i++){
        for (int j=0; j<b.size();j++){
            if (a[i] == b[j]){
                char_vector.push_back(a[i]);
                break;
            }
        }
    }
    std::string s( char_vector.begin(), char_vector.end() );
    return s;
}

int answer(vector<string> & v){
    string cmn=v[0];
    
    std::sort(cmn.begin(), cmn.end());
    cmn.erase(std::unique(cmn.begin(), cmn.end()), cmn.end());
    
    for (int i=1; i<v.size();i++){ //for each rock in rock arr
        
        //removing duplicates from string
        std::sort(v[i].begin(), v[i].end());
        v[i].erase(std::unique(v[i].begin(), v[i].end()), v[i].end());
        
        cmn = acc(cmn,v[i]);
        //cout << v[i-1] << '\t' << v[i] << '\t' <<acc(v[i-1],v[i]) << endl ; 
    }
    
    return cmn.size();
}

int main() {
    int T;
    cin >> T;
    std::vector<string> rock_vector;
 
    while (T--) {
        string s;
        cin >> s;
        rock_vector.push_back(s);
    }
    cout << answer(rock_vector);
    return 0;
}
