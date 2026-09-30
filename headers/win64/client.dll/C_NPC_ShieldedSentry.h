#pragma once

class C_NPC_ShieldedSentry : public C_NPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xFB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDB8]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xDB8, size 0x1E0, align 255
    char _pad_0F98[0x4]; // offset 0xF98
    float32 m_flAttackRange; // offset 0xF9C, size 0x4, align 4 | MNotSaved
    float32 m_flAimPitch; // offset 0xFA0, size 0x4, align 4 | MNotSaved
    bool m_bHasRecentlyAttacked; // offset 0xFA4, size 0x1, align 1 | MNotSaved
    char _pad_0FA5[0x3]; // offset 0xFA5
    float32 m_flLifeTime; // offset 0xFA8, size 0x4, align 4
    GameTime_t m_flSpawnTime; // offset 0xFAC, size 0x4, align 255
};
