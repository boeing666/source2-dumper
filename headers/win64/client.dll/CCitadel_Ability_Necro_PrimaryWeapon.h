#pragma once

class CCitadel_Ability_Necro_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x2340, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2328]; // offset 0x0
    GameTime_t m_tTetherAttachTime; // offset 0x2328, size 0x4, align 255
    GameTime_t m_tTetherBreakTime; // offset 0x232C, size 0x4, align 255
    bool m_bHasTetherTarget; // offset 0x2330, size 0x1, align 1
    char _pad_2331[0xF]; // offset 0x2331
};
