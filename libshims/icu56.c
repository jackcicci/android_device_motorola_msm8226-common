#include "unicode/utext.h"
#include "unicode/utypes.h"

U_STABLE UText * U_EXPORT2
utext_openUChars_56(UText *ut, const UChar *s, int64_t length, UErrorCode *status)
{
    return utext_openUChars(ut, s, length, status);
}

U_STABLE UText * U_EXPORT2
utext_close_56(UText *ut)
{
    return utext_close(ut);
}

U_STABLE int32_t U_EXPORT2
u_digit_56(UChar32 ch, int8_t radix)
{
     return u_digit(ch, radix);
}

U_STABLE const char * U_EXPORT2
u_errorName_56(UErrorCode code)
{
    return u_errorName(code);
}
