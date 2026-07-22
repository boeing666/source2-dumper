#pragma once

class C_DOTA_Ability_Bane_FiendsGrip : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hGripTarget; // offset 0x824, size 0x4, align 4
    int32 fiend_grip_damage; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
};
