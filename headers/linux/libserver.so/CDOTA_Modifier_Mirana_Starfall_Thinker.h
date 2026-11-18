#pragma once

class CDOTA_Modifier_Mirana_Starfall_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 starfall_secondary_radius; // offset 0x1AF8, size 0x4, align 4
    float32 starstruck_duration; // offset 0x1AFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B00, size 0x4, align 4
    float32 m_flDamage; // offset 0x1B04, size 0x4, align 4
    bool m_bStarDropped; // offset 0x1B08, size 0x1, align 1
    bool m_bSecondStar; // offset 0x1B09, size 0x1, align 1
    char _pad_1B0A[0x6]; // offset 0x1B0A
};
