#pragma once

class CDOTA_Modifier_Ogre_Magi_Ignite_Multicast : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_DOTA_BaseNPC > m_hTarget; // offset 0x1A58, size 0x4, align 4
    float32 multicast_delay; // offset 0x1A5C, size 0x4, align 4
    int32 m_nMultiCastCount; // offset 0x1A60, size 0x4, align 4
    float32 ignite_multicast_aoe; // offset 0x1A64, size 0x4, align 4
};
