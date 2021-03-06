// Generated by zerobufCxx.py

#include "schema2.h"

#include <zerobuf/NonMovingAllocator.h>
#include <zerobuf/NonMovingSubAllocator.h>
#include <zerobuf/StaticSubAllocator.h>
#include <zerobuf/json.h>


double* DoubleTable::getDoublearray()
{
    return getAllocator().template getItemPtr< double >( 4 );
}

const double* DoubleTable::getDoublearray() const
{
    return getAllocator().template getItemPtr< double >( 4 );
}

std::vector< double > DoubleTable::getDoublearrayVector() const
{
    const double* ptr = getAllocator().template getItemPtr< double >( 4 );
    return std::vector< double >( ptr, ptr + 125 );
}

void DoubleTable::setDoublearray( double value[ 125 ] )
{
    ::memcpy( getAllocator().template getItemPtr< double >( 4 ), value, 125 * sizeof( double ));
    notifyChanged();
}

void DoubleTable::setDoublearray( const std::vector< double >& value )
{
    if( 125 < value.size( ))
        return;
    ::memcpy( getAllocator().template getItemPtr< double >( 4 ), value.data(), value.size() * sizeof( double ));
    notifyChanged();
}

size_t DoubleTable::getDoublearraySize() const
{
    return 125;
}

DoubleTable::DoubleTable()
    : DoubleTable( ::zerobuf::AllocatorPtr( new ::zerobuf::NonMovingAllocator( 1004, 0 )))
{}

DoubleTable::DoubleTable( const std::vector< double >& doublearrayValue )
    : DoubleTable( ::zerobuf::AllocatorPtr( new ::zerobuf::NonMovingAllocator( 1004, 0 )))
{
    setDoublearray( doublearrayValue );
}

DoubleTable::DoubleTable( const DoubleTable& rhs )
    : DoubleTable( ::zerobuf::AllocatorPtr( new ::zerobuf::NonMovingAllocator( 1004, 0 )))
{
    *this = rhs;
}

DoubleTable::DoubleTable( DoubleTable&& rhs ) noexcept
    : ::zerobuf::Zerobuf( std::move( rhs ))
{
}

DoubleTable::DoubleTable( const ::zerobuf::Zerobuf& rhs )
    : DoubleTable( ::zerobuf::AllocatorPtr( new ::zerobuf::NonMovingAllocator( 1004, 0 )))
{
    ::zerobuf::Zerobuf::operator = ( rhs );
}

DoubleTable::DoubleTable( ::zerobuf::AllocatorPtr allocator )
    : ::zerobuf::Zerobuf( std::move( allocator ))
{
}

DoubleTable::~DoubleTable()
    {}

DoubleTable& DoubleTable::operator = ( DoubleTable&& rhs )
{
    ::zerobuf::Zerobuf::operator = ( std::move( rhs ));
    return *this;
}

std::string DoubleTable::getSchema() const
{
    return ZEROBUF_SCHEMA();
}

std::string DoubleTable::ZEROBUF_SCHEMA()
{
    return R"({
    "$schema": "http://json-schema.org/schema#",
    "title": "DoubleTable",
    "description": "Class DoubleTable of namespace []",
    "type": "object",
    "additionalProperties": false,
    "properties": {
        "doublearray": {
            "type": "array",
            "minItems": 125,
            "maxItems": 125,
            "items": {
                "type": "number"
            }
        }
    }
})";
}

void DoubleTable::_parseJSON( const Json::Value& json )
{
    if( ::zerobuf::hasJSONField( json, "doublearray" ))
    {
        const Json::Value& field = ::zerobuf::getJSONField( json, "doublearray" );
        double* array = (double*)getDoublearray();
        array[0] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 0 ));
        array[1] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 1 ));
        array[2] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 2 ));
        array[3] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 3 ));
        array[4] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 4 ));
        array[5] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 5 ));
        array[6] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 6 ));
        array[7] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 7 ));
        array[8] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 8 ));
        array[9] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 9 ));
        array[10] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 10 ));
        array[11] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 11 ));
        array[12] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 12 ));
        array[13] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 13 ));
        array[14] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 14 ));
        array[15] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 15 ));
        array[16] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 16 ));
        array[17] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 17 ));
        array[18] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 18 ));
        array[19] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 19 ));
        array[20] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 20 ));
        array[21] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 21 ));
        array[22] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 22 ));
        array[23] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 23 ));
        array[24] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 24 ));
        array[25] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 25 ));
        array[26] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 26 ));
        array[27] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 27 ));
        array[28] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 28 ));
        array[29] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 29 ));
        array[30] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 30 ));
        array[31] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 31 ));
        array[32] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 32 ));
        array[33] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 33 ));
        array[34] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 34 ));
        array[35] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 35 ));
        array[36] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 36 ));
        array[37] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 37 ));
        array[38] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 38 ));
        array[39] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 39 ));
        array[40] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 40 ));
        array[41] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 41 ));
        array[42] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 42 ));
        array[43] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 43 ));
        array[44] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 44 ));
        array[45] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 45 ));
        array[46] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 46 ));
        array[47] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 47 ));
        array[48] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 48 ));
        array[49] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 49 ));
        array[50] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 50 ));
        array[51] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 51 ));
        array[52] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 52 ));
        array[53] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 53 ));
        array[54] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 54 ));
        array[55] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 55 ));
        array[56] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 56 ));
        array[57] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 57 ));
        array[58] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 58 ));
        array[59] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 59 ));
        array[60] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 60 ));
        array[61] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 61 ));
        array[62] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 62 ));
        array[63] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 63 ));
        array[64] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 64 ));
        array[65] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 65 ));
        array[66] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 66 ));
        array[67] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 67 ));
        array[68] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 68 ));
        array[69] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 69 ));
        array[70] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 70 ));
        array[71] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 71 ));
        array[72] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 72 ));
        array[73] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 73 ));
        array[74] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 74 ));
        array[75] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 75 ));
        array[76] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 76 ));
        array[77] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 77 ));
        array[78] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 78 ));
        array[79] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 79 ));
        array[80] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 80 ));
        array[81] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 81 ));
        array[82] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 82 ));
        array[83] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 83 ));
        array[84] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 84 ));
        array[85] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 85 ));
        array[86] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 86 ));
        array[87] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 87 ));
        array[88] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 88 ));
        array[89] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 89 ));
        array[90] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 90 ));
        array[91] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 91 ));
        array[92] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 92 ));
        array[93] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 93 ));
        array[94] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 94 ));
        array[95] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 95 ));
        array[96] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 96 ));
        array[97] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 97 ));
        array[98] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 98 ));
        array[99] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 99 ));
        array[100] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 100 ));
        array[101] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 101 ));
        array[102] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 102 ));
        array[103] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 103 ));
        array[104] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 104 ));
        array[105] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 105 ));
        array[106] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 106 ));
        array[107] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 107 ));
        array[108] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 108 ));
        array[109] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 109 ));
        array[110] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 110 ));
        array[111] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 111 ));
        array[112] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 112 ));
        array[113] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 113 ));
        array[114] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 114 ));
        array[115] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 115 ));
        array[116] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 116 ));
        array[117] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 117 ));
        array[118] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 118 ));
        array[119] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 119 ));
        array[120] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 120 ));
        array[121] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 121 ));
        array[122] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 122 ));
        array[123] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 123 ));
        array[124] = ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( field, 124 ));
    }
}

void DoubleTable::_createJSON( Json::Value& json ) const
{
    {
        Json::Value& field = ::zerobuf::getJSONField( json, "doublearray" );
        const double* array = (const double*)getDoublearray();
        ::zerobuf::toJSON( array[0], ::zerobuf::getJSONField( field, 0 ));
        ::zerobuf::toJSON( array[1], ::zerobuf::getJSONField( field, 1 ));
        ::zerobuf::toJSON( array[2], ::zerobuf::getJSONField( field, 2 ));
        ::zerobuf::toJSON( array[3], ::zerobuf::getJSONField( field, 3 ));
        ::zerobuf::toJSON( array[4], ::zerobuf::getJSONField( field, 4 ));
        ::zerobuf::toJSON( array[5], ::zerobuf::getJSONField( field, 5 ));
        ::zerobuf::toJSON( array[6], ::zerobuf::getJSONField( field, 6 ));
        ::zerobuf::toJSON( array[7], ::zerobuf::getJSONField( field, 7 ));
        ::zerobuf::toJSON( array[8], ::zerobuf::getJSONField( field, 8 ));
        ::zerobuf::toJSON( array[9], ::zerobuf::getJSONField( field, 9 ));
        ::zerobuf::toJSON( array[10], ::zerobuf::getJSONField( field, 10 ));
        ::zerobuf::toJSON( array[11], ::zerobuf::getJSONField( field, 11 ));
        ::zerobuf::toJSON( array[12], ::zerobuf::getJSONField( field, 12 ));
        ::zerobuf::toJSON( array[13], ::zerobuf::getJSONField( field, 13 ));
        ::zerobuf::toJSON( array[14], ::zerobuf::getJSONField( field, 14 ));
        ::zerobuf::toJSON( array[15], ::zerobuf::getJSONField( field, 15 ));
        ::zerobuf::toJSON( array[16], ::zerobuf::getJSONField( field, 16 ));
        ::zerobuf::toJSON( array[17], ::zerobuf::getJSONField( field, 17 ));
        ::zerobuf::toJSON( array[18], ::zerobuf::getJSONField( field, 18 ));
        ::zerobuf::toJSON( array[19], ::zerobuf::getJSONField( field, 19 ));
        ::zerobuf::toJSON( array[20], ::zerobuf::getJSONField( field, 20 ));
        ::zerobuf::toJSON( array[21], ::zerobuf::getJSONField( field, 21 ));
        ::zerobuf::toJSON( array[22], ::zerobuf::getJSONField( field, 22 ));
        ::zerobuf::toJSON( array[23], ::zerobuf::getJSONField( field, 23 ));
        ::zerobuf::toJSON( array[24], ::zerobuf::getJSONField( field, 24 ));
        ::zerobuf::toJSON( array[25], ::zerobuf::getJSONField( field, 25 ));
        ::zerobuf::toJSON( array[26], ::zerobuf::getJSONField( field, 26 ));
        ::zerobuf::toJSON( array[27], ::zerobuf::getJSONField( field, 27 ));
        ::zerobuf::toJSON( array[28], ::zerobuf::getJSONField( field, 28 ));
        ::zerobuf::toJSON( array[29], ::zerobuf::getJSONField( field, 29 ));
        ::zerobuf::toJSON( array[30], ::zerobuf::getJSONField( field, 30 ));
        ::zerobuf::toJSON( array[31], ::zerobuf::getJSONField( field, 31 ));
        ::zerobuf::toJSON( array[32], ::zerobuf::getJSONField( field, 32 ));
        ::zerobuf::toJSON( array[33], ::zerobuf::getJSONField( field, 33 ));
        ::zerobuf::toJSON( array[34], ::zerobuf::getJSONField( field, 34 ));
        ::zerobuf::toJSON( array[35], ::zerobuf::getJSONField( field, 35 ));
        ::zerobuf::toJSON( array[36], ::zerobuf::getJSONField( field, 36 ));
        ::zerobuf::toJSON( array[37], ::zerobuf::getJSONField( field, 37 ));
        ::zerobuf::toJSON( array[38], ::zerobuf::getJSONField( field, 38 ));
        ::zerobuf::toJSON( array[39], ::zerobuf::getJSONField( field, 39 ));
        ::zerobuf::toJSON( array[40], ::zerobuf::getJSONField( field, 40 ));
        ::zerobuf::toJSON( array[41], ::zerobuf::getJSONField( field, 41 ));
        ::zerobuf::toJSON( array[42], ::zerobuf::getJSONField( field, 42 ));
        ::zerobuf::toJSON( array[43], ::zerobuf::getJSONField( field, 43 ));
        ::zerobuf::toJSON( array[44], ::zerobuf::getJSONField( field, 44 ));
        ::zerobuf::toJSON( array[45], ::zerobuf::getJSONField( field, 45 ));
        ::zerobuf::toJSON( array[46], ::zerobuf::getJSONField( field, 46 ));
        ::zerobuf::toJSON( array[47], ::zerobuf::getJSONField( field, 47 ));
        ::zerobuf::toJSON( array[48], ::zerobuf::getJSONField( field, 48 ));
        ::zerobuf::toJSON( array[49], ::zerobuf::getJSONField( field, 49 ));
        ::zerobuf::toJSON( array[50], ::zerobuf::getJSONField( field, 50 ));
        ::zerobuf::toJSON( array[51], ::zerobuf::getJSONField( field, 51 ));
        ::zerobuf::toJSON( array[52], ::zerobuf::getJSONField( field, 52 ));
        ::zerobuf::toJSON( array[53], ::zerobuf::getJSONField( field, 53 ));
        ::zerobuf::toJSON( array[54], ::zerobuf::getJSONField( field, 54 ));
        ::zerobuf::toJSON( array[55], ::zerobuf::getJSONField( field, 55 ));
        ::zerobuf::toJSON( array[56], ::zerobuf::getJSONField( field, 56 ));
        ::zerobuf::toJSON( array[57], ::zerobuf::getJSONField( field, 57 ));
        ::zerobuf::toJSON( array[58], ::zerobuf::getJSONField( field, 58 ));
        ::zerobuf::toJSON( array[59], ::zerobuf::getJSONField( field, 59 ));
        ::zerobuf::toJSON( array[60], ::zerobuf::getJSONField( field, 60 ));
        ::zerobuf::toJSON( array[61], ::zerobuf::getJSONField( field, 61 ));
        ::zerobuf::toJSON( array[62], ::zerobuf::getJSONField( field, 62 ));
        ::zerobuf::toJSON( array[63], ::zerobuf::getJSONField( field, 63 ));
        ::zerobuf::toJSON( array[64], ::zerobuf::getJSONField( field, 64 ));
        ::zerobuf::toJSON( array[65], ::zerobuf::getJSONField( field, 65 ));
        ::zerobuf::toJSON( array[66], ::zerobuf::getJSONField( field, 66 ));
        ::zerobuf::toJSON( array[67], ::zerobuf::getJSONField( field, 67 ));
        ::zerobuf::toJSON( array[68], ::zerobuf::getJSONField( field, 68 ));
        ::zerobuf::toJSON( array[69], ::zerobuf::getJSONField( field, 69 ));
        ::zerobuf::toJSON( array[70], ::zerobuf::getJSONField( field, 70 ));
        ::zerobuf::toJSON( array[71], ::zerobuf::getJSONField( field, 71 ));
        ::zerobuf::toJSON( array[72], ::zerobuf::getJSONField( field, 72 ));
        ::zerobuf::toJSON( array[73], ::zerobuf::getJSONField( field, 73 ));
        ::zerobuf::toJSON( array[74], ::zerobuf::getJSONField( field, 74 ));
        ::zerobuf::toJSON( array[75], ::zerobuf::getJSONField( field, 75 ));
        ::zerobuf::toJSON( array[76], ::zerobuf::getJSONField( field, 76 ));
        ::zerobuf::toJSON( array[77], ::zerobuf::getJSONField( field, 77 ));
        ::zerobuf::toJSON( array[78], ::zerobuf::getJSONField( field, 78 ));
        ::zerobuf::toJSON( array[79], ::zerobuf::getJSONField( field, 79 ));
        ::zerobuf::toJSON( array[80], ::zerobuf::getJSONField( field, 80 ));
        ::zerobuf::toJSON( array[81], ::zerobuf::getJSONField( field, 81 ));
        ::zerobuf::toJSON( array[82], ::zerobuf::getJSONField( field, 82 ));
        ::zerobuf::toJSON( array[83], ::zerobuf::getJSONField( field, 83 ));
        ::zerobuf::toJSON( array[84], ::zerobuf::getJSONField( field, 84 ));
        ::zerobuf::toJSON( array[85], ::zerobuf::getJSONField( field, 85 ));
        ::zerobuf::toJSON( array[86], ::zerobuf::getJSONField( field, 86 ));
        ::zerobuf::toJSON( array[87], ::zerobuf::getJSONField( field, 87 ));
        ::zerobuf::toJSON( array[88], ::zerobuf::getJSONField( field, 88 ));
        ::zerobuf::toJSON( array[89], ::zerobuf::getJSONField( field, 89 ));
        ::zerobuf::toJSON( array[90], ::zerobuf::getJSONField( field, 90 ));
        ::zerobuf::toJSON( array[91], ::zerobuf::getJSONField( field, 91 ));
        ::zerobuf::toJSON( array[92], ::zerobuf::getJSONField( field, 92 ));
        ::zerobuf::toJSON( array[93], ::zerobuf::getJSONField( field, 93 ));
        ::zerobuf::toJSON( array[94], ::zerobuf::getJSONField( field, 94 ));
        ::zerobuf::toJSON( array[95], ::zerobuf::getJSONField( field, 95 ));
        ::zerobuf::toJSON( array[96], ::zerobuf::getJSONField( field, 96 ));
        ::zerobuf::toJSON( array[97], ::zerobuf::getJSONField( field, 97 ));
        ::zerobuf::toJSON( array[98], ::zerobuf::getJSONField( field, 98 ));
        ::zerobuf::toJSON( array[99], ::zerobuf::getJSONField( field, 99 ));
        ::zerobuf::toJSON( array[100], ::zerobuf::getJSONField( field, 100 ));
        ::zerobuf::toJSON( array[101], ::zerobuf::getJSONField( field, 101 ));
        ::zerobuf::toJSON( array[102], ::zerobuf::getJSONField( field, 102 ));
        ::zerobuf::toJSON( array[103], ::zerobuf::getJSONField( field, 103 ));
        ::zerobuf::toJSON( array[104], ::zerobuf::getJSONField( field, 104 ));
        ::zerobuf::toJSON( array[105], ::zerobuf::getJSONField( field, 105 ));
        ::zerobuf::toJSON( array[106], ::zerobuf::getJSONField( field, 106 ));
        ::zerobuf::toJSON( array[107], ::zerobuf::getJSONField( field, 107 ));
        ::zerobuf::toJSON( array[108], ::zerobuf::getJSONField( field, 108 ));
        ::zerobuf::toJSON( array[109], ::zerobuf::getJSONField( field, 109 ));
        ::zerobuf::toJSON( array[110], ::zerobuf::getJSONField( field, 110 ));
        ::zerobuf::toJSON( array[111], ::zerobuf::getJSONField( field, 111 ));
        ::zerobuf::toJSON( array[112], ::zerobuf::getJSONField( field, 112 ));
        ::zerobuf::toJSON( array[113], ::zerobuf::getJSONField( field, 113 ));
        ::zerobuf::toJSON( array[114], ::zerobuf::getJSONField( field, 114 ));
        ::zerobuf::toJSON( array[115], ::zerobuf::getJSONField( field, 115 ));
        ::zerobuf::toJSON( array[116], ::zerobuf::getJSONField( field, 116 ));
        ::zerobuf::toJSON( array[117], ::zerobuf::getJSONField( field, 117 ));
        ::zerobuf::toJSON( array[118], ::zerobuf::getJSONField( field, 118 ));
        ::zerobuf::toJSON( array[119], ::zerobuf::getJSONField( field, 119 ));
        ::zerobuf::toJSON( array[120], ::zerobuf::getJSONField( field, 120 ));
        ::zerobuf::toJSON( array[121], ::zerobuf::getJSONField( field, 121 ));
        ::zerobuf::toJSON( array[122], ::zerobuf::getJSONField( field, 122 ));
        ::zerobuf::toJSON( array[123], ::zerobuf::getJSONField( field, 123 ));
        ::zerobuf::toJSON( array[124], ::zerobuf::getJSONField( field, 124 ));
    }
}

namespace zerobuf
{

}

