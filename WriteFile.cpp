#include "WriteFile.h"
#include <sstream>


WriteFile::close()
{
  
   this->output_file.close();
   this->closed = true;

}

WriteFile::writeLine(String* line)
{

   output_file << line->getText() << endl; 
}

WriteFile::WriteFile(const char* file_name)
{
   this->output_file.open(file_name);
   this->closed = false;
}

WriteFile::~WriteFile()
{

}

/*
#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

struct WriteFile
{
   ofstream output_file;
   bool closed;
};

WriteFile* createWriteFile(const char* file_name);
void destroyWriteFile(WriteFile* wf);
void writeLine(WriteFile* wf, String* line);
void close(WriteFile* wf);

#endif
*/

