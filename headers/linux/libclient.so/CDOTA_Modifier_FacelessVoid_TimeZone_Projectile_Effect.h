#pragma once

class CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_projectile_speed; // offset 0x1AA8, size 0x4, align 4
    float32 flRadius; // offset 0x1AAC, size 0x4, align 4
    Vector2D vCenter; // offset 0x1AB0, size 0x8, align 4
    Vector2D vLeft; // offset 0x1AB8, size 0x8, align 4
    Vector2D vForward; // offset 0x1AC0, size 0x8, align 4
};
