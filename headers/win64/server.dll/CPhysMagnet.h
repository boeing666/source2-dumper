#pragma once

class CPhysMagnet : public CBaseAnimGraph /*0x0*/  // sizeof 0x9D0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x960]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0x960, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0x978, size 0x18, align 255
    float32 m_massScale; // offset 0x990, size 0x4, align 4
    float32 m_forceLimit; // offset 0x994, size 0x4, align 4
    float32 m_torqueLimit; // offset 0x998, size 0x4, align 4
    char _pad_099C[0x4]; // offset 0x99C
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0x9A0, size 0x18, align 8
    bool m_bActive; // offset 0x9B8, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0x9B9, size 0x1, align 1
    char _pad_09BA[0x2]; // offset 0x9BA
    float32 m_flTotalMass; // offset 0x9BC, size 0x4, align 4
    float32 m_flRadius; // offset 0x9C0, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0x9C4, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0x9C8, size 0x4, align 4
    char _pad_09CC[0x4]; // offset 0x9CC
};
