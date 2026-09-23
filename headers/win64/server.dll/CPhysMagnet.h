#pragma once

class CPhysMagnet : public CBaseAnimGraph /*0x0*/  // sizeof 0xAB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA40]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0xA40, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0xA58, size 0x18, align 255
    float32 m_massScale; // offset 0xA70, size 0x4, align 4
    float32 m_forceLimit; // offset 0xA74, size 0x4, align 4
    float32 m_torqueLimit; // offset 0xA78, size 0x4, align 4
    char _pad_0A7C[0x4]; // offset 0xA7C
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0xA80, size 0x18, align 8
    bool m_bActive; // offset 0xA98, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0xA99, size 0x1, align 1
    char _pad_0A9A[0x2]; // offset 0xA9A
    float32 m_flTotalMass; // offset 0xA9C, size 0x4, align 4
    float32 m_flRadius; // offset 0xAA0, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0xAA4, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0xAA8, size 0x4, align 4
    char _pad_0AAC[0x4]; // offset 0xAAC
};
