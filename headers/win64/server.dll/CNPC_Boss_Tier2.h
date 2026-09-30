#pragma once

class CNPC_Boss_Tier2 : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1870, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1738]; // offset 0x0
    int32 m_iLane; // offset 0x1738, size 0x4, align 4
    char _pad_173C[0x8]; // offset 0x173C
    CHandle< CBaseEntity > m_hTargetedEnemy; // offset 0x1744, size 0x4, align 4 | MNotSaved
    GameTime_t m_flFadeOutStart; // offset 0x1748, size 0x4, align 255 | MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x174C, size 0x4, align 255 | MNotSaved
    GameTime_t m_flLastWeakpointHitTime; // offset 0x1750, size 0x4, align 255 | MNotSaved
    char _pad_1754[0x48]; // offset 0x1754
    VectorWS m_vecElectricBeamLookTarget; // offset 0x179C, size 0xC, align 4
    int32 m_nElectricBeamCasts; // offset 0x17A8, size 0x4, align 4
    char _pad_17AC[0xC]; // offset 0x17AC
    CEntityIOOutput m_eventOnBossKilled; // offset 0x17B8, size 0x18, align 255
    char _pad_17D0[0xA0]; // offset 0x17D0
};
