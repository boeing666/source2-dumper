#pragma once

class CAttributeList  // sizeof 0x78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< C_EconItemAttribute > m_Attributes; // offset 0x8, size 0x68, align 8
    CAttributeManager* m_pManager; // offset 0x70, size 0x8, align 8
};
