#pragma once

class C_C4 : public C_CSWeaponBase /*0x0*/  // sizeof 0x2BB0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2B68]; // offset 0x0
    ParticleIndex_t m_activeLightParticleIndex; // offset 0x2B68, size 0x4, align 255
    C4LightEffect_t m_eActiveLightEffect; // offset 0x2B6C, size 0x4, align 4
    bool m_bStartedArming; // offset 0x2B70, size 0x1, align 1
    char _pad_2B71[0x3]; // offset 0x2B71
    GameTime_t m_fArmedTime; // offset 0x2B74, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x2B78, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x2B79, size 0x1, align 1
    char _pad_2B7A[0x6]; // offset 0x2B7A
    EntitySpottedState_t m_entitySpottedState; // offset 0x2B80, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x2B98, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x2B9C, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x2BA3, size 0x1, align 1
    char _pad_2BA4[0xC]; // offset 0x2BA4
};
