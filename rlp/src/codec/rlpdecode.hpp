#ifndef RLP_RLP_DECODE_H
#define RLP_RLP_DECODE_H

#include <string>
#include "alias.hpp"

class RLPDecoder {
    private:
        static buffer_t Decode(const buffer_t& bytes_input);
    public:
        static std::string DecodeByte(const buffer_t& input);
        static std::string DecodeString(const std::string& input);
};

#endif