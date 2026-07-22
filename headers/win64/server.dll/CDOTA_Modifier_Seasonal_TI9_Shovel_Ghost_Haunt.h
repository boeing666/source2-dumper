#pragma once

class CDOTA_Modifier_Seasonal_TI9_Shovel_Ghost_Haunt : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 nDamageInstances; // offset 0x1A58, size 0x4, align 4
    GameTime_t m_flLastAttackTime; // offset 0x1A5C, size 0x4, align 255
    GameTime_t m_flLastMoveTime; // offset 0x1A60, size 0x4, align 255
    CHandle< CBaseEntity > m_hGhost; // offset 0x1A64, size 0x4, align 4
};
