#pragma once

class CPhysMagnet : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0x8D8, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0x8F0, size 0x18, align 255
    float32 m_massScale; // offset 0x908, size 0x4, align 4
    float32 m_forceLimit; // offset 0x90C, size 0x4, align 4
    float32 m_torqueLimit; // offset 0x910, size 0x4, align 4
    char _pad_0914[0x4]; // offset 0x914
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0x918, size 0x18, align 8
    bool m_bActive; // offset 0x930, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0x931, size 0x1, align 1
    char _pad_0932[0x2]; // offset 0x932
    float32 m_flTotalMass; // offset 0x934, size 0x4, align 4
    float32 m_flRadius; // offset 0x938, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0x93C, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
};
