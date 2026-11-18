#pragma once

class CPhysMagnet : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0xBB8, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0xBD0, size 0x18, align 255
    float32 m_massScale; // offset 0xBE8, size 0x4, align 4
    float32 m_forceLimit; // offset 0xBEC, size 0x4, align 4
    float32 m_torqueLimit; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0xBF8, size 0x18, align 8
    bool m_bActive; // offset 0xC10, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0xC11, size 0x1, align 1
    char _pad_0C12[0x2]; // offset 0xC12
    float32 m_flTotalMass; // offset 0xC14, size 0x4, align 4
    float32 m_flRadius; // offset 0xC18, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0xC1C, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
};
