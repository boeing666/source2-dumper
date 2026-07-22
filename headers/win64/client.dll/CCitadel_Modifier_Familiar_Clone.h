#pragma once

class CCitadel_Modifier_Familiar_Clone : public CCitadelModifier /*0x0*/  // sizeof 0x1B8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xCC]; // offset 0x0
    int32 m_nCopiedHeroID; // offset 0xCC, size 0x4, align 4
    ModelChange_t m_ModelChange; // offset 0xD0, size 0xE8, align 8
};
