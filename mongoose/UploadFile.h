#ifndef _MONGOOSE_UPLOAD_FILE_H
#define _MONGOOSE_UPLOAD_FILE_H

#include <string>

using namespace std;

/**
 * A file uploaded in a request
 */
namespace Mongoose
{
    class UploadFile
    {
        public:
            UploadFile(string filename);

            string getName();

        protected:
            string filename;
    };
};

#endif // _MONGOOSE_UPLOAD_FILE_H
