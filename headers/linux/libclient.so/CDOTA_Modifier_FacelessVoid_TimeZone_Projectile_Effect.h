#pragma once

class CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_projectile_speed; // offset 0x1AF8, size 0x4, align 4
    float32 flRadius; // offset 0x1AFC, size 0x4, align 4
    Vector2D vCenter; // offset 0x1B00, size 0x8, align 4
    Vector2D vLeft; // offset 0x1B08, size 0x8, align 4
    Vector2D vForward; // offset 0x1B10, size 0x8, align 4
};
