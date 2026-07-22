#pragma once

class CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_projectile_speed; // offset 0x1A58, size 0x4, align 4
    float32 flRadius; // offset 0x1A5C, size 0x4, align 4
    Vector2D vCenter; // offset 0x1A60, size 0x8, align 4
    Vector2D vLeft; // offset 0x1A68, size 0x8, align 4
    Vector2D vForward; // offset 0x1A70, size 0x8, align 4
};
