#pragma once

#include <string>

class AppParams
{
public:
    static AppParams parse(int argc, char *argv[])
    {
        AppParams result;
        result.m_file_set = (argc > 1);
        if (result.m_file_set)
        {
            result.m_filename = argv[1];
        }
        return result;
    }

    bool is_file_set() const
    {
        return m_file_set;
    }

    std::string get_filename() const
    {
        return m_filename;
    }

private:
    bool m_file_set;
    std::string m_filename;
};
