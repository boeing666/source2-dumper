#pragma once

class CCitadel_Modifier_StanceActive : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapOriginalAbilities; // offset 0x130, size 0x28, align 8
};
