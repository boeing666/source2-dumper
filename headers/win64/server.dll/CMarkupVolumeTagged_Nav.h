#pragma once

class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged /*0x0*/  // sizeof 0x900, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    NavScopeFlags_t m_nScopes; // offset 0x8F8, size 0x1, align 1
    char _pad_08F9[0x7]; // offset 0x8F9
};
