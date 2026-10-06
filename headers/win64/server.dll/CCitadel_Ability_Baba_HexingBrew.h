#pragma once

class CCitadel_Ability_Baba_HexingBrew : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1C70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C3C]; // offset 0x0
    CCitadel_Ability_Baba_HexingBrew::EBrewEffect m_eBrewEffect; // offset 0x1C3C, size 0x4, align 4
    bool m_bBrewLocked; // offset 0x1C40, size 0x1, align 1
    char _pad_1C41[0x3]; // offset 0x1C41
    GameTime_t m_flBrewLockTime; // offset 0x1C44, size 0x4, align 255
    float32 m_flBrewPausedTime; // offset 0x1C48, size 0x4, align 4
    char _pad_1C4C[0x24]; // offset 0x1C4C
};
