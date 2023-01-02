  //replace . with [.]
  string defangIPaddr(string address) {
        string res = "";

        for(char x : address){
            if(x == '.'){res = res + "[.]";}
            else{res = res + x;}
        }
        return res;
    }
