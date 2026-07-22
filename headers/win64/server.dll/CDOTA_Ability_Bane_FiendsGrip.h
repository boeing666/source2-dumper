#pragma once

class CDOTA_Ability_Bane_FiendsGrip : public CDOTABaseAbility /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hGripTarget; // offset 0x580, size 0x4, align 4
    int32 fiend_grip_damage; // offset 0x584, size 0x4, align 4
};
