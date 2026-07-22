#pragma once

class CDOTABehaviorChase  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    CHandle< CBaseEntity > m_hChaseEntity; // offset 0x150, size 0x4, align 4
    bool m_bTargetMoves; // offset 0x154, size 0x1, align 1
    char _pad_0155[0x3]; // offset 0x155
    float32[2] m_flFollowDistance; // offset 0x158, size 0x8, align 4
    float32 m_flForwardDistance; // offset 0x160, size 0x4, align 4
    float32 m_flRightDistance; // offset 0x164, size 0x4, align 4
    CountdownTimer m_PositionFuzziness; // offset 0x168, size 0x18, align 8
};
