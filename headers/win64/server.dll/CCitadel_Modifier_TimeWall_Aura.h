#pragma once

class CCitadel_Modifier_TimeWall_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x520, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x4F0]; // offset 0x0
    CUtlVector< CHandle< CCitadelBulletTimeWarp > > m_vecTimeWarps; // offset 0x4F0, size 0x18, align 8
    char _pad_0508[0x18]; // offset 0x508
};
