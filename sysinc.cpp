uint8_t digitstoi(string d) {
    check(d.size() == 2, "digitstoi(d) must be provided 2 digits, using the a,b,c,d,z,1-5 method.");
    string adig = d.substr(0,1);
    string bdig = d.substr(1,1);

    uint8_t ret = 0;

    if(adig == "z") { ret = ret + 0; }
    else if(adig == "1") { ret = ret + 10; }
    else if(adig == "2") { ret = ret + 20; }
    else if(adig == "3") { ret = ret + 30; }
    else if(adig == "4") { ret = ret + 40; }
    else if(adig == "5") { ret = ret + 50; }
    else if(adig == "a") { ret = ret + 60; }
    else if(adig == "b") { ret = ret + 70; }
    else if(adig == "c") { ret = ret + 80; }
    else if(adig == "d") { ret = ret + 90; }
    

    if(bdig == "z") { ret = ret + 0; }
    else if(bdig == "1") { ret = ret + 1; }
    else if(bdig == "2") { ret = ret + 2; }
    else if(bdig == "3") { ret = ret + 3; }
    else if(bdig == "4") { ret = ret + 4; }
    else if(bdig == "5") { ret = ret + 5; }
    else if(bdig == "a") { ret = ret + 6; }
    else if(bdig == "b") { ret = ret + 7; }
    else if(bdig == "c") { ret = ret + 8; }
    else if(bdig == "d") { ret = ret + 9; }

    return ret;
}

string itodigits(uint8_t n) {
    check((n < 100) && (n >= 0), "itodigits(uint8_t n) used improperly. ");
    string sret = to_string(n);

    string adig = sret.substr(0,1);
    string bdig = "";

    if(adig == "6") { adig = "a"; }
    else if(adig == "7") { adig = "b"; }
    else if(adig == "8") { adig = "c"; }
    else if(adig == "9") { adig = "d"; }
    else if(adig == "0") { adig = "z"; }

    if(sret.size() == 2)
    {
        bdig = sret.substr(1,1);

        if(bdig == "6") { bdig = "a"; }
        else if(bdig == "7") { bdig = "b"; }
        else if(bdig == "8") { bdig = "c"; }
        else if(bdig == "9") { bdig = "d"; }
        else if(bdig == "0") { bdig = "z"; }
    } else { adig = "z" + adig; }

    return (adig + bdig);
}

string chop(string s) {
    return s.substr(0, s.size()-1);
}
