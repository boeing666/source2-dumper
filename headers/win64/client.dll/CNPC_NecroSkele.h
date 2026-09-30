#pragma once

class CNPC_NecroSkele : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1B50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B1C]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hCastingAbility; // offset 0x1B1C, size 0x4, align 4
    char _pad_1B20[0x10]; // offset 0x1B20
    GameTime_t m_tSpawnTime; // offset 0x1B30, size 0x4, align 255
    VectorWS m_vecCastLocation; // offset 0x1B34, size 0xC, align 4
    bool m_bDontMove; // offset 0x1B40, size 0x1, align 1
    char _pad_1B41[0x3]; // offset 0x1B41
    float32 m_flAttackRange; // offset 0x1B44, size 0x4, align 4 | MNotSaved
    float32 m_flSpawnDuration; // offset 0x1B48, size 0x4, align 4 | MNotSaved
    char _pad_1B4C[0x4]; // offset 0x1B4C
};
