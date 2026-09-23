#pragma once

class CPhysMagnet : public CBaseAnimGraph /*0x0*/  // sizeof 0xD90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD20]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0xD20, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0xD38, size 0x18, align 255
    float32 m_massScale; // offset 0xD50, size 0x4, align 4
    float32 m_forceLimit; // offset 0xD54, size 0x4, align 4
    float32 m_torqueLimit; // offset 0xD58, size 0x4, align 4
    char _pad_0D5C[0x4]; // offset 0xD5C
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0xD60, size 0x18, align 8
    bool m_bActive; // offset 0xD78, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0xD79, size 0x1, align 1
    char _pad_0D7A[0x2]; // offset 0xD7A
    float32 m_flTotalMass; // offset 0xD7C, size 0x4, align 4
    float32 m_flRadius; // offset 0xD80, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0xD84, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0xD88, size 0x4, align 4
    char _pad_0D8C[0x4]; // offset 0xD8C
};
