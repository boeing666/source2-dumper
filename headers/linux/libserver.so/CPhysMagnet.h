#pragma once

class CPhysMagnet : public CBaseAnimGraph /*0x0*/  // sizeof 0xCB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0xC40, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0xC58, size 0x18, align 255
    float32 m_massScale; // offset 0xC70, size 0x4, align 4
    float32 m_forceLimit; // offset 0xC74, size 0x4, align 4
    float32 m_torqueLimit; // offset 0xC78, size 0x4, align 4
    char _pad_0C7C[0x4]; // offset 0xC7C
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0xC80, size 0x18, align 8
    bool m_bActive; // offset 0xC98, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0xC99, size 0x1, align 1
    char _pad_0C9A[0x2]; // offset 0xC9A
    float32 m_flTotalMass; // offset 0xC9C, size 0x4, align 4
    float32 m_flRadius; // offset 0xCA0, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0xCA4, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0xCA8, size 0x4, align 4
    char _pad_0CAC[0x4]; // offset 0xCAC
};
