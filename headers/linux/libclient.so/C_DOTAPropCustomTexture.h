#pragma once

class C_DOTAPropCustomTexture : public C_DynamicProp /*0x0*/  // sizeof 0x1080, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1064]; // offset 0x0
    uint32 m_unTeamID; // offset 0x1064, size 0x4, align 4
    char _pad_1068[0x8]; // offset 0x1068
    bool m_bSetupMaterialProxy; // offset 0x1070, size 0x1, align 1
    char _pad_1071[0xF]; // offset 0x1071
};
