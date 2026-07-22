#pragma once

class CCitadel_Modifier_CopyUlt : public CCitadelModifier /*0x0*/  // sizeof 0x1B0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    int32 m_nCopiedHeroID; // offset 0xC0, size 0x4, align 4
    char _pad_00C4[0x4]; // offset 0xC4
    ModelChange_t m_ModelChange; // offset 0xC8, size 0xE8, align 8
};
