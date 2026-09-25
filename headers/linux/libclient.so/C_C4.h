#pragma once

class C_C4 : public C_CSWeaponBase /*0x0*/  // sizeof 0x2DF0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2DA8]; // offset 0x0
    ParticleIndex_t m_activeLightParticleIndex; // offset 0x2DA8, size 0x4, align 255
    C4LightEffect_t m_eActiveLightEffect; // offset 0x2DAC, size 0x4, align 4
    bool m_bStartedArming; // offset 0x2DB0, size 0x1, align 1
    char _pad_2DB1[0x3]; // offset 0x2DB1
    GameTime_t m_fArmedTime; // offset 0x2DB4, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x2DB8, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x2DB9, size 0x1, align 1
    char _pad_2DBA[0x6]; // offset 0x2DBA
    EntitySpottedState_t m_entitySpottedState; // offset 0x2DC0, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x2DD8, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x2DDC, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x2DE3, size 0x1, align 1
    char _pad_2DE4[0xC]; // offset 0x2DE4
};
