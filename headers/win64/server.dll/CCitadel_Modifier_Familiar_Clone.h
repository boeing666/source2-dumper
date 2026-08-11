#pragma once

class CCitadel_Modifier_Familiar_Clone : public CCitadelModifier /*0x0*/  // sizeof 0x288, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x198]; // offset 0x0
    int32 m_nCopiedHeroID; // offset 0x198, size 0x4, align 4
    char _pad_019C[0x4]; // offset 0x19C
    ModelChange_t m_ModelChange; // offset 0x1A0, size 0xE8, align 8
};
