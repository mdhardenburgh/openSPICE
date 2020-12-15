#include <string>
#include <fstream>
#include <iostream>

/*
 * Since I am using Qt for rasterizing and displaying the wfm, I probably 
 * should use its threading system to support Windows and keep it OS agnostic
 */

// #include <pthread.h> 

int main()
{
    std::cout<<"Welcome to Open SPICE! The open source SPICE sim!"<<std::endl;
    std::cout<<"Copyright (C) 2020 Matthew Hardenburgh. mdhardenburgh@protonmail.com"<<std::endl;
    std::cout<<"Bugs or feature requests? Open an issue on github at https://github.com/mdhardenburgh/openSPICE"<<std::endl;
    std::cout<<"Check out more of my projects on GitHub at https://github.com/mdhardenburgh."<<std::endl<<std::endl;

    std::cout<<"This product is free software, free as in freedom and free as in free lunch."<<std::endl;
    std::cout<<"It is created in the hope that it will be useful, but WITHOUT ANY WARRANTY"<<std::endl;
    std::cout<<"and distrubuted under the GPL Version 3 License. Any SPICE circuit simulated"<<std::endl;
    std::cout<<"using this software is NOT subject to the license and does need to be open"<<std::endl;
    std::cout<<"source, but any software using this product as an API or in an API like fasion does"<<std::endl;

    return 0;
}
