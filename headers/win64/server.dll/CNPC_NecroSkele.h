#pragma once

class CNPC_NecroSkele : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1760, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1724]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hCastingAbility; // offset 0x1724, size 0x4, align 4
    char _pad_1728[0x10]; // offset 0x1728
    GameTime_t m_tSpawnTime; // offset 0x1738, size 0x4, align 255
    VectorWS m_vecCastLocation; // offset 0x173C, size 0xC, align 4
    bool m_bDontMove; // offset 0x1748, size 0x1, align 1
    char _pad_1749[0x3]; // offset 0x1749
    float32 m_flAttackRange; // offset 0x174C, size 0x4, align 4 | MNotSaved
    float32 m_flSpawnDuration; // offset 0x1750, size 0x4, align 4 | MNotSaved
    char _pad_1754[0xC]; // offset 0x1754
};
