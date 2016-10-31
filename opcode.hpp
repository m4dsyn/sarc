#define DECLOPCODE(number,oncall) case number: { oncall break; }
//                       expected semicolon to be here ^ at declaration
#define GET_MO_CODE(number) { ((char)0) } // some interface to get next n bytes

DECLOPCODE (0, {  })
