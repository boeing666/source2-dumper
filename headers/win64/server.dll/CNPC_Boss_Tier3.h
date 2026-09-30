#pragma once

class CNPC_Boss_Tier3 : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1870, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1714]; // offset 0x0
    int32 m_iLane; // offset 0x1714, size 0x4, align 4 | MNotSaved
    char _pad_1718[0x28]; // offset 0x1718
    VectorWS m_vecElectricBeamTargetEnd; // offset 0x1740, size 0xC, align 4
    char _pad_174C[0xC]; // offset 0x174C
    CEntityIOOutput m_eventOnBossKilled; // offset 0x1758, size 0x18, align 255
    CEntityIOOutput m_eventOnPhase1End; // offset 0x1770, size 0x18, align 255
    CUtlSymbolLarge m_backdoorProtectionTrigger; // offset 0x1788, size 0x8, align 8
    char _pad_1790[0x4]; // offset 0x1790
    ETier3State_t m_eAliveState; // offset 0x1794, size 0x4, align 4 | MNotSaved
    ETier3Phase_t m_ePhase; // offset 0x1798, size 0x4, align 4 | MNotSaved
    char _pad_179C[0x94]; // offset 0x179C
    VectorWS m_vShrineAttackTargetPos; // offset 0x1830, size 0xC, align 4
    char _pad_183C[0x34]; // offset 0x183C
};
