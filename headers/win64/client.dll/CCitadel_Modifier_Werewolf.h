#pragma once

class CCitadel_Modifier_Werewolf : public CCitadelModifier /*0x0*/  // sizeof 0x630, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapHunterAbilities; // offset 0x608, size 0x28, align 8
};
