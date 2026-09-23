#pragma once

class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB65]; // offset 0x0
    NavScopeFlags_t m_nScopes; // offset 0xB65, size 0x1, align 1
    char _pad_0B66[0x2]; // offset 0xB66
};
