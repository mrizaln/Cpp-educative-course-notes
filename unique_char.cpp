#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

// convert array of chars into unique array of chars
void unique_char(char c_arr[], int &w_size){
    int temp_size = 1;
    for (int i = 1; i < w_size; i++){
        bool same_letter = 0;
        for (int j = 0; j < temp_size; j++){
            if (c_arr[j] == c_arr[i]){ 
                same_letter = 1;
                break;
            }
        }
        if (!same_letter){
            c_arr[temp_size] = c_arr[i];
            temp_size += 1;
        }
    }
    w_size = temp_size;
}

// return number of unique chars
int unique_char_num(char c_arr[], int w_size){
    int char_num = 1;
    for (int i = 1; i < w_size; i++){
        bool same_letter = 0;
        for (int j = 0; j < char_num; j++){
            if (c_arr[j] == c_arr[i]){ 
                same_letter = 1;
                break;
            }
        }
        if (!same_letter){
            char_num += 1;
        }
    }
    return char_num;
}

bool is_unique_chars(char c_arr[], int w_size){
    int char_num = 1;
    for (int i = 1; i < w_size; i++){
        bool same_letter = 0;
        for (int j = 0; j < char_num; j++){
            if (c_arr[j] == c_arr[i]){ 
                return false;
            }
        }
        char_num += 1;
    }
    return true;
}

int main(){
    string s = "muhammad rizal";
    int word_size = s.length();
    // char* c_arr = new char[word_size + 1];
    char c_arr[word_size];
    strcpy(c_arr, s.c_str());

    for (int i = 0; i < word_size; i++){
        cout << c_arr[i] << " ";
    }
    cout << endl;

    unique_char(c_arr, word_size);

    for (int i = 0; i < word_size; i++){
        cout << c_arr[i] << " ";
    }
    cout << endl << unique_char_num(c_arr, word_size) << endl;

    string s_new = "uniqchars";
    char c_arr_new[s_new.length()];
    strcpy(c_arr_new, s_new.c_str());

    cout << s_new << " is uniq chars? "<< is_unique_chars(c_arr_new, s_new.length()) << endl;
    cout << unique_char_num(c_arr_new, s_new.length()) << endl;
    cout << s     << " is uniq chars? "<< is_unique_chars(c_arr    , s.length())     << endl;

}