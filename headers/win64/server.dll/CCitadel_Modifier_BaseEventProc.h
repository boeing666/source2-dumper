#pragma once

class CCitadel_Modifier_BaseEventProc : public CCitadelModifier /*0x0*/  // sizeof 0x2E8, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CUtlVector< CBaseEntity* > m_vecProcdUnitsThisShot; // offset 0x150, size 0x18, align 8
    CUtlVector< CBaseEntity* > m_vecTrackedUnitsThisFrame; // offset 0x168, size 0x18, align 8
    ShotID_t m_nLastShotId; // offset 0x180, size 0x4, align 255
    char _pad_0184[0x164]; // offset 0x184
};
