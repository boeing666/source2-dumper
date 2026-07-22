#pragma once

class CDOTABehaviorCommandMoveToPositionToCast  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    VectorWS m_vPosition; // offset 0x150, size 0xC, align 4
    CHandle< CBaseEntity > m_hAbility; // offset 0x15C, size 0x4, align 4
    bool m_bTurningToTarget; // offset 0x160, size 0x1, align 1
    char _pad_0161[0x3]; // offset 0x161
    float32 m_flTargetAngle; // offset 0x164, size 0x4, align 4
};
