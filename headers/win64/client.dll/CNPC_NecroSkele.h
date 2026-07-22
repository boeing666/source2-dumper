#pragma once

class CNPC_NecroSkele : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1C18, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BF8]; // offset 0x0
    GameTime_t m_tSpawnTime; // offset 0x1BF8, size 0x4, align 255 | MNetworkEnable
    VectorWS m_vecCastLocation; // offset 0x1BFC, size 0xC, align 4 | MNetworkEnable
    bool m_bDontMove; // offset 0x1C08, size 0x1, align 1 | MNetworkEnable
    char _pad_1C09[0x3]; // offset 0x1C09
    float32 m_flAttackRange; // offset 0x1C0C, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flSpawnDuration; // offset 0x1C10, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_1C14[0x4]; // offset 0x1C14
};
