#pragma once

class CDOTA_Modifier_Ogre_Magi_Ignite_Multicast : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_DOTA_BaseNPC > m_hTarget; // offset 0x1A78, size 0x4, align 4
    float32 multicast_delay; // offset 0x1A7C, size 0x4, align 4
    int32 m_nMultiCastCount; // offset 0x1A80, size 0x4, align 4
    float32 ignite_multicast_aoe; // offset 0x1A84, size 0x4, align 4
};
