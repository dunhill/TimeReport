#include "AppParams.h"

#include <cstring>
#include <iostream>

AppParams AppParams::parse( int argc, char *argv[] )
{
    AppParams result;
    result.m_valid = true;
    int i = 1;
    while ( i < argc )
    {
        if ( strcmp(argv[ i ], "-f") == 0 && i + 1 < argc )
        {
            result.m_filename = argv[ ++i ];
            ++i;
            continue;
        }

        result.m_valid = false;
        break;
    }
    return result;
}

void AppParams::output_usage( )
{
    std::cout << "Usage:\n"
                 "  tr -f <file name>\n"
                 "Where:\n"
                 "  <file name> - name of file to store time reports\n"
              << std::flush;
}

bool AppParams::valid( ) const
{
    return m_valid;
}

std::string AppParams::get_filename( ) const
{
    return m_filename;
}
