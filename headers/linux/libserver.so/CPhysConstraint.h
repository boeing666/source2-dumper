#pragma once

class CPhysConstraint : public CLogicalEntity /*0x0*/  // sizeof 0x7E8, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    IPhysicsJoint* m_hJoint; // offset 0x788, size 0x8, align 8 | MPhysPtr
    CUtlSymbolLarge m_nameAttach1; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_nameAttach2; // offset 0x798, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttach1; // offset 0x7A0, size 0x4, align 4
    CHandle< CBaseEntity > m_hAttach2; // offset 0x7A4, size 0x4, align 4
    CUtlSymbolLarge m_nameAttachment1; // offset 0x7A8, size 0x8, align 8
    CUtlSymbolLarge m_nameAttachment2; // offset 0x7B0, size 0x8, align 8
    CGameSoundEventName m_breakSound; // offset 0x7B8, size 0x8, align 8
    float32 m_forceLimit; // offset 0x7C0, size 0x4, align 4
    float32 m_torqueLimit; // offset 0x7C4, size 0x4, align 4
    float32 m_minTeleportDistance; // offset 0x7C8, size 0x4, align 4
    bool m_bSnapObjectPositions; // offset 0x7CC, size 0x1, align 1
    bool m_bTreatEntity1AsInfiniteMass; // offset 0x7CD, size 0x1, align 1
    char _pad_07CE[0x2]; // offset 0x7CE
    CEntityIOOutput m_OnBreak; // offset 0x7D0, size 0x18, align 255
};
