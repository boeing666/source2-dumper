#pragma once

class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD5]; // offset 0x0
    NavScopeFlags_t m_nScopes; // offset 0xBD5, size 0x1, align 1
    char _pad_0BD6[0x2]; // offset 0xBD6
};
