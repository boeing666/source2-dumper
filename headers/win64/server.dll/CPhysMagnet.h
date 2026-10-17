#pragma once

class CPhysMagnet : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0x878, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0x890, size 0x18, align 255
    float32 m_massScale; // offset 0x8A8, size 0x4, align 4
    float32 m_forceLimit; // offset 0x8AC, size 0x4, align 4
    float32 m_torqueLimit; // offset 0x8B0, size 0x4, align 4
    char _pad_08B4[0x4]; // offset 0x8B4
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0x8B8, size 0x18, align 8
    bool m_bActive; // offset 0x8D0, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0x8D1, size 0x1, align 1
    char _pad_08D2[0x2]; // offset 0x8D2
    float32 m_flTotalMass; // offset 0x8D4, size 0x4, align 4
    float32 m_flRadius; // offset 0x8D8, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0x8DC, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0x8E0, size 0x4, align 4
    char _pad_08E4[0x4]; // offset 0x8E4
};
