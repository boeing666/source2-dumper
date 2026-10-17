#pragma once

class C_DOTAPropCustomTexture : public C_DynamicProp /*0x0*/  // sizeof 0x1010, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xFF4]; // offset 0x0
    uint32 m_unTeamID; // offset 0xFF4, size 0x4, align 4
    char _pad_0FF8[0x8]; // offset 0xFF8
    bool m_bSetupMaterialProxy; // offset 0x1000, size 0x1, align 1
    char _pad_1001[0xF]; // offset 0x1001
};
