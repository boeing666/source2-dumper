#pragma once

class CCitadel_Modifier_CopyUlt : public CCitadelModifier /*0x0*/  // sizeof 0x1C0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_nCopiedHeroID; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x4]; // offset 0xD4
    ModelChange_t m_ModelChange; // offset 0xD8, size 0xE8, align 8
};
