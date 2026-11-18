#pragma once

class CDOTA_Modifier_Ogre_Magi_Bloodlust : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bonus_attack_speed; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1AFC, size 0x4, align 4
    float32 self_bonus; // offset 0x1B00, size 0x4, align 4
    float32 modelscale; // offset 0x1B04, size 0x4, align 4
};
