#pragma once

class CCitadel_Ability_Nano_CatForm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1430, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF9C]; // offset 0x0
    bool m_bIsInCatform; // offset 0xF9C, size 0x1, align 1 | MNetworkEnable
    char _pad_0F9D[0x3]; // offset 0xF9D
    GameTime_t m_flLastDamageTime; // offset 0xFA0, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flTransformStartTime; // offset 0xFA4, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flTransformEndTime; // offset 0xFA8, size 0x4, align 255 | MNetworkEnable
    float32 m_flStoredDamageAmp; // offset 0xFAC, size 0x4, align 4 | MNetworkEnable
    char _pad_0FB0[0x480]; // offset 0xFB0
};
