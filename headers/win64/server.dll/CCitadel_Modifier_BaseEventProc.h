#pragma once

class CCitadel_Modifier_BaseEventProc : public CCitadelModifier /*0x0*/  // sizeof 0x208, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVector< CBaseEntity* > m_vecProcdUnitsThisShot; // offset 0xD0, size 0x18, align 8
    CUtlVector< CBaseEntity* > m_vecTrackedUnitsThisFrame; // offset 0xE8, size 0x18, align 8
    ShotID_t m_nLastShotId; // offset 0x100, size 0x4, align 255
    char _pad_0104[0x104]; // offset 0x104
};
