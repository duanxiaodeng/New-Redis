#ifndef _SDS_H_
#define _SDS_H_

#include <stdlib.h>

class CSdshdr
{
public:
    CSdshdr(const void *init, size_t initlen);
    inline int getLen() { return m_len; }
    inline int getFree() { return m_free; }

private:
    int m_len; //buf中数据长度
    int m_free; //buf数组剩余长度
    char* m_buf = NULL; //数据空间
};

#endif