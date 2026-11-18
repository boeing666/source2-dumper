#pragma once

class C_DOTA_Ability_Chen_Zealot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecZealots; // offset 0x828, size 0x18, align 8
    CUtlString m_strZealotUnitName; // offset 0x840, size 0x8, align 8
    bool m_bSpawnedInitialZealot; // offset 0x848, size 0x1, align 1
    char _pad_0849[0x7]; // offset 0x849
};
