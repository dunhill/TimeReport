#pragma once

#include <string>

class AppParams
{
public:
    static AppParams parse( int argc, char *argv[] );
    static void output_usage( );

    bool valid( ) const;

    std::string get_filename( ) const;

private:
    AppParams( ) : m_valid( false ), m_filename( "" ){};

private:
    bool m_valid;
    std::string m_filename;
};
