#pragma once

class CPhysMagnet : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB50]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0xB50, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0xB68, size 0x18, align 255
    float32 m_massScale; // offset 0xB80, size 0x4, align 4
    float32 m_forceLimit; // offset 0xB84, size 0x4, align 4
    float32 m_torqueLimit; // offset 0xB88, size 0x4, align 4
    char _pad_0B8C[0x4]; // offset 0xB8C
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0xB90, size 0x18, align 8
    bool m_bActive; // offset 0xBA8, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0xBA9, size 0x1, align 1
    char _pad_0BAA[0x2]; // offset 0xBAA
    float32 m_flTotalMass; // offset 0xBAC, size 0x4, align 4
    float32 m_flRadius; // offset 0xBB0, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0xBB4, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0xBB8, size 0x4, align 4
    char _pad_0BBC[0x4]; // offset 0xBBC
};
