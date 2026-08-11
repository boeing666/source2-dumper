#pragma once

class CCitadel_Modifier_EtherealBullets_BulletBuff : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_iHitCount; // offset 0xD0, size 0x4, align 4
    ShotID_t m_shotProced; // offset 0xD4, size 0x4, align 255
    char _pad_00D8[0x80]; // offset 0xD8
};
