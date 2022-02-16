#define TYPE_ID(x) _Generic((x),                   \
                            uint8_t  : "uint8_t",  \
                            uint16_t : "uint16_t", \
                            uint32_t : "uint32_t", \
                            uint64_t : "uint64_t", \
                            int8_t   : "uint8_t",  \
                            int16_t  : "uint16_t", \
                            int32_t  : "uint32_t", \
                            int64_t  : "uint64_t", \
                            float    : "float",    \
                            double   : "double",   \
                            default  : "unknown")
