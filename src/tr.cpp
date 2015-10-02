#include "AppParams.h"
#include "TimeReportConfig.h"

#include <iostream>
#include <fstream>

int main( int argc, char *argv[] )
{
    std::cout << "TimeReport tool, version " << get_version( ) << std::endl;
    std::cout << "Path to executable: " << argv[ 0 ] << std::endl;

    AppParams params = AppParams::parse( argc, argv );
    if ( !params.valid( ) )
    {
        params.output_usage( );
        return 0;
    }

    std::string file_name( params.get_filename( ) );
    std::ofstream out_file( file_name.c_str( ), std::ios_base::out | std::ios_base::app );
    out_file << "test" << std::endl;
    out_file.close( );

    return 0;
}
