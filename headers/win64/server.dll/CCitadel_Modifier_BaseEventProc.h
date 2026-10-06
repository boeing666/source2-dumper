#pragma once

class CCitadel_Modifier_BaseEventProc : public CCitadelModifier /*0x0*/  // sizeof 0x2E0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlVector< CBaseEntity* > m_vecProcdUnitsThisShot; // offset 0x148, size 0x18, align 8
    CUtlVector< CBaseEntity* > m_vecTrackedUnitsThisFrame; // offset 0x160, size 0x18, align 8
    ShotID_t m_nLastShotId; // offset 0x178, size 0x4, align 255
    char _pad_017C[0x164]; // offset 0x17C
};
