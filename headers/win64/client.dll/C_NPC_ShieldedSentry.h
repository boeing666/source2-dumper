#pragma once

class C_NPC_ShieldedSentry : public C_NPC_SimpleAnimatingAI /*0x0*/  // sizeof 0x1008, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE10]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xE10, size 0x1E0, align 255
    char _pad_0FF0[0x4]; // offset 0xFF0
    float32 m_flAttackRange; // offset 0xFF4, size 0x4, align 4 | MNotSaved
    float32 m_flAimPitch; // offset 0xFF8, size 0x4, align 4 | MNotSaved
    bool m_bHasRecentlyAttacked; // offset 0xFFC, size 0x1, align 1 | MNotSaved
    char _pad_0FFD[0x3]; // offset 0xFFD
    float32 m_flLifeTime; // offset 0x1000, size 0x4, align 4
    GameTime_t m_flSpawnTime; // offset 0x1004, size 0x4, align 255
};
