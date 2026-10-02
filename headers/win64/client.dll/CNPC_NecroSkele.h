#pragma once

class CNPC_NecroSkele : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B74]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hCastingAbility; // offset 0x1B74, size 0x4, align 4
    char _pad_1B78[0x10]; // offset 0x1B78
    GameTime_t m_tSpawnTime; // offset 0x1B88, size 0x4, align 255
    VectorWS m_vecCastLocation; // offset 0x1B8C, size 0xC, align 4
    bool m_bDontMove; // offset 0x1B98, size 0x1, align 1
    char _pad_1B99[0x3]; // offset 0x1B99
    float32 m_flAttackRange; // offset 0x1B9C, size 0x4, align 4 | MNotSaved
    float32 m_flSpawnDuration; // offset 0x1BA0, size 0x4, align 4 | MNotSaved
    char _pad_1BA4[0x4]; // offset 0x1BA4
};
