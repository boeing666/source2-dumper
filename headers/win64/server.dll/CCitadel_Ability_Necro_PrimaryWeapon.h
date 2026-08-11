#pragma once

class CCitadel_Ability_Necro_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x18C8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x18B0]; // offset 0x0
    GameTime_t m_tTetherAttachTime; // offset 0x18B0, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tTetherBreakTime; // offset 0x18B4, size 0x4, align 255 | MNetworkEnable
    bool m_bHasTetherTarget; // offset 0x18B8, size 0x1, align 1 | MNetworkEnable
    char _pad_18B9[0xF]; // offset 0x18B9
};
