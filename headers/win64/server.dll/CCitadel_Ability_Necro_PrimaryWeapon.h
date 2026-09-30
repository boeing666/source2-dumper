#pragma once

class CCitadel_Ability_Necro_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x20D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x20C0]; // offset 0x0
    GameTime_t m_tTetherAttachTime; // offset 0x20C0, size 0x4, align 255
    GameTime_t m_tTetherBreakTime; // offset 0x20C4, size 0x4, align 255
    bool m_bHasTetherTarget; // offset 0x20C8, size 0x1, align 1
    char _pad_20C9[0xF]; // offset 0x20C9
};
