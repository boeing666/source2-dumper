#pragma once

class CCitadel_Modifier_BaseEventProc : public CCitadelModifier /*0x0*/  // sizeof 0x2D0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CUtlVector< C_BaseEntity* > m_vecProcdUnitsThisShot; // offset 0x138, size 0x18, align 8
    CUtlVector< C_BaseEntity* > m_vecTrackedUnitsThisFrame; // offset 0x150, size 0x18, align 8
    ShotID_t m_nLastShotId; // offset 0x168, size 0x4, align 255
    char _pad_016C[0x164]; // offset 0x16C
};
