#pragma once

class CCitadel_Modifier_Familiar_Clone : public CCitadelModifier /*0x0*/  // sizeof 0x2F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x208]; // offset 0x0
    int32 m_nCopiedHeroID; // offset 0x208, size 0x4, align 4
    char _pad_020C[0x4]; // offset 0x20C
    ModelChange_t m_ModelChange; // offset 0x210, size 0xE8, align 8
};
