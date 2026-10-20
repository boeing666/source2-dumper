#pragma once

class CCitadel_Modifier_CopyUlt : public CCitadelModifier /*0x0*/  // sizeof 0x240, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    int32 m_nCopiedHeroID; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x4]; // offset 0x154
    ModelChange_t m_ModelChange; // offset 0x158, size 0xE8, align 8
};
