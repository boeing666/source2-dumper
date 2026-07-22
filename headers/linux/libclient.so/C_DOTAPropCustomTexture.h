#pragma once

class C_DOTAPropCustomTexture : public C_DynamicProp /*0x0*/  // sizeof 0xE90, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE7C]; // offset 0x0
    uint32 m_unTeamID; // offset 0xE7C, size 0x4, align 4
    char _pad_0E80[0x8]; // offset 0xE80
    bool m_bSetupMaterialProxy; // offset 0xE88, size 0x1, align 1
    char _pad_0E89[0x7]; // offset 0xE89
};
