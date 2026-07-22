#pragma once

class CCitadelBotTestNode : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    EBotTestNodeType m_eNodeType; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlSymbolLarge m_sNextNode; // offset 0x4A8, size 0x8, align 8
    CUtlSymbolLarge m_sShootTarget; // offset 0x4B0, size 0x8, align 8
    CHandle< CCitadelBotTestNode > m_hNextNode; // offset 0x4B8, size 0x4, align 4 | MNotSaved
    CHandle< CCitadelBotTestNode > m_hShootTarget; // offset 0x4BC, size 0x4, align 4 | MNotSaved
    CHandle< CCitadelPlayerPawn > m_hLockingEntity; // offset 0x4C0, size 0x4, align 4 | MNotSaved
    char _pad_04C4[0x14]; // offset 0x4C4
};
