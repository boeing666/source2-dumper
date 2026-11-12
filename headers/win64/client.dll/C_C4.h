#pragma once

class C_C4 : public C_CSWeaponBase /*0x0*/  // sizeof 0x1FA0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F60]; // offset 0x0
    ParticleIndex_t m_activeLightParticleIndex; // offset 0x1F60, size 0x4, align 255
    C4LightEffect_t m_eActiveLightEffect; // offset 0x1F64, size 0x4, align 4
    bool m_bStartedArming; // offset 0x1F68, size 0x1, align 1
    char _pad_1F69[0x3]; // offset 0x1F69
    GameTime_t m_fArmedTime; // offset 0x1F6C, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x1F70, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x1F71, size 0x1, align 1
    char _pad_1F72[0x6]; // offset 0x1F72
    EntitySpottedState_t m_entitySpottedState; // offset 0x1F78, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1F90, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x1F94, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x1F9B, size 0x1, align 1
    char _pad_1F9C[0x4]; // offset 0x1F9C
};
