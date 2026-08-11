#pragma once

class CCitadel_Ability_VampireBat_StealLife : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF74]; // offset 0x0
    float32 m_flFloatElapsedTime; // offset 0xF74, size 0x4, align 4
    char _pad_0F78[0x420]; // offset 0xF78
    bool m_bFloating; // offset 0x1398, size 0x1, align 1 | MNetworkEnable
    char _pad_1399[0x287]; // offset 0x1399
};
