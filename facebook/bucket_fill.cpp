#include <iostream>
#include <vector>
#include <string>

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


void fill(std::vector<std::vector<char>>& arr, char c, int i, int j) {
    if (arr[i][j] != c){
        return;
    }
    arr[i][j] = '-';
    if (i - 1 >= 0){
        fill(arr, c, i - 1, j);
    }
    if (j - 1 >= 0){
        fill(arr, c, i, j - 1);
    }
    if (i + 1 < arr.size()){
        fill(arr, c, i + 1, j);
    }
    if (j + 1 < arr[i].size()){
        fill(arr, c, i, j + 1);
    }
}

int strokesRequired(std::vector<std::string> picture) {
    std::vector<std::vector<char>> arr;
    std::vector<char> tmp(picture[0].length(), '0');

    for(int i = 0; i < picture.size(); i++){
        arr.push_back(tmp);
    }
    
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[i].size(); j++){
            arr[i][j] = picture[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[i].size(); j++){
            if (arr[i][j] != '-') { 
                fill(arr, arr[i][j], i, j);
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string picture_count_temp;
    getline(cin, picture_count_temp);

    int picture_count = stoi(ltrim(rtrim(picture_count_temp)));

    vector<string> picture(picture_count);

    for (int i = 0; i < picture_count; i++) {
        string picture_item;
        getline(cin, picture_item);

        picture[i] = picture_item;
    }

    int result = strokesRequired(picture);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}