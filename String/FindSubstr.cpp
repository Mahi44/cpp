#include <iostream>
#include <string>

bool isColorMembrane(std::string str, std::string sub_str){
    bool color_membrane = false;
    int file_name_index = str.rfind(sub_str);
    int separatorIndex = str.rfind("/") ;
    if(separatorIndex != std::string::npos){
        file_name_index = separatorIndex+1;
    }
    if(file_name_index != std::string::npos){
        int estimated_file_index = str.length() - sub_str.length();
        color_membrane = file_name_index == estimated_file_index;
    }
    return color_membrane;
}

std::string changeNameToCh0(std::string str, std::string sub_str){
    bool color_membrane = false;
    int estimated_file_index = str.length() - sub_str.length();
    std::string ch0Path = str.substr(0, estimated_file_index) + "ch0";
    return ch0Path;
}


int main(){
    std::string path = "/Users/mahipal.parmar/tfs/projects/iBA/downloads/westernBlot/ColorLadder/CHEMI_07292022_161155 2/color-ch0";
    std::string path1 = "/Users/mahipal.parmar/tfs/projects/iBA/downloads/westernBlot/ColorLadder/color-ch0/color-ch0";
    std::string file_name = "color-ch0";
    std::cout << isColorMembrane(path, file_name) << std::endl;
    std::cout << isColorMembrane(path1, file_name) << std::endl;
    std::cout << changeNameToCh0(path, file_name) << std::endl;
    std::cout << changeNameToCh0(path1, file_name) << std::endl;

}