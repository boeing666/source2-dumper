#pragma once

class CCitadel_Modifier_Familiar_Clone : public CCitadelModifier /*0x0*/  // sizeof 0x238, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x14C]; // offset 0x0
    int32 m_nCopiedHeroID; // offset 0x14C, size 0x4, align 4
    ModelChange_t m_ModelChange; // offset 0x150, size 0xE8, align 8
};
