#pragma once

class C_C4 : public C_CSWeaponBase /*0x0*/  // sizeof 0x1D20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1CE0]; // offset 0x0
    ParticleIndex_t m_activeLightParticleIndex; // offset 0x1CE0, size 0x4, align 255
    C4LightEffect_t m_eActiveLightEffect; // offset 0x1CE4, size 0x4, align 4
    bool m_bStartedArming; // offset 0x1CE8, size 0x1, align 1
    char _pad_1CE9[0x3]; // offset 0x1CE9
    GameTime_t m_fArmedTime; // offset 0x1CEC, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x1CF0, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x1CF1, size 0x1, align 1
    char _pad_1CF2[0x6]; // offset 0x1CF2
    EntitySpottedState_t m_entitySpottedState; // offset 0x1CF8, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1D10, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x1D14, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x1D1B, size 0x1, align 1
    char _pad_1D1C[0x4]; // offset 0x1D1C
};
