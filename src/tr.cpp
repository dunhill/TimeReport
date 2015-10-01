#include "TimeReportConfig.h"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::cout << "TimeReport tool, version " << get_version( ) << std::endl;
    std::cout << "Path to executable: " << argv[0] << std::endl;
    if (argc == 1)
    {
        std::cout << "No parameters specified" << std::endl;
    }
    else
    {
        std::cout << "Parameters:" << std::endl;
        for (int i = 1; i < argc; ++i)
        {
            std::cout << i << ": " << argv[i] << std::endl;
        }

        std::string file_name(argv[1]);
        std::ofstream out_file(file_name.c_str( ),
                               std::ios_base::out | std::ios_base::app);
        out_file << "test" << std::endl;
        out_file.close( );
    }
    return 0;
}
