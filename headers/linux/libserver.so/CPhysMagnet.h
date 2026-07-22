#pragma once

class CPhysMagnet : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0xA70, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0xA88, size 0x18, align 255
    float32 m_massScale; // offset 0xAA0, size 0x4, align 4
    float32 m_forceLimit; // offset 0xAA4, size 0x4, align 4
    float32 m_torqueLimit; // offset 0xAA8, size 0x4, align 4
    char _pad_0AAC[0x4]; // offset 0xAAC
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0xAB0, size 0x18, align 8
    bool m_bActive; // offset 0xAC8, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0xAC9, size 0x1, align 1
    char _pad_0ACA[0x2]; // offset 0xACA
    float32 m_flTotalMass; // offset 0xACC, size 0x4, align 4
    float32 m_flRadius; // offset 0xAD0, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0xAD4, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0xAD8, size 0x4, align 4
    char _pad_0ADC[0x4]; // offset 0xADC
};
