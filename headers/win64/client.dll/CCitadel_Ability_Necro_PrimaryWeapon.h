#pragma once

class CCitadel_Ability_Necro_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x1B60, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1B48]; // offset 0x0
    GameTime_t m_tTetherAttachTime; // offset 0x1B48, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tTetherBreakTime; // offset 0x1B4C, size 0x4, align 255 | MNetworkEnable
    bool m_bHasTetherTarget; // offset 0x1B50, size 0x1, align 1 | MNetworkEnable
    char _pad_1B51[0xF]; // offset 0x1B51
};
