#pragma once

class CKeepUpright : public CPointEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    Vector m_worldGoalAxis; // offset 0x4A8, size 0xC, align 4
    Vector m_localTestAxis; // offset 0x4B4, size 0xC, align 4
    IPhysicsMotionController* m_pController; // offset 0x4C0, size 0x8, align 8 | MPhysPtr
    CUtlSymbolLarge m_nameAttach; // offset 0x4C8, size 0x8, align 8
    CHandle< CBaseEntity > m_attachedObject; // offset 0x4D0, size 0x4, align 4
    float32 m_angularLimit; // offset 0x4D4, size 0x4, align 4
    bool m_bActive; // offset 0x4D8, size 0x1, align 1
    bool m_bDampAllRotation; // offset 0x4D9, size 0x1, align 1
    char _pad_04DA[0x6]; // offset 0x4DA
};
