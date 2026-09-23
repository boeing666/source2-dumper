#pragma once

class C_AttributeContainer : public CAttributeManager /*0x0*/  // sizeof 0x1518, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    C_EconItemView m_Item; // offset 0x50, size 0x14B8, align 255
    int32 m_iExternalItemProviderRegisteredToken; // offset 0x1508, size 0x4, align 4
    char _pad_150C[0x4]; // offset 0x150C
    uint64 m_ullRegisteredAsItemID; // offset 0x1510, size 0x8, align 8
};
