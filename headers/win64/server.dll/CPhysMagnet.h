#pragma once

class CPhysMagnet : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0x798, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0x7B0, size 0x18, align 255
    float32 m_massScale; // offset 0x7C8, size 0x4, align 4
    float32 m_forceLimit; // offset 0x7CC, size 0x4, align 4
    float32 m_torqueLimit; // offset 0x7D0, size 0x4, align 4
    char _pad_07D4[0x4]; // offset 0x7D4
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0x7D8, size 0x18, align 8
    bool m_bActive; // offset 0x7F0, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0x7F1, size 0x1, align 1
    char _pad_07F2[0x2]; // offset 0x7F2
    float32 m_flTotalMass; // offset 0x7F4, size 0x4, align 4
    float32 m_flRadius; // offset 0x7F8, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0x7FC, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0x800, size 0x4, align 4
    char _pad_0804[0x4]; // offset 0x804
};
