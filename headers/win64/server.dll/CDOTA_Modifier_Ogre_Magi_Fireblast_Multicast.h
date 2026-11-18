#pragma once

class CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CDOTA_BaseNPC > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    float32 multicast_delay; // offset 0x1AFC, size 0x4, align 4
    int32 m_nMultiCastCount; // offset 0x1B00, size 0x4, align 4
    bool m_bTalentCast; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
};
