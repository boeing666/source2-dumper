#pragma once

class CPhysMagnet : public CBaseAnimGraph /*0x0*/  // sizeof 0xB00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CEntityIOOutput m_OnMagnetAttach; // offset 0xA90, size 0x18, align 255
    CEntityIOOutput m_OnMagnetDetach; // offset 0xAA8, size 0x18, align 255
    float32 m_massScale; // offset 0xAC0, size 0x4, align 4
    float32 m_forceLimit; // offset 0xAC4, size 0x4, align 4
    float32 m_torqueLimit; // offset 0xAC8, size 0x4, align 4
    char _pad_0ACC[0x4]; // offset 0xACC
    CUtlVector< magnetted_objects_t > m_MagnettedEntities; // offset 0xAD0, size 0x18, align 8
    bool m_bActive; // offset 0xAE8, size 0x1, align 1
    bool m_bHasHitSomething; // offset 0xAE9, size 0x1, align 1
    char _pad_0AEA[0x2]; // offset 0xAEA
    float32 m_flTotalMass; // offset 0xAEC, size 0x4, align 4
    float32 m_flRadius; // offset 0xAF0, size 0x4, align 4
    GameTime_t m_flNextSuckTime; // offset 0xAF4, size 0x4, align 255
    int32 m_iMaxObjectsAttached; // offset 0xAF8, size 0x4, align 4
    char _pad_0AFC[0x4]; // offset 0xAFC
};
