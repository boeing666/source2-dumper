#pragma once

class CCitadel_Ability_Baba_HexingBrew : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1EA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E70]; // offset 0x0
    CCitadel_Ability_Baba_HexingBrew::EBrewEffect m_eBrewEffect; // offset 0x1E70, size 0x4, align 4
    bool m_bBrewLocked; // offset 0x1E74, size 0x1, align 1
    char _pad_1E75[0x3]; // offset 0x1E75
    GameTime_t m_flBrewLockTime; // offset 0x1E78, size 0x4, align 255
    float32 m_flBrewPausedTime; // offset 0x1E7C, size 0x4, align 4
    char _pad_1E80[0x20]; // offset 0x1E80
};
