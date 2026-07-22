#pragma once

class CKeepUpright : public CPointEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    Vector m_worldGoalAxis; // offset 0x780, size 0xC, align 4
    Vector m_localTestAxis; // offset 0x78C, size 0xC, align 4
    IPhysicsMotionController* m_pController; // offset 0x798, size 0x8, align 8 | MPhysPtr
    CUtlSymbolLarge m_nameAttach; // offset 0x7A0, size 0x8, align 8
    CHandle< CBaseEntity > m_attachedObject; // offset 0x7A8, size 0x4, align 4
    float32 m_angularLimit; // offset 0x7AC, size 0x4, align 4
    bool m_bActive; // offset 0x7B0, size 0x1, align 1
    bool m_bDampAllRotation; // offset 0x7B1, size 0x1, align 1
    char _pad_07B2[0x6]; // offset 0x7B2
};
