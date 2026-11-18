#pragma once

class CDOTA_Ability_Chen_Zealot : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecZealots; // offset 0x580, size 0x18, align 8
    CUtlString m_strZealotUnitName; // offset 0x598, size 0x8, align 8
    bool m_bSpawnedInitialZealot; // offset 0x5A0, size 0x1, align 1
    char _pad_05A1[0x7]; // offset 0x5A1
};
