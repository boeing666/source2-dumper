#pragma once

class C_C4 : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F50, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F10]; // offset 0x0
    ParticleIndex_t m_activeLightParticleIndex; // offset 0x1F10, size 0x4, align 255
    C4LightEffect_t m_eActiveLightEffect; // offset 0x1F14, size 0x4, align 4
    bool m_bStartedArming; // offset 0x1F18, size 0x1, align 1
    char _pad_1F19[0x3]; // offset 0x1F19
    GameTime_t m_fArmedTime; // offset 0x1F1C, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x1F20, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x1F21, size 0x1, align 1
    char _pad_1F22[0x6]; // offset 0x1F22
    EntitySpottedState_t m_entitySpottedState; // offset 0x1F28, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1F40, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x1F44, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x1F4B, size 0x1, align 1
    char _pad_1F4C[0x4]; // offset 0x1F4C
};
