#pragma once

class CCitadel_Modifier_Werewolf : public CCitadelModifier /*0x0*/  // sizeof 0x628, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapHunterAbilities; // offset 0x600, size 0x28, align 8
};
