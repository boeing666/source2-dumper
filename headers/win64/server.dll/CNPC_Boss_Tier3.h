#pragma once

class CNPC_Boss_Tier3 : public CAI_CitadelNPC /*0x0*/  // sizeof 0x18B0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x17B4]; // offset 0x0
    int32 m_iLane; // offset 0x17B4, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_17B8[0x34]; // offset 0x17B8
    Vector m_vecElectricBeamTargetEnd; // offset 0x17EC, size 0xC, align 4 | MNetworkEnable
    char _pad_17F8[0x10]; // offset 0x17F8
    CEntityIOOutput m_eventOnBossKilled; // offset 0x1808, size 0x18, align 255
    CEntityIOOutput m_eventOnPhase1End; // offset 0x1820, size 0x18, align 255
    CUtlSymbolLarge m_backdoorProtectionTrigger; // offset 0x1838, size 0x8, align 8
    char _pad_1840[0x4]; // offset 0x1840
    ETier3State_t m_eAliveState; // offset 0x1844, size 0x4, align 4 | MNetworkEnable MNotSaved
    ETier3Phase_t m_ePhase; // offset 0x1848, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_184C[0x2C]; // offset 0x184C
    Vector m_vShrineAttackTargetPos; // offset 0x1878, size 0xC, align 4 | MNetworkEnable
    char _pad_1884[0x2C]; // offset 0x1884
};
