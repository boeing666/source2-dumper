#pragma once

struct modifiedconvars_t  // sizeof 0x180, align 0xFF [trivial_ctor trivial_dtor] (server)
{
    char[128] pszConvar; // offset 0x0, size 0x80, align 1
    char[128] pszCurrentValue; // offset 0x80, size 0x80, align 1
    char[128] pszOrgValue; // offset 0x100, size 0x80, align 1
};
