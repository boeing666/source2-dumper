#pragma once

class CPhysConstraint : public CLogicalEntity /*0x0*/  // sizeof 0x4F8, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    IPhysicsJoint* m_hJoint; // offset 0x498, size 0x8, align 8 | MPhysPtr
    CUtlSymbolLarge m_nameAttach1; // offset 0x4A0, size 0x8, align 8
    CUtlSymbolLarge m_nameAttach2; // offset 0x4A8, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttach1; // offset 0x4B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hAttach2; // offset 0x4B4, size 0x4, align 4
    CUtlSymbolLarge m_nameAttachment1; // offset 0x4B8, size 0x8, align 8
    CUtlSymbolLarge m_nameAttachment2; // offset 0x4C0, size 0x8, align 8
    CGameSoundEventName m_breakSound; // offset 0x4C8, size 0x8, align 8
    float32 m_forceLimit; // offset 0x4D0, size 0x4, align 4
    float32 m_torqueLimit; // offset 0x4D4, size 0x4, align 4
    float32 m_minTeleportDistance; // offset 0x4D8, size 0x4, align 4
    bool m_bSnapObjectPositions; // offset 0x4DC, size 0x1, align 1
    bool m_bTreatEntity1AsInfiniteMass; // offset 0x4DD, size 0x1, align 1
    char _pad_04DE[0x2]; // offset 0x4DE
    CEntityIOOutput m_OnBreak; // offset 0x4E0, size 0x18, align 255
};
