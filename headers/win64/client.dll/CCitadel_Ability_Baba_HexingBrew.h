#pragma once

class CCitadel_Ability_Baba_HexingBrew : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1EC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E78]; // offset 0x0
    CCitadel_Ability_Baba_HexingBrew::EBrewEffect m_eBrewEffect; // offset 0x1E78, size 0x4, align 4
    bool m_bBrewLocked; // offset 0x1E7C, size 0x1, align 1
    char _pad_1E7D[0x3]; // offset 0x1E7D
    GameTime_t m_flBrewLockTime; // offset 0x1E80, size 0x4, align 255
    float32 m_flBrewPausedTime; // offset 0x1E84, size 0x4, align 4
    char _pad_1E88[0x38]; // offset 0x1E88
};
