#pragma once

class CDOTABehaviorCompanion  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    CHandle< CBaseEntity > m_goalEntity; // offset 0x150, size 0x4, align 4
    Vector m_vOffset; // offset 0x154, size 0xC, align 4
    int32 m_iRightOffset; // offset 0x160, size 0x4, align 4
    int32 m_iForwardOffset; // offset 0x164, size 0x4, align 4
    CountdownTimer m_PositionFuzziness; // offset 0x168, size 0x18, align 8
};
