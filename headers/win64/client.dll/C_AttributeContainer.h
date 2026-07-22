#pragma once

class C_AttributeContainer : public CAttributeManager /*0x0*/  // sizeof 0x4D0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    C_EconItemView m_Item; // offset 0x50, size 0x470, align 255
    int32 m_iExternalItemProviderRegisteredToken; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
    uint64 m_ullRegisteredAsItemID; // offset 0x4C8, size 0x8, align 8
};
