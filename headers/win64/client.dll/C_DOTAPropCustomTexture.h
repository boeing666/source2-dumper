#pragma once

class C_DOTAPropCustomTexture : public C_DynamicProp /*0x0*/  // sizeof 0xD30, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    uint32 m_unTeamID; // offset 0xD10, size 0x4, align 4
    char _pad_0D14[0xC]; // offset 0xD14
    bool m_bSetupMaterialProxy; // offset 0xD20, size 0x1, align 1
    char _pad_0D21[0xF]; // offset 0xD21
};
