#pragma once

class CPhysMagnet : public CBaseAnimGraph /*0x0*/  // sizeof 0xB50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0xAE0, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0xAF8, size 0x18, align 255
    float32 m_massScale; // offset 0xB10, size 0x4, align 4
    float32 m_forceLimit; // offset 0xB14, size 0x4, align 4
    float32 m_torqueLimit; // offset 0xB18, size 0x4, align 4
    char _pad_0B1C[0x4]; // offset 0xB1C
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0xB20, size 0x18, align 8
    bool m_bActive; // offset 0xB38, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0xB39, size 0x1, align 1
    char _pad_0B3A[0x2]; // offset 0xB3A
    float32 m_flTotalMass; // offset 0xB3C, size 0x4, align 4
    float32 m_flRadius; // offset 0xB40, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0xB44, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0xB48, size 0x4, align 4
    char _pad_0B4C[0x4]; // offset 0xB4C
};
