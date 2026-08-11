#pragma once

class CDOTA_Ability_EnragedWildkin_Hurricane : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 distance; // offset 0x580, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x584, size 0xC, align 4
    VectorWS m_vDashPosition; // offset 0x590, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x59C, size 0xC, align 4
    Vector m_vTravelDir; // offset 0x5A8, size 0xC, align 4
    float32 m_fTravelDistance; // offset 0x5B4, size 0x4, align 4
};
