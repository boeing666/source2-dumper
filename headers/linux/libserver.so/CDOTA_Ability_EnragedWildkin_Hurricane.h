#pragma once

class CDOTA_Ability_EnragedWildkin_Hurricane : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 distance; // offset 0x85C, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x860, size 0xC, align 4
    VectorWS m_vDashPosition; // offset 0x86C, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x878, size 0xC, align 4
    Vector m_vTravelDir; // offset 0x884, size 0xC, align 4
    float32 m_fTravelDistance; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x4]; // offset 0x894
};
