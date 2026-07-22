#pragma once

class CSurvivorsPlayerSnapshot  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsHeroID_t m_heroID; // offset 0x0, size 0x4, align 255
    int32 m_nCurrentLevel; // offset 0x4, size 0x4, align 4
    float32 m_flCurrentExp; // offset 0x8, size 0x4, align 4
    int32 m_nRerollsRemaining; // offset 0xC, size 0x4, align 4
    CUtlVector< CSurvivorsPowerUpSnapshot > m_vecPowerUps; // offset 0x10, size 0x18, align 8
    VectorWS m_vOrigin; // offset 0x28, size 0xC, align 4
    char _pad_0034[0x4]; // offset 0x34
};
