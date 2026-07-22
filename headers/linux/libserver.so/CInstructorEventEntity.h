#pragma once

class CInstructorEventEntity : public CPointEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_iszName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_iszHintTargetEntity; // offset 0x780, size 0x8, align 8
    CHandle< CBasePlayerPawn > m_hTargetPlayer; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
};
