#pragma once

class CCitadel_Modifier_CopyUlt : public CCitadelModifier /*0x0*/  // sizeof 0x220, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    int32 m_nCopiedHeroID; // offset 0x130, size 0x4, align 4
    char _pad_0134[0x4]; // offset 0x134
    ModelChange_t m_ModelChange; // offset 0x138, size 0xE8, align 8
};
