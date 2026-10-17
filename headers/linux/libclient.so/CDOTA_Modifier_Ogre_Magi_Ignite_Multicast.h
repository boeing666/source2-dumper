#pragma once

class CDOTA_Modifier_Ogre_Magi_Ignite_Multicast : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_DOTA_BaseNPC > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    float32 multicast_delay; // offset 0x1AAC, size 0x4, align 4
    int32 m_nMultiCastCount; // offset 0x1AB0, size 0x4, align 4
    float32 ignite_multicast_aoe; // offset 0x1AB4, size 0x4, align 4
};
