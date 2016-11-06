#define DECLOPCODE(name,number,oncall) case number: { oncall break; }
//                            expected semicolon to be here ^ at declaration

#define DECLOPCODE0(name,number,oncall) case number: { oncall break; }
#define DECLOPCODE1(name,number,oncall) case number: { oncall break; }
#define DECLOPCODE2(name,number,oncall) case number: { oncall break; }
#define DECLOPCODE3(name,number,oncall) case number: { oncall break; }
// for 0- 1- 2- 3- operand commands


DECLOPCODE0 ("halt", 0, {  })
