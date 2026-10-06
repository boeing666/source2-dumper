#pragma once

class CCitadel_Modifier_EtherealBullets_BulletBuff : public CCitadelModifier /*0x0*/  // sizeof 0x218, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    int32 m_iHitCount; // offset 0x148, size 0x4, align 4
    ShotID_t m_shotProced; // offset 0x14C, size 0x4, align 255
    char _pad_0150[0xC8]; // offset 0x150
};
