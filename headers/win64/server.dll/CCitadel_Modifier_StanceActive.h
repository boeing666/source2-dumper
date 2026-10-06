#pragma once

class CCitadel_Modifier_StanceActive : public CCitadelModifier /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapOriginalAbilities; // offset 0x148, size 0x28, align 8
};
