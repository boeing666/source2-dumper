#pragma once

class C_DOTAPropCustomTexture : public C_DynamicProp /*0x0*/  // sizeof 0xEA0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE80]; // offset 0x0
    uint32 m_unTeamID; // offset 0xE80, size 0x4, align 4
    char _pad_0E84[0xC]; // offset 0xE84
    bool m_bSetupMaterialProxy; // offset 0xE90, size 0x1, align 1
    char _pad_0E91[0xF]; // offset 0xE91
};
