#pragma once

class CNPC_NecroSkele : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1800, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x17D8]; // offset 0x0
    GameTime_t m_tSpawnTime; // offset 0x17D8, size 0x4, align 255 | MNetworkEnable
    VectorWS m_vecCastLocation; // offset 0x17DC, size 0xC, align 4 | MNetworkEnable
    bool m_bDontMove; // offset 0x17E8, size 0x1, align 1 | MNetworkEnable
    char _pad_17E9[0x3]; // offset 0x17E9
    float32 m_flAttackRange; // offset 0x17EC, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flSpawnDuration; // offset 0x17F0, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_17F4[0xC]; // offset 0x17F4
};
