#pragma once

class CNPC_ShieldedSentry : public CNPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xCF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xC60, size 0x20, align 255
    float32 m_flAttackRange; // offset 0xC80, size 0x4, align 4 | MNotSaved
    float32 m_flAimPitch; // offset 0xC84, size 0x4, align 4 | MNotSaved
    bool m_bHasRecentlyAttacked; // offset 0xC88, size 0x1, align 1 | MNotSaved
    char _pad_0C89[0x3]; // offset 0xC89
    float32 m_flLifeTime; // offset 0xC8C, size 0x4, align 4
    GameTime_t m_flSpawnTime; // offset 0xC90, size 0x4, align 255
    float32 m_flAttackCone; // offset 0xC94, size 0x4, align 4
    float32 m_flTrackingSpeed; // offset 0xC98, size 0x4, align 4
    float32 m_flDeployTime; // offset 0xC9C, size 0x4, align 4
    float32 m_flAttackDelay; // offset 0xCA0, size 0x4, align 4
    char _pad_0CA4[0x4C]; // offset 0xCA4
};
