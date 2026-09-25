#pragma once

class C_C4 : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F60, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F20]; // offset 0x0
    ParticleIndex_t m_activeLightParticleIndex; // offset 0x1F20, size 0x4, align 255
    C4LightEffect_t m_eActiveLightEffect; // offset 0x1F24, size 0x4, align 4
    bool m_bStartedArming; // offset 0x1F28, size 0x1, align 1
    char _pad_1F29[0x3]; // offset 0x1F29
    GameTime_t m_fArmedTime; // offset 0x1F2C, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x1F30, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x1F31, size 0x1, align 1
    char _pad_1F32[0x6]; // offset 0x1F32
    EntitySpottedState_t m_entitySpottedState; // offset 0x1F38, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1F50, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x1F54, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x1F5B, size 0x1, align 1
    char _pad_1F5C[0x4]; // offset 0x1F5C
};
