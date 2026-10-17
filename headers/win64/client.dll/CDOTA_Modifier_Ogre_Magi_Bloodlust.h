#pragma once

class CDOTA_Modifier_Ogre_Magi_Bloodlust : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 bonus_attack_speed; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1AAC, size 0x4, align 4
    float32 self_bonus; // offset 0x1AB0, size 0x4, align 4
    float32 modelscale; // offset 0x1AB4, size 0x4, align 4
};
