#pragma once

class C_DOTAPropCustomTexture : public C_DynamicProp /*0x0*/  // sizeof 0xF00, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xEE0]; // offset 0x0
    uint32 m_unTeamID; // offset 0xEE0, size 0x4, align 4
    char _pad_0EE4[0xC]; // offset 0xEE4
    bool m_bSetupMaterialProxy; // offset 0xEF0, size 0x1, align 1
    char _pad_0EF1[0xF]; // offset 0xEF1
};
