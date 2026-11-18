#pragma once

class CDOTA_Modifier_Jakiro_DoubleTrouble : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 second_attack_delay; // offset 0x1AF8, size 0x4, align 4
    float32 attack_damage_reduction; // offset 0x1AFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecondaryTarget; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
